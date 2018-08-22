#include <iostream>
using namespace std;

int main (){
    int n , info;
    int maximo = 0 , minimo = 0;

    cin >> n;

    for (int i = 0; i < n ; i++){
        cin>>info;
        if (info > maximo){
            maximo = info;
        }
        if (info < minimo){
            minimo = info;
        }
    }
    cout<<endl;
    cout<<"Maior valor da sequencia: "<<maximo<<"; Menor valor da sequencia: "<<minimo<<endl;


    return 0;
}
