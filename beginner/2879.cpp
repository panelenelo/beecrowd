#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int n, p;

    cin >> n;
    int count=0;

    while(n--){
        cin >> p;
        if(p==1){
            continue;
        }else
            count++;
    }

    cout << count << endl;

    return 0;
}