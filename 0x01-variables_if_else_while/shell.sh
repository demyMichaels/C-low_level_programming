#!/bin/bash
clear
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 $CFILE -o shell
./shell
betty $CFILE