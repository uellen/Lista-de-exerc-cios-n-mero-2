#include <iostream>
using namespace std;

int main (){

    int l , h;
    cout <<"Insira a largura e a altura do retangulo. "<<endl;
    cin >> l >> h;


    for (int j = 1 ; j <= h ; j++){
        for (int i = 1 ; i <= l ; i++){
            cout<<" * ";
        }
        cout<<endl;
    }

}
