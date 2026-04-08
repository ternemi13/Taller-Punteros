#include <iostream>
using namespace std;


int duplicar(int x) {
    return x * 2;
}

int triplicar(int x) {
    return x * 3;
}


void aplicarOperacion(int arr[], int n, int (*operacion)(int)) {
    for (int i = 0; i < n; i++) {
        arr[i] = operacion(arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    aplicarOperacion(arr, n, duplicar);

    cout << "Duplicado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    aplicarOperacion(arr, n, triplicar);

    cout << "Triplicado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
