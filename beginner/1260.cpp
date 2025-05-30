#include <bits/stdc++.h>

using namespace std;


int main(){
    
    cout << fixed << setprecision(4);
    
    int n;
    bool y;
    string x;
    
    cin >> n;
    cin.ignore();
    cin.ignore();
    //getline(cin, x);
    //getline(cin, x);

    while(n--){
        map<string, int> maps;
        double count=0;

        while(getline(cin, x)){
            if(x.empty())
                break;
            
            if(maps.count(x)){
                maps[x]++;
            }else{
                maps[x] = 1;
            }
            count++;
        }

        for(auto i: maps){
            cout << i.first << " " << (i.second/count)*100 << endl;
        }

        if(n!=0){
            cout << endl;
        }

    }

    return 0;
}


