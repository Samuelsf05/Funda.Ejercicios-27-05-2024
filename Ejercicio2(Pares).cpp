/*Crear un programa, que solicite el tamaño del arreglo al usuario y que se puedan ingresar los números desde teclado y 
que evalué si un número es par y si es par que lo guarde en un arreglo. Y que imprima el arreglo*/
#include <iostream>

 using namespace std;
 int main(){

    int n=0;

    cout<< "Ingrese la cantidad de numeros que ingresara: \n";
    cin >> n;

    int j=0, pares[n], numeros[n];

    for(int i=0; i<n; i++){
    cout << "Digite un numero entero: \n";
    cin>> numeros[i];

    if(numeros[i]%2==0){

        pares[j]=numeros[i];
        j++;
        }
    
    }
    cout << "Sus numeros son: \n";
    for(int i=0; i<n; i++){

        cout << numeros[i] << "\n";
    }
    cout << "Los numeros pares son: \n";
    for(int k=0; k<j; k++){

        cout << pares[k] << "\n";
    }
    
    return 0;
 }