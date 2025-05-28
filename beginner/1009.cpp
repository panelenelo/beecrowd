#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    string n;
    double a, b;

    cin >> n >> a >> b;

    printf("TOTAL = R$ %.2lf\n", a+(b*0.15));

    return 0;
}