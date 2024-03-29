#!/bin/bash
names=$(cut -f 1 toparse.txt |cut -d ' ' -f 2)
total=0
score=0
for n in $names
do
	t=$(jq '.tests[]' .github/classroom/autograding.json |jq '.|select(.name |startswith("'$n'")).points')
	s=$(grep "$n[^_]" toparse.txt|cut -f 2)
	points=$(echo $s|cut -d '/' -f 1)
	outof=$(echo $s|cut -d '/' -f 2)
	if [ "$points" -ne "$outof" ]
	then
		disp=0
	else
		disp=$t
	fi
	score=$(($score+$disp))
	total=$((total+t))
done
echo Total $score/$total
gh pr comment 1 -b "Total: $score / $total"
