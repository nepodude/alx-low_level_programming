#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -0 *.c
ar -rc liball.a *.o
ranlib liball.a
