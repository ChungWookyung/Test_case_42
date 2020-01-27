#!/bin/bash

clear

echo "# **************************************************************************** #"
echo "#                                                                              #"
echo "#                                                         :::      ::::::::    #"
echo "#    PSC's MOULINETTE.sh                                :+:      :+:    :+:    #"
echo "#                                                     +:+ +:+         +:+      #"
echo "#    By: shpark <shpark@student.42.fr>              +#+  +:+       +#+         #"
echo "#                                                 +#+#+#+#+#+   +#+            #"
echo "#    Created: 2020/01/28 04:12:24 by shpark            #+#    #+#              #"
echo "#    Updated: 2020/01/28 04:12:24 by shpark           ###   ########.fr        #"
echo "#                                                                              #"
echo "# **************************************************************************** #"

echo "========== NORMINETTE  =========="
cd ../../

for i in $(seq 0 5); do
	cd ex0$i
	rm -rf main.c
	norminette -R CheckForbiddenSourceHeader | cat
	cd ../
done

cd Test_case_42/c04/

echo "========== MOVE FILE =========="

for i in $(seq 0 3); do
	cd ex0$i/
	cp main.c ../../../ex0$i/
	cd ../
done

cd ex04
cp main.c ../../../ex04/
cp main1.c ../../../ex04/
cd ../

cd ex05

cd ../../

echo "---------- GCC"

for i in $(seq 0 3); do
	cd ex0$i/
	echo "========== ex0$i ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main.c
	chmod +x a.out
	echo "========== RESULT =========="
	./a.out
	rm -rf a.out
	rm -rf main.c
	cd ../
done
