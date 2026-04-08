#include <iostream>
using namespace std;


void interpretarComoEntero(int* ptr) {
    cout << "Direccion (int*): " << ptr << endl;
    cout << "Valor reinterpretado como int: " << *ptr << endl;
}


void imprimirBytes(char* ptr, size_t size) {
    cout << "Direccion (char*): " << static_cast<void*>(ptr) << endl;
    cout << "Representacion en bytes:" << endl;

    for (size_t i = 0; i < size; i++) {
        cout << "Byte " << i << ": "
             << static_cast<int>(*(ptr + i)) << endl;
    }
}

int main() {
    float valor;

    cout << "Ingrese un valor float: ";
    cin >> valor;

    
    cout << "\nDireccion de valor (float*): " << &valor << endl;
    cout << "Valor original (float): " << valor << endl;


    int* ptrInt = reinterpret_cast<int*>(&valor);
    char* ptrChar = reinterpret_cast<char*>(&valor);

    cout << endl;

    interpretarComoEntero(ptrInt);
    cout << endl;
    imprimirBytes(ptrChar, sizeof(float));

    return 0;
}
