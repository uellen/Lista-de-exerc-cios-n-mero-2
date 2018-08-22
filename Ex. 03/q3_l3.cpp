#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int n , somatorio;

    cin>>n;

    for (int i = 0 ; i <= n ; i++){
        somatorio = somatorio + pow (i,2);
    }
    cout<<somatorio;

    return 0;
}
