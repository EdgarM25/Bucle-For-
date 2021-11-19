#include <iostream>

using namespace std;

int main()
{
    cout<<"Programa que muestra numeros de manera descendente"<<endl;

    int n;
    cout<<"ingresa un numero: ";
    cin>>n;
            for( int i=n; i>=0; i-- ){
                cout<<i<<endl;
            }

            cout<<"Fin del programa.";
    return 0;
}
