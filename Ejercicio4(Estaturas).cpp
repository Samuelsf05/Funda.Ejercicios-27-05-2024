#include <iostream>

 using namespace std;
 int main(){
       int alumnos=0;

       cout << "Ingrese su numero de estudiantes: \n";
       cin >> alumnos;

       float estaturas[alumnos];
       float promedio=0, resultado=0;

       for(int i=0; i<alumnos; i++){

        do{
            cout << "Cual es la estutara del alumno/a: \n";
            cin >> estaturas[alumnos];
            estaturas[i]=estaturas[alumnos];

            promedio = promedio + estaturas[i];
            resultado = promedio/alumnos;

        }while(estaturas[i]<0);
       }

       float bajos=0, altos=0;
       for(int j=0; j<alumnos; j++){

        if(estaturas[j]<resultado){
            
            bajos++;
        }
        else{
            
            altos++;
       }
        }

        cout << "El promedio de la estatura en su salon es " << resultado << ". \n";
        cout << "Hay "<< alumnos<< ". \n";
        cout << altos << " Son mas altos que la media. \n";
        cout << bajos << " Son mas bajos que la media. \n";

        return 0;
 }