#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra -Wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc
