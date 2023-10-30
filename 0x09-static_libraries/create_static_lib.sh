#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -0 *.c
ar -rc liball.a *.c
ranlib liball.a
