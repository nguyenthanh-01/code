# c

* %%writefile test.c

* %%writefile input.txt

* !gcc -std=c17 -Wall test.c -o test -lm
  
* !./test < input.txt

# cpp

* %%writefile test.cpp

* %%writefile input.txt

* !g++ -std=c++17 -Wall test.cpp -o test
  
* !./test < input.txt
