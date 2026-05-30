#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;


int main(){

    int n, city=1;
    map<int,int> consum;
    map<int,int>::iterator it = consum.begin();

    cin >> n;

    while(n){

        int m = n;
        int cs = 0;
        int tp = 0;

        while(m){
            
            int x,y;
            cin >> x >> y;
            tp += x;
            cs += y;
            if(consum.find(y/x) == consum.end()){
                consum.insert(pair(y/x,x));
            }else{
                it = consum.find(y/x);
                it->second += x;
            }

            m--;

        }

        cout << "Cidade# " << city << ":"<< endl;
        for(auto i: consum){
            cout << i.second << "-" << i.first << " ";
        }
        
        printf("\nConsumo medio: %.2f m3.\n\n", ((100*cs)/tp)/100.0);
        
        consum.clear();
        cs = 0;
        tp = 0;
        
        cin >> n;
        city++;
    }

    return 0;
}