#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main(){

    int n, t, c;
    map<int,int> proc;

    while(cin >> n){
        long long int total=0;
        do{
            cin >> t >> c;
            cout << t << " " << c << endl;
            proc.insert(pair(c,t));
        }while(n--);

        for(auto i : proc){
            cout << i.first << " - " << i.second << endl;
        }

        proc.clear();
        cout << "---------------" << endl;
    }

    

    return 0;
}