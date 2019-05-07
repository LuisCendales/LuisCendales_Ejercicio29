luis.png: luis.dat luis.py
    python luis.py

%.dat : a.out
    ./a.out 

a.out: luis.cpp
    g++ luis.cpp