#!/bin/bash
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
