/*Calcular el salario mensual de los empleados*/

#include "iostream"
#include "stdio.h"

using namespace std;

int main()
{
    int empleados, hora_nor, hora_extra;
    float salario_total;
    float descuento, seguro, AFP, renta;
    int contador=0;

    cout<<endl;
    cout<<"ESTE PROGRAMA CALCULA EL SALARIO TOTAL Y EL SALARIO REAL DE SUS EMPLEADOS EN DOLARES"<<endl;
    cout<<"POR FAVOR INTRODUZCA EL NUMERO DE EMPLEADOS QUE TENGA EN SU EMPRESA "<<endl;
    cin>>empleados;

    for ( int i =0; i < empleados; i++)
    {
    cout<<endl;
    cout<<"Por Favor introduzca la cantidad de horas trabajadas en la jornada normal: "<<endl;
    cin>>hora_nor;
    cout<<"Por Favor introduzca la cantidad de horas entras: "<<endl;
    cin>>hora_extra;
    salario_total = (hora_nor*1.75)+(hora_extra*2.50);

    if (salario_total >=500)
    {
      seguro=salario_total*0.04;
      AFP=salario_total*0.0625;
      renta=salario_total*0.10;

     descuento=salario_total - seguro - AFP - renta;

     cout<<endl;
     cout<<"EL SALARIO EXCEDE LOS $500. SE LE APLICA DESCUENTO DE IMPUESTOS SOBRE RENTA"<<endl;
     cout<<"El seguro es: $"<<seguro<<endl;
     cout<<"El AFP es: $"<<AFP<<endl;
     cout<<"La renta es: $"<<renta<<endl;
     cout<<endl;
     cout<<"EL SALARIO TOTAL SIN DESCUENTO ES: $"<<salario_total<<endl;
     cout<<"EL SALARIO REAL CON DESCUENTOS APLICADOS ES: $"<<descuento<<endl;
     contador ++;
      
    }else
    {
     seguro=salario_total*0.04;
     AFP=salario_total*0.0625;

     descuento=salario_total - seguro - AFP;

     cout<<"El seguro es: $"<<seguro<<endl;
     cout<<"El AFP es: $"<<AFP<<endl;

     cout<<endl;
     cout<<"EL SALARIO TOTAL SIN DESCUENTO ES: $"<<salario_total<<endl;
     cout<<"EL SALARIO REAL CON DESCUENTOS APLICADOS ES: $"<<descuento<<endl<<endl;
     contador ++;
    }
}
 cout<<"EL PROGRAMA HA FINALIZADO!"<<endl<<endl;

    return 0;
}