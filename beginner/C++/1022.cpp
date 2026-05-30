#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x1, y1, x2, y2, tmp1, tmp2, tmp3;
    char op, g;

    cin >> n;

    for(n ; n>0 ; n--){
        cin >> x1 >> g >> y1 >> op >> x2 >> g >> y2;
        switch(op){
            case '+':
                tmp1 = (x1*y2 + x2*y1);
                tmp2 = (y1*y2);
                tmp3 = gcd(tmp1,tmp2);
                cout << tmp1 << "/" << tmp2 << " = " << tmp1/tmp3 << "/" << tmp2/tmp3 << endl;
            break;
            case '-':
                tmp1 = (x1*y2 - x2*y1);
                tmp2 = (y1*y2);
                tmp3 = gcd(tmp1,tmp2);
                cout << tmp1 << "/" << tmp2 << " = " << tmp1/tmp3 << "/" << tmp2/tmp3 << endl;
            break;
            case '*':
                tmp1 = (x1*x2);
                tmp2 = (y1*y2);
                tmp3 = gcd(tmp1,tmp2);
                cout << tmp1 << "/" << tmp2 << " = " << tmp1/tmp3 << "/" << tmp2/tmp3 << endl;
            break;
            case '/':
                tmp1 = (x1*y2);
                tmp2 = (x2*y1);
                tmp3 = gcd(tmp1,tmp2);
                cout << tmp1 << "/" << tmp2 << " = " << tmp1/tmp3 << "/" << tmp2/tmp3 << endl;
            break;
        }
    }

    return 0;
}