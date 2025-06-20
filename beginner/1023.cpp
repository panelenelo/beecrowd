#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct consum{
    int peo;
    int com;
    int med;
};

void structsort(vector<consum> ption){

        //implement a bubble sort here

}

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

        }
        
        j++;

        cout << "Cidade# " << j << ":"<< endl;

        structsort(ption);

        cin >> n;
    }

    return 0;
}