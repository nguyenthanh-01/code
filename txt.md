* %%writefile test.c

* %%writefile input.txt

* !gcc -std=c17 -Wall -o test test.c
  
* !./test < input.txt

* %%writefile test.cpp

* %%writefile input.txt

* !g++ -std=c++17 -Wall -o test test.cpp
  
* !./test < input.txt
