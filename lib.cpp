bool letteraono(char valore){
    if (valore>='A'&& valore<='Z' || valore>='a' && valore<='z'){
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

