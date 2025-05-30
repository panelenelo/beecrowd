#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    map<string, int> s;

    s["mangoes"] = 12;
    s["pines"] = 3;
    //cout << s["mangoes"] << endl;
    //cout << s["pines"] << endl;

    s["pines"]++;

    //cout << s["pines"] << endl;

    for(auto i: s){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}