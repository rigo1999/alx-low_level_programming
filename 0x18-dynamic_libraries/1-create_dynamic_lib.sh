#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
