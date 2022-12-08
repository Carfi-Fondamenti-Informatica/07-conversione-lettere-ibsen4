#include "PrimaLibreria.h"

bool letteraono(int valore){
    if (valore>=65 && valore<=90 || valore>=97 && valore<=122){
        return true;
    }
    else
        return false;
}

char conversionelettere(char valore){
     if(letteraono(valore)==true){
        char esito;
        if( valore>='A' && valore<='Z'){
         esito=valore+32;
        }
        else if(valore>='a' && valore<='z'){
         esito=valore-32;
        }
        return esito;
        }
     else if(letteraono(valore)==false){
         bool esito=false;
         return esito;
     }
}

