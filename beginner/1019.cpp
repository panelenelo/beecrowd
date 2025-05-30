#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int n,h,m,s;

    cin >> n;

    m = n/60;
    s = n%60;
    h = m/60;
    m = m%60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}