#include <iostream>
using namespace std;

void intercambiar(int *a, int *b){
  
  int temporal = *a;
  *a=*b;
  *b = temporal; 
  //asigno lso valores de uno al otro xd
  
}

int main() 
{
  
  int x = 10;
  int y = 20;
  
  cout<<"antes del intercambio a y b eran: "<<x << "   "<<y<<"\n";
  
  intercambiar(&x, &y);
  
    cout<<"despues del intercambio a y b son: "<<x << "   "<<y;
  

    return 0;
}
