#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    double a, b, x;

    double w1=3.5, w2=7.5;

    cin >> a >> b;

    x = ((a*w1) + (b*w2))/(w1+w2);

    printf("MEDIA = %.5lf\n", x);

    return 0;
}