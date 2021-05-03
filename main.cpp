// Autor: LozanoSoft

#include <iostream>

using namespace std;

int main(){

  // Operador ternario - ¡SOLO PUEDE UTILIZARSE SI EJECUTA UNA SOLA INSTRUCCIÓN AL CUMPLIR O NO LA CONDICIÓN!

  // (condición(es)) ? si_se_cumple : si_no_se_cumple
  // Sirve como asignación, impresión o retorno de función

  int num_1 = 10;
  int num_2 = 20;
  float num_3 = 30.01;

  cout << ((num_3 > 30) ? "'num_3' es mayor a 30" : "'num_3' no es mayor a 30") << endl; // Impresión
  cout << ((num_3 > 30 && num_2 < 25 && num_1 > 8.8) ? "Cumple las condiciones" : "No cumple las condiciones") << endl; // Impresión

  string mensaje = (num_3 > 30 && num_2 < 25 && num_1 > 8.8) ? "Cumple las condiciones" : "No cumple las condiciones"; // Asignación
  cout << "Mensaje: " << mensaje << endl;

  return 0;

}
