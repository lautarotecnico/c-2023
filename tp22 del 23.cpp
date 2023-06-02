#include <bits/stdc++.h>
using namespace std;

vector<int> sumaAcumulada(const vector<int>& vectorA) {
    vector<int> vectorAcumulado;
    int suma = 0;
    for (int elemento : vectorA) {
        suma += elemento;
        vectorAcumulado.push_back(suma);
    }
    return vectorAcumulado;
}

void mostrarVector(const vector<int>& vector) {
    cout << "[ ";
    for (int elemento : vector) {
        cout << elemento << " ";
    }
    cout << "]" << endl;
}

int main() {
    srand(time(0)); 

    vector<int> vectorA;
    for (int i = 0; i < 3; i++) {
        vectorA.push_back(rand() % 30);
    }

    cout << "Vector A: ";
    mostrarVector(vectorA);

    vector<int> vectorAcumulado = sumaAcumulada(vectorA);

    cout << "Vector Acumulado: ";
    mostrarVector(vectorAcumulado);

    return 0;
}