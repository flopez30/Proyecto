#include <iostream>

using namespace std;

int main () {

float nota1, nota2, nota3, nota4, promedio;

cout<<"Digite la primera nota de la clase"<<endl;

cin>> nota1;

if(nota1 >5){
    cout<<"digite valores menores o iguales a 5";
    return 0;}

cout<<"Digite la segunda nota de la clase"<<endl;

cin>> nota2;


if(nota2 >5){
    cout<<"digite valores menores o iguales a 5";
    return 0;}

cout<<"Digite la tercera nota de la clase"<<endl;

cin>> nota3;


if(nota3 >5){
    cout<<"digite valores menores o iguales a 5";
    return 0;}

cout<<"Digite la cuarta nota de la clase"<<endl;

cin>> nota4;


if(nota4 >5){
    cout<<"digite valores menores o iguales a 5";
    return 0;}


promedio = (nota1 + nota2 + nota3 + nota4)/4;

if (promedio <3){
    cout<<"su promedio es:"<<promedio<<" ""No aprobado";
} 

if (promedio >=3 && promedio<=3.5){
    cout<<"su promedio es:"<<promedio<<" ""En este momento no tiene aprobada la materia pero tiene la oportunidad de recuperar" ;
}

if (promedio >3.5 && promedio<=5) {
    cout<<"su promedio es:"<<promedio<<" ""Aprobado";
}


return 0;


}


// FELIPE LOPEZ RAMIREZ