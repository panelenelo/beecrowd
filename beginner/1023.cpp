#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

struct residence {
    int people;
    int comsumption;
    int perPeople;
};



int main(){

    int n, city=1;
    list<residence> residences;
    list<residence>::iterator it;

    cin >> n;

    while(n){

        int m = n;


        while(m){
            residence resi;
            cin >> resi.people >> resi.comsumption;

            resi.perPeople = (resi.comsumption)/(resi.people);

            if(residences.empty()){
                residences.push_front(resi);
            }else {
                for(it=residences.begin() ; it!=residences.end() ; it++){
                    if(resi.perPeople <= it->perPeople){
                        residences.insert(it, resi);
                        break;
                    }else if(next(it) == residences.end()){
                        residences.push_back(resi);
                        break;
                    }
                }
            }
            m--;
        }

        int consumMed = 0;
        int totalPeople = 0;
        cout << "Cidade# " << city << ":"<< endl;
        for(auto i : residences){
            cout << i.people << "-" << i.perPeople << " ";
            consumMed += i.comsumption;
            totalPeople += i.people;
        }
        //cout << endl << "Consumo medio: " << consumMed/totalPeople << " m3." << endl << endl;
        printf("\nConsumo medio: %.2f m3.\n\n", consumMed/float(totalPeople));
        
        cin >> n;
        city++;
        residences.clear();
    }

    return 0;
}