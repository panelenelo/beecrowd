#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, v;
    list<int> pil;
    string word;

    cin >> n;
    cin.ignore();

    while(n--){
        getline(cin, word);
        if(word[1] == *"U"){

            string temp1 = word.substr(5, word.size()-1);
            int temp2 = stoi(temp1);
            pil.push_back(temp2);

        }else if(word == "POP"){

            if(pil.empty()){
                cout << "EMPTY" << endl;
                continue;
            }

            pil.pop_back();

        }else if(word == "MIN"){
            
            if(pil.empty()){
                cout << "EMPTY" << endl;
                continue;
            }

            int min = pil.front();
            
            for(list<int>::iterator i = pil.begin(); i != pil.end() ; i++){
                if(*i < min){
                    min = *i;
                }
            }
            cout << min << endl;
        }
    }

    return 0;
}