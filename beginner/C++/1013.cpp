#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    int x = (a+b + abs(a-b))/2;
    int y = (x+c + abs(x-c))/2;

    cout << y << " eh o maior" << endl;

    return 0;
}