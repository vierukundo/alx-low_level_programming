#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c
gcc -shared *.o -o liball.so
