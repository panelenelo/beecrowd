#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int a, b;
    double c, t;

    cin >> a >> b >> c;

    t = b*c;

    cin >> a >> b >> c;

    t+= b*c;

    printf("VALOR A PAGAR: R$ %.2lf\n", t);

    return 0;
}