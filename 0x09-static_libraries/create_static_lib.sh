#!/bin/bash
gcc -wall -Werror -Wextra -pedantic -c *.c
ar -rs liball.a *.o
ranlib liball.a 
