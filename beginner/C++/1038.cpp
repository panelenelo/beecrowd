#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, double> table = {{1, 4.00}, {2, 4.50}, {3, 5.00}, {4, 2.00}, {5, 1.50}};

    int x, y;

    cin >> x >> y;

    double total = table[x]*y;

    //cout << "Total: R$" << total << endl;

    printf("Total: R$ %.2lf\n", total);

    return 0;
}