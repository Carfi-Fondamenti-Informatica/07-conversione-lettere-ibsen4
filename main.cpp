#include <iostream>
#include "PrimaLibreria.h"
using namespace std;

int main() {
    char valore;
    cin>>valore;
    if(letteraono(valore)==true) {
        cout << conversionelettere(valore);
    }
    else if (letteraono(valore)==false){
        cout<<"errore";
    }
    return 0;
}
