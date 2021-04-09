#include <iostream>

using namespace std;

/*
 Este Programa recibe un numero entero positivo y retorna la suma
 de todos sus digitos elevados a si mismos ademas de imprimir el
 numero mayor y la cantidad de veces que aparece
*/

int main()
{
    int n;
    cout<<"Ingrese un numero entero: ";cin>>n;
    while (n<0)
    {
        cout<<"Tiene que ser positivo."<<endl;
        cout<<"Ingrese un numero entero: ";cin>>n;
    }
    int n_co=n, suma=0, cifra,potencia, cifra_E=0, conta_E=0, suma_po;;
    while(n_co>0)
    {
        cifra=n_co%10;
        if(cifra>cifra_E)
        {
            cifra_E=cifra;
            conta_E=1;
        }
        else if(cifra==cifra_E)
        {
            conta_E++;
        }
        potencia=cifra;
        for (int i=1;i<cifra;i++)
        {
            suma_po=0;
            for(int j=0;j<potencia;j++)
            {
                suma_po+=cifra;
            }
            potencia=suma_po;
        }
        suma+=potencia;
        n_co=n_co/10;
    }
    cout<<"La suma de cada uno de los digitos elevados a si mismos del numero "<<n<<" es "<<suma<<endl;
    cout<<"El digito mayor encontrado es el "<<cifra_E<<" que aparece "<<conta_E<<" vez(ces)"<<endl;
}
