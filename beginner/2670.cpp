#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int a, b, c, t1,t2,t3;

    cin >> a >> b >> c;

    t1 = b*2+c*4;
    t2 = a*2+c*2;
    t3 = a*4+b*2;

    cout << min(t1, min(t2,t3)) << endl;

    return 0;
}