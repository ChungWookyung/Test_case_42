#!/bin/bash

echo "========== PSC's MOULINETTE =========="

echo "========== MOVE FILE =========="

for i in $(seq 0 8); do
	cd ex0$i/
	cp main.c ../../../ex0$i/
done

cd ../../

echo "========== NORMINETTE  =========="

norminette -R CheckForbiddenSourceHeader | cat

echo "---------- GCC"

for i in $(seq 1 8); do
	cd ex0$i/
	echo "========== COMPILE =========="
	gcc -Wall -Wextra -Werror main.c *.c | cat
	chmod +x a.out
	echo "========== RESULT =========="
	./a.out
	rm -rf a.out
done
