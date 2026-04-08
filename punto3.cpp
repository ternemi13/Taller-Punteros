#include <iostream>
using namespace std;

int encontrarMax(int* arr, int n) {
    if (n <= 0) {
        cout << "Error: el arreglo esta vacio." << endl;
        return -1;
    }

    int max = *arr; 

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

int main() {
    int n;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "El arreglo no puede estar vacio." << endl;
        return 1;
    }

    int* arr = new int[n];

    cout << "Ingrese los elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); 
    }

    int max = encontrarMax(arr, n);
    cout << "El valor maximo es: " << max << endl;

    delete[] arr;

    return 0;
}
