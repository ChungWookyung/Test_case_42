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

for i in $(seq 0 3); do
	cd ex0$i
	rm -rf main.c
	norminette -R CheckForbiddenSourceHeader | cat
	cd ../
done

cd Test_case_42/c06/

cd ../../

echo "---------- GCC"

cd ex00/
echo "========== ex00 ============"
echo "========= COMPILE =========="
gcc -Wall -Wextra -Werror ft_print_program_name.c
chmod +x a.out
echo "========== RESULT =========="
./a.out
rm -rf a.out
cd ../
cd ex01/
echo "========== ex01 ============"
echo "========= COMPILE =========="
gcc -Wall -Wextra -Werror ft_print_params.c
chmod +x a.out
echo "========== RESULT =========="
./a.out test1 test2 test3
rm -rf a.out
cd ../
cd ex02/
echo "========== ex02 ============"
echo "========= COMPILE =========="
gcc -Wall -Wextra -Werror ft_rev_params.c
chmod +x a.out
echo "========== RESULT =========="
./a.out 1 2 3 4 5 6 a b c d e f g k
rm -rf a.out
cd ../
cd ex03/
echo "========== ex03 ============"
echo "========= COMPILE =========="
gcc -Wall -Wextra -Werror ft_sort_params.c
chmod +x a.out
echo "========== RESULT =========="
./a.out \? \! 1 a 2 b 3 c 4 d \"
rm -rf a.out
cd ../

