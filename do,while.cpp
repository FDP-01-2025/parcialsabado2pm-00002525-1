#include <iostream>
using namespace std;
int main()
{
int n,suma,i;
cout<<"CALCULAR LA SUMA DE DIGITOS"<<endl<<endl;

cout <<"Digite un numero: ";
cin>>n;

 i=n-1;

 do          
{
   suma= i+n;
   i--;
} while (i <= 0 );

cout<<"la suma de los digitos de "<<n<< " es: "<<suma<<endl;





    return 0;
}