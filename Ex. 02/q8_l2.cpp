#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a , b , c ;
    int delta , r1 , r2;

    cin >> a >> b >> c;
    delta = pow (b,2) - 4*a*c;

    if ( delta < 0 ){

        delta = delta * (-1);

        r1 =  (-b  / 2*a) + sqrt (delta) /2*a;
        r2 =  (-b  / 2*a) - sqrt (delta) /2*a;

        if ( r1 == r2){
            cout<<" raizes iguais, x = "<<r1<<"i"<<'\n';
        }
        else{
            cout<<" Primeira raiz eh: x1 = "<<(-b/2*a) << " + " << sqrt (delta) /2*a << "i"<<'\n';
            cout<<" Primeira raiz eh: x1 = "<<(-b/2*a) << " - " << sqrt (delta) /2*a << "i"<<'\n';
        }

    }

    else{
        r1 =( -b + sqrt (delta) ) / 2*a;
        r2 =( -b - sqrt (delta) ) / 2*a;

        if ( r1 == r2){
            cout<<" raizes iguais, x = "<<r1<<'\n';
    }
        else{
            cout<<" Primeira raiz eh: x1 = "<<r1<<'\n';
            cout<<" segunda raiz eh : x2 = "<<r2<<'\n';
        }
    }


    return 0;
}

