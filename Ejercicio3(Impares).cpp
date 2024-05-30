#include <iostream>

 using namespace std;
 int main(){

    int n=0;

    cout << "Ingrese la cantidad de numeros que desea guardar. \n";
    cin >> n;

    int impares[n];
    for(int i=0; i<n; i++){
        
        do{

            cout << "Ingrese un numero: \n";
            cin >> impares[n];
            impares[i]=impares[n];
        
        }
        while(impares[i]%2==0);
    }
    cout << "Sus numeros son: \n";
    for(int i=0; i<n; i++){

        cout << impares[i] << "\n";
    }

    return 0;
 }