#include <iostream>
using namespace std;

int main (){

    int n , i , contador = 0;
    char caracter;

    cin >> n;

    for (i = 0; i<n ; i++){
        cout << "Digite o caracter \n";
        cin >> caracter;
        if ( 'a'<= caracter && 'z' >= caracter ){
            contador = contador + 1;
        }
    }
    cout << "Numero de letras apresentadas: " <<contador;
}
