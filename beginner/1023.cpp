#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct consum{
    int peo;
    int com;
    int med;
};

int main(){

    int n;
    cin >> n;
    while(n){
        int m=n;
        int j=1;
        vector<consum> ption;
        while(m--){
            int x, y;
            cin >> x >> y;

            consum z = {x, y, y/x};

            ption.push_back(z);

            cout << "Cidade# " << j << ":"<< endl;

            j++;
        }

        cin >> n;
    }

    return 0;
}