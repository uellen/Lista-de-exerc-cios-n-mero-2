#include <iostream>
using namespace std;

int main () {
    int x , y;
    int xvs , yvs;
    int xvi , yvi;

    cin >> x >> y;
    cin >> xvs >> yvs;
    cin >> xvi >> yvi;

    if ((x <= xvs && x >= xvi) && (y <= yvs && y >= yvi)){
        cout<<"O ponto faz parte do retangolo"<<'\n';
    }
    else{
        cout<<"O ponto nao faz parte do retangolo"<<'\n';
    }

    return 0;
}

