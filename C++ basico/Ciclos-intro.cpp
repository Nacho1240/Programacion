/*
E S C R I B A    U N   P R O G R A M A   E N    C + +   Q U E

E N C U E N T R E    L A   S U M A   D E   L A   S E R I E :

1 + 1 1 + 1 1 1 + 1 1 1 1 + 1 1 1 1 1 + . . . 
D E     "N"  T É R M I N O S   D A D O
P O R     U N    U S U A R I O 
( P A R A N =  5 ,  L A  S U M A  E S
1 2 3 4 5 ) .

*/
#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0;
    int temp =0;
    cout << "Ingrese el valor de N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        suma = suma*10 + 1 ;
        temp += suma;
        for (int j = 1; j <= i; j++)
        {
            cout << "1 ";
            
        }
        cout << "+ ";
    }
    cout << " = " << temp << endl;
    return 0;
}


