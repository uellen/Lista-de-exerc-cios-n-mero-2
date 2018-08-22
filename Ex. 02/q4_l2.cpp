#include <iostream>
using namespace std;

int main () {
   int x,y;
   char caracter;

   cin >> x >> y >> caracter;

       if (caracter == '+'){
            cout<<x+y;
       }
       if (caracter == '-'){
            cout<<x-y;
       }
       if (caracter == '/'){
            cout<<x/y;
       }
       if (caracter == '*'){
            cout<<x*y;
       }
    return 0;
}
