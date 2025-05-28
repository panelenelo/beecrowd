#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    double a, b, c, x;

    double w1=2, w2=3, w3=5;

    cin >> a >> b >> c;

    x = ((a*w1) + (b*w2) + (c*w3))/(w1+w2+w3);

    printf("MEDIA = %.1lf\n", x);

    return 0;
}