#!/bin/bash
#test_names=$(tests/build/testAll --list-test-names-only 2>&1 )
IFS=$'\n'
test_names=$(jq '.tests[].run' autograding.json|sed s/\"//g)
for t in $test_names
do
eval $t
done
# not needed but to remember the syntax
IFS=$'\n\t '
