## c

* !gcc -std=c17 -Wall /usr/include/x86_64-linux-gnu/c++/11/bits/stdc++.h

* %%writefile test.c

* %%writefile input.txt

* !gcc -std=c17 -Wall -o test test.c -lm
  
* !./test

* !cat output.txt

## cpp

* !g++ -std=c++17 -Wall /usr/include/x86_64-linux-gnu/c++/11/bits/stdc++.h

* %%writefile test.cpp

* %%writefile input.txt

* !g++ -std=c++17 -Wall -o test test.cpp
  
* !./test

* !cat output.txt

## py

* %%writefile test.py

* %%writefile input.txt

* !python test.py < input.txt
