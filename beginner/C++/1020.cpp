#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int n, a, m, d;

    cin >> n;

    a = n/365;
    m = (n%365)/30;
    d = (n%365)%30;

    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;

    return 0;
}