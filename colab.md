## c

* %%writefile test.c

* %%writefile input.txt

* !gcc -std=c17 -Wall -o test test.c -lm
  
* !./test

* !cat output.txt

## cpp

* %%writefile test.cpp

* %%writefile input.txt

* !g++ -std=c++17 -Wall -o test test.cpp
  
* !./test

* !cat output.txt

## py

* %%writefile test.py

* %%writefile input.txt

* !python test.py < input.txt
