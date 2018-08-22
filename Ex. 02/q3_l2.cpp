#include <iostream>
using namespace std;

int main () {
    int x , y , z;
    cin >> x >> y >> z;

    if (x < y+z && y < x+z && z < x+y){

       if ( x == y == z ){
            cout<<x<<" "<<y<<" "<<z<<": formam um triangulo equilatero"<<'\n';
       }
       if ( x == y || x == z || y == z ){
            cout<<x<<" "<<y<<" "<<z<<": formam um triangulo isosceles"<<'\n';
       }
       if ( x != y && x != z  &&  y != z ){

            cout<<x<<" "<<y<<" "<<z<<": formam um triangulo escaleno"<<'\n';
       }

    }
    else{
        cout<<x<<" "<<y<<" "<<z<<": nao formam um triangulo "<<'\n';
    }

    return 0;
}
