#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wl,-soname -o liball.so *.o
