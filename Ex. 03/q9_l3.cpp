#include <iostream>
using namespace std;

int main (){

    int x , y;
    int mdc;
    int i;

    cin >> x >> y;

    for ( i = 1; i <= x ; i++){
        if (x % i == 0 && y % i == 0){
            mdc = i;
        }
    }
    cout << "O mdc entre " << x << " e " << y << " eh : "<<mdc;

    return 0;
}
