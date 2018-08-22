#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a , b , c ;
    int delta , r1 , r2;

    cin >> a >> b >> c;
    delta = pow (b,2) - 4*a*c;
    r1 =( -b + sqrt ( delta) ) / 2*a;
    r2 = ( -b - sqrt ( delta) ) / 2*a;

    cout<<" Primeira raiz eh: "<<r1<<'\n';
    cout<<" segunda raiz eh : "<<r2<<'\n';
    cout<<delta<<endl;


    return 0;
}
