## c

* %%writefile test.c

* %%writefile input.txt

* !gcc -std=c17 -Wall -Wextra -Wshadow -Wfloat-equal -o test test.c -lm
* !./test < input.txt > output.txt
* !cat output.txt

## cpp

* %%writefile test.cpp

* %%writefile input.txt

* !g++ -std=c++17 -Wall -Wextra -Wshadow -Wfloat-equal -o test test.cpp
* !./test < input.txt > output.txt
* !cat output.txt

## py

* %%writefile test.py

* %%writefile input.txt

* !python test.py < input.txt
