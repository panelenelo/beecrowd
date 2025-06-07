#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

//int calls=0;
//
//int fib(int n){
//    calls++;
//    if(n == 0)
//        return 0;
//    if(n == 1)
//        return 1;
//    else
//        return(fib(n-1) + fib(n-2));
//}

int main(){

    int n;

    cin >> n;

    while(n--){
        int m, r;
        
        cin >> m;

        //r = fib(m);
        
        vector<int> vec = {0, 1};

        for(int i=2; i < m+1 ; i++){
            vec.push_back(vec[i-1] + vec[i-2]);
        }

        for(auto i : vec){
            cout << i << endl;
        }

        cout << "mango" << endl;
        
        //cout << "fib(" << m << ") = " << calls-1 << " calls = " << r << endl;
    }


    return 0;
}