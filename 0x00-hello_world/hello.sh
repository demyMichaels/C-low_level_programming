#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -masm=intel $CFILE -o quote
./quote
echo $?
./quote 2> q
cat q
grep printf < 101-quote.c
grep putf < 101-quote.c
