#include <iostream>
using namespace std;

int sumar(int *arr, int n){
  
  int suma = 0;
  
  for(int i = 0 ; i<n;i++){
    
    suma += *(arr +i);
    
  }
  
  return suma;
}

int main() 
{
  int n;
  cout<<"ingrese el tamaño del arreglo :D: "<<"\n";
  cin>>n;
  
  
  int *arr = new int[n];
  
  for(int i = 0 ; i<n ; i++ ){
    cout <<"ingrese el elemento"<< i <<": "<<"\n";
    cin >> *(arr + i);
    
    
  }
  
  int resultado = sumar(arr, n);
  
  cout<<"la suma de los elemntos  es: "<< resultado;
  
  delete[] arr;
  
  
 
    return 0;
}
