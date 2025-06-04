#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    string word, crib;

    cin >> word;

    cin >> crib;

    int i=0, j=0, count=0;


    while(crib.size()+j <= word.size()){
        for(i=0;i<crib.size();i++){
            if(crib[i] == word[j+i]){
                break;
            }else if(i+1 == crib.size()){
                count++;
            }
        }
        j++;
    }

    cout << count << endl;
 
    return 0;
}