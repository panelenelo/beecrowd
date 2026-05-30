#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long x, y, sum;

    while(cin >> x >> y){
        for(long long i=(x-1) ; i>1 ; i--){
            x *= i;
        }
        for(long long i=(y-1) ; i>1 ; i--){
            y *= i;
        }
        if(x==0) x=1;
        if(y==0) y=1;

        sum = x+y;
        cout << sum << endl;
    }

    return 0;
}