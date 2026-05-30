#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    double r, a, pi = 3.14159;

    cin >> r;

    a = pi * (r*r);

    printf("A=%.4lf\n", a);
    //cout << "A=" << a << endl;

    return 0;
}