#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;

int main(){

    map<int,int> thing;

    thing.insert(pair(1,12));
    thing.insert(pair(2,22));
    thing.insert(pair(2,17));

    for(auto i : thing){
        if(i.first == 2){
            i.second = 19;
        }
        cout << i.first << " - " << i.second << endl;
    }
    

    return 0;
}




  
  