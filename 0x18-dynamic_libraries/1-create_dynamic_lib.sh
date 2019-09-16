#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wl,-soname -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
