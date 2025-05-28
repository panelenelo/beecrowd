#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int x;
    double y, c;

    cin >> x >> y;

    c = x/y;

    printf("%.3lf km/l\n", c);

    return 0;
}