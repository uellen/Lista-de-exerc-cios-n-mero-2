#include <iostream>
using namespace std;

int main () {
    int n , m;
    int potencia = 1;

    cin >> n >> m;


    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            potencia = potencia *i;
            cout<< potencia<<" ";
        }
        potencia = 1;
        cout<<endl;
    }

}
