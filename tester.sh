#!/usr/bin/zsh

# Ansi color code variables
red="\e[0;31m"
green="\e[32m"
blue="\e[34m"
expand_bg="\e[K"
blue_bg="\e[0;104m${expand_bg}"
red_bg="\e[0;101m${expand_bg}"
green_bg="\e[0;102m${expand_bg}"
# green="\e[0;32m"
white="\e[0;97m"
bold="\e[1m"
uline="\e[4m"
reset="\e[0m"


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
[[ "$OK" == "OK" ]] && OK="${green}OK${reset}" || OK="${red}KO${reset}"
printf "\tSorted: %s\n\t\t" $ARG
echo $OK
printf "\t\tNumber of steps: %d\n" $WC

for i in {1..5}
do
    ARG=`./number_generator.py 5 -100 100`
    OK=`./push_swap $ARG | ./checker_linux $ARG`
    WC=`./push_swap $ARG | wc -l`
    [[ "$OK" == "OK" ]] && OK="${green}OK${reset}" || OK="${red}KO${reset}"
    printf "\tRandom: %s\n\t\t" $ARG
    echo $OK
    echo -n "${blue}\t\tNumber of steps:"
    echo "${WC}${reset}"
done



echo ""
echo "Testing 10 numbers"

for i in {1..5}
do
    ARG=`./number_generator.py 10 -100 100`
    OK=`./push_swap $ARG | ./checker_linux $ARG`
    WC=`./push_swap $ARG | wc -l`
    [[ "$OK" == "OK" ]] && OK="${green}OK${reset}" || OK="${red}KO${reset}"
    printf "\tRandom: %s\n\t\t" $ARG
    echo $OK
    echo -n "${blue}\t\tNumber of steps:"
    echo "${WC}${reset}"
done


echo ""
echo "Testing 50 numbers"

for i in {1..5}
do
    ARG=`./number_generator.py 50 -1000 1000`
    OK=`./push_swap $ARG | ./checker_linux $ARG`
    WC=`./push_swap $ARG | wc -l`
    [[ "$OK" == "OK" ]] && OK="${green}OK${reset}" || OK="${red}KO${reset}"
    printf "\tRandom: %s\n\t\t" $ARG
    echo $OK
    echo -n "${blue}\t\tNumber of steps:"
    echo "${WC}${reset}"
done



echo ""
echo "Testing 100 numbers"

for i in {1..5}
do
    ARG=`./number_generator.py 100 -1000 1000`
    OK=`./push_swap $ARG | ./checker_linux $ARG`
    WC=`./push_swap $ARG | wc -l`
    [[ "$OK" == "OK" ]] && OK="${green}OK${reset}" || OK="${red}KO${reset}"
    printf "\tRandom: %s\n\t\t" $ARG
    echo $OK
    echo -n "${blue}\t\tNumber of steps:"
    echo "${WC}${reset}"
done



echo ""
echo "Testing 500 numbers"

for i in {1..5}
do
    ARG=`./number_generator.py 500 -1000 1000`
    OK=`./push_swap $ARG | ./checker_linux $ARG`
    WC=`./push_swap $ARG | wc -l`
    [[ "$OK" == "OK" ]] && OK="${green}OK${reset}" || OK="${red}KO${reset}"
    printf "\tRandom: %s\n\t\t" $ARG
    echo $OK
    echo -n "${blue}\t\tNumber of steps:"
    echo "${WC}${reset}"
done
