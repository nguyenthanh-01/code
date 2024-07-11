# c

* %%writefile test.c

* %%writefile input.txt

* !gcc -std=c17 -Wall -o test test.c -lm
  
* !./test < input.txt

# cpp

* %%writefile test.cpp

* %%writefile input.txt

* !g++ -std=c++17 -Wall -o test test.cpp
  
* !./test < input.txt

# py

* %%writefile test.py

* %%writefile input.txt

* !python test.py < input.txt

# rs

* !apt install rustc

* %%writefile test.rs

* %%writefile input.txt

* !rustc test.rs

* !./test < input.txt
