#!/bin/sh

arg="3 2 1"

checker_bin="./out/checker"
push_swap_bin="./out/push_swap"

printf 'arg: %s\n\n' "$arg"

# Get push_swap result
result=$($push_swap_bin $arg)
printf 'push_swap result:\n%s\n\n' "$result"

# Get checker result
result=$(echo $result | $checker_bin $arg)
echo 'checker result:' $result