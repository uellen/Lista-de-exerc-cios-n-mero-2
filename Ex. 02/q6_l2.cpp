#include <iostream>
using namespace std;

int main () {
    char caracter;

    cin >> caracter;

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
        cout<<"Eh uma vogal"<<'\n';
    }
    else if ( 'a' < caracter &&  caracter <= 'z'){
        cout<<"O caracter digitado eh uma consoante"<<'\n';
    }
    else{
        cout<<"O caracter digitado eh caracter aleatorio"<<'\n';
    }

    return 0;
}
