#include <iostream>
#include <header.h>
using namespace std;
// start brach dev

int main()
{ int a;
    int b;
    char op;
    cout << "Enter two operands: ";
      cin >> a >> b;
      cout << "Enter operator: +, -, *, /: ";
       cin >> op;
       switch(op) {

           case '+':
             cout << MySum(a, b) << endl;
             break;

           case '*':
             cout << MyMul(a, b) << endl;
             break;

           default:
             cout << "Error!!!!!";
             break;
         }




system("pause");
return 0;
}
