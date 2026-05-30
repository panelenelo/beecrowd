#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    while(n--){
        int f1, f2;

        cin >> f1 >> f2;

        if(f2>f1){
            int temp=f1;
            f1 = f2;
            f2 = temp;
        }

        int temp;

        while(true){
            if(f1%f2){
                temp = f1%f2;
                f1 = f2;
                f2 = temp;
            }else{
                break;
            }
        }

        cout << f2 << endl;

    }

    return 0;
}