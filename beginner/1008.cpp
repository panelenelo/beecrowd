#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int a, b;
    double c;

    cin >> a >> b >> c;

    cout << "NUMBER = " << a << endl;
    //cout << "SALARY = US$ " <<  b*c << endl;
    printf("SALARY = U$ %.2lf\n",b*c);

    return 0;
}