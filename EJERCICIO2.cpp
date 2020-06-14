//ADIVINA EL NUMERO

#include "iostream"
#include "stdlib.h" // rand y RAND_MAX
#include "unistd.h" // getpid

using namespace std;

// Ajustes del juego

#define INTENTOS_MAXIMOS 5
#define INFERIOR 1 // Límite inferior para aleatoridad
#define SUPERIOR 100 // Límite superior para aleatoridad

// Prototipo de funciones
int aleatorio(int minimo, int maximo);

int main() {
  
  srand(getpid()); // Hay que alimentar a rand, solamente una vez

  // Obtener un número aleatorio que no le diremos al usuario
  int secreto = aleatorio(INFERIOR, SUPERIOR);
  int respuesta, intentos = 0;

  // Indicarle que adivine
  cout<<"ESTE JUEGO SE TRATA DE ADIVINAR EL NUMERO SECRETO!"<<endl;
  cout<<"TIENES QUE ADIVINAR UN NUMERO ENTRE 1 Y 100"<<endl;

	// ciclo infinito que se rompe desde dentro
  while (1) 
  {
    intentos++;
    cout<<"Escribe un numero:  "<<endl;
    cin>>respuesta;
    if (respuesta == secreto) 
    {
      cout<<"FELICIDADES! ADIVINASTE EL NUMERO"<<endl;
      cout<<"LO ADIVINASTE EN "<<intentos<<" INTENTOS"<<endl;
      break;
    } else if (respuesta < secreto) 
      {
      cout<<"ERROR!El NUMERO ES MAYOR QUE: "<<respuesta <<endl;
      } else // respuesta > secreto
       {
         cout<<"ERROR!EL NUMERO ES MENOR QUE: "<<respuesta<<endl;
       }

    if (intentos >= INTENTOS_MAXIMOS) 
    {
      cout<<"SE ACABARON LOS INTENTOS :( EL NUMERO SECRETO ERA: "<<secreto<<endl;
      break;
    }
  }
return 0;
}

// Devuelve un número aleatorio en un rango
int aleatorio(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}