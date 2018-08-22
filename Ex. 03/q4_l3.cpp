#include <iostream>
using namespace std;

int main (){
    int n;
    float x;

    int somatorio = 0 , potencia = 1;
    cin >> n >> x;

    for(int i = 0; i<n ; i++){
        potencia = potencia * x;
    }
    for(int i = 0; i<n ; i++){
        somatorio = somatorio + (2*i);
    }
    cout<<potencia<<endl;
    cout<<somatorio;

}
