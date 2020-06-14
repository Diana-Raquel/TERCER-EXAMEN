// Programa que indique si un año es bisiesto o no

#include "iostream"

using namespace std;

int bisiesto(int);   //declaración de la función
int bisiesto(int a)   //definición de la función    
{
    if(a%4==0 and a%100!=0 or a%400==0)
        return 1;
    else
        return 0;
}
int main()
{
    int anio;

    cout<<"Introduzca el a"<<(char)164<<"o: "<<endl; //164 ascii de ñ
    cin>>anio;

    if (bisiesto(anio))

    cout<<"El a"<<(char)164<<"o ingresado es bisiesto"<<endl;
    else
    cout<<"El a"<<(char)164<<"o no es bisiesto"<<endl;
    
    return 0; 
}