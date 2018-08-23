#include <iostream>
using namespace std;

int main (){
    int ano = 1;
    float populacao_A = 1.0 , populacao_B = 1.0 ;

    cin>> populacao_A >> populacao_B;

    while ( populacao_B < populacao_A){
        populacao_A = populacao_A * 1.02;
        populacao_B = populacao_B * 1.04;
        ano++;

    }
    cout << "A populacao B sera maior que a populacao A em " <<ano<<endl;

    return 0;

}
