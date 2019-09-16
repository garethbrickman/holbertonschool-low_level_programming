#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC *.c -shared -o liball.so
