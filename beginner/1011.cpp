#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    double a, pi = 3.14159;

    cin >> a;

    printf("VOLUME = %.3lf\n", (4.0/3) * pi * (a*a*a));

    return 0;
}