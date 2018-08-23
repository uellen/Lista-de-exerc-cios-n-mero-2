#include <iostream>
using namespace std;

int main () {

    char caracter;
    cout<<"Digite uma letra \n";
    cin >> caracter;

    while (caracter != '$'){
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ){
            cout<<"Vogal \n";
        }
        else if (caracter > 'a' && caracter <= 'z'){
            cout<<"Consoante \n";
        }
        cout<<"Digite uma letra \n";
        cin >> caracter;

    }
    return 0;
}
