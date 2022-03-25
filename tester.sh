#!/usr/bin/zsh

echo "Testing 2 numbers"
echo "	Sorted: ./push_swap -2147483648 2147483647"; printf "\t\t"
./push_swap -2147483648 2147483647 | ./checker_linux -2147483648 2147483647
echo "	Not sorted: ./push_swap 2147483647 -2147483648"; printf "\t\t"
./push_swap 2147483647 -2147483648 | ./checker_linux 2147483647 -2147483648




echo ""
echo "Testing 3 numbers"
echo "	Sorted: ./push_swap -100 0 100"; printf "\t\t"
ARG="-100 0 100"
./push_swap $ARG | ./checker_linux $ARG
echo "	Not sorted: ./push_swap -100 100 0"; printf "\t\t"
ARG="-100 100 0"
./push_swap $ARG | ./checker_linux $ARG; printf "\t\tNumber of steps: "
./push_swap $ARG | wc -l




echo ""
echo "Testing 5 numbers"

ARG="0 1 2 3 4"
OK=`./push_swap $ARG | ./checker_linux $ARG`
WC=`./push_swap $ARG | wc -l`
printf "\tSorted: %s\n\t\t" $ARG
./push_swap $ARG | ./checker_linux $ARG; printf "\t\tNumber of steps: "
./push_swap $ARG | wc -l

ARG=`./number_generator.py 5 -2147483648 2147483649`
printf "\tRandom: %s\n\t\t" $ARG
./push_swap $ARG | ./checker_linux $ARG; printf "\t\tNumber of steps: "
./push_swap $ARG | wc -l

ARG=`./number_generator.py 5 -2147483648 2147483649`
printf "\tRandom: %s\n\t\t" $ARG
./push_swap $ARG | ./checker_linux $ARG; printf "\t\tNumber of steps: "
./push_swap $ARG | wc -l

ARG=`./number_generator.py 5 -2147483648 2147483649`
printf "\tRandom: %s\n\t\t" $ARG
./push_swap $ARG | ./checker_linux $ARG; printf "\t\tNumber of steps: "
./push_swap $ARG | wc -l

ARG=`./number_generator.py 5 -2147483648 2147483649`
printf "\tRandom: %s\n\t\t" $ARG
./push_swap $ARG | ./checker_linux $ARG; printf "\t\tNumber of steps: "
./push_swap $ARG | wc -l





echo ""
echo "Testing 10 numbers"

echo ""
echo "Testing 100 numbers"

echo ""
echo "Testing 500 numbers"
