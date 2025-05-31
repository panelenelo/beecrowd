#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> list = {13, 21, 51, 2, 1, 17, 9, 35};

    for(auto i: list){
        cout << i << endl;
    }

    sort(list.begin(), list.end());

    cout << "---------------------------" << endl;

    for(auto i: list){
        cout << i << endl;
    }

    return 0;
}