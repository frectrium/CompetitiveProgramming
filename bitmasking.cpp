#include <bits/stdc++.h>
using namespace std;

int getBit(int &n, int i){
    int mask = (1<<i);
    return (n&mask) > 0 ? 1 : 0;
}

void setBit(int &n, int i){
    int mask = (1<<i);
    n = (n|mask);
}

void clearBit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}

void updateBit(int &n, int i, int v){
    int mask = ~(1<<i);
    n = n & mask;
    mask = (v<<i);
    n = (n|mask);
}

void clearnBits(int &n, int i){
    int mask = (-1<<i);
    n = (n & mask);
}

void clearBitRange(int &n, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n & mask;
}

void replaceBits(int &n, int m, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n & mask;
    mask = m << j;
    n = n | mask;
}