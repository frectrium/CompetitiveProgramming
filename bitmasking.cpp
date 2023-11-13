#include <bits/stdc++.h>
using namespace std;

int getbit(int &n, int i){
    int mask = (1<<i);
    return (n&mask) > 0 ? 1 : 0;
}

void setbit(int &n, int i){
    int mask = (1<<i);
    n = (n|mask);
}

void clearbit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}

void updatebit(int &n, int i, int v){
    int mask = ~(1<<i);
    n = n & mask;
    mask = (v<<i);
    n = (n|mask);
}