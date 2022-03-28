#!/usr/bin/zsh

rm -rf debug.txt
for i in {1..500}
do
		echo "Number: $i"
		ARG=`./number_generator.py $i -1000 1000` && valgrind -q ./push_swap $ARG 2>>debug.txt 1>/dev/null
done
