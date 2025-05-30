#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, count=0;
    string x;

    cin >> n;

    while(n--){
        cin >> x;
        stack<int> p;
        for(auto i: x){
            if(i == '<'){
                p.push(1);
            }else if(i == '.'){
                continue;
            }else if(i == '>' && !(p.empty())){
                p.pop();
                count++;
            }
        }

        cout << count << endl;
        count=0;
        
    }

    return 0;
}