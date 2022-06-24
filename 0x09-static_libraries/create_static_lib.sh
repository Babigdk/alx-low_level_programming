#!/bin/bash
gcc -wall -werror -wextra -pedantic -c *.c
ar -rc libmy.a *.o
ranlib libmy.a
