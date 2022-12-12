#!/bin/bash
gcc -fPIC -g -c -wall -pedantic -werror -wextra -wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc
