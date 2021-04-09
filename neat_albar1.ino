/*
 Este Programa recibe un numero entero positivo y retorna la suma
 de todos sus digitos elevados a si mismos ademas de imprimir el
 numero mayor y la cantidad de veces que aparece
*/

int main(){
  
  init();
// SETUP
  Serial.begin(9600);
  
  int n;
  Serial.print("Ingrese un numero entero: ");
  while (Serial.available()==0);
  n=Serial.parseInt();
  while (n<0)
  {
    Serial.print("Tiene que ser positivo.");
    Serial.print("Ingrese un numero entero: ");
    while (Serial.available()==0);
    n=Serial.parseInt();
  }
  int n_co=n, suma=0, cifra,potencia, cifra_E=0;
  int conta_E=0, suma_po;
  
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
  Serial.print("La suma de cada uno de los digitos elevados a si mismos del numero ");
  Serial.print(n);
  Serial.print(" es ");
  Serial.print(suma);
  Serial.print("\n");
  Serial.print("El digito mayor encontrado es el ");
  Serial.print(cifra_E);
  Serial.print(" que aparece ");
  Serial.print(conta_E);
  Serial.print(" vez(ces)");
  
  // FIN SETUP
  while(true){
    // LOOP
    // FIN LOOP
  }
  
  return 0;
}