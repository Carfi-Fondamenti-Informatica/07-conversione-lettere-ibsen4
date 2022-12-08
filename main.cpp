#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char valore;
    char esito;
    cin>>valore;
    if(letteraono(valore)==true) {
        esito=conversionelettere(valore);
        cout<<esito;
    }
    else if (letteraono(valore)==false){
        cout<<"errore"<<endl;
    }
    return 0;
}
