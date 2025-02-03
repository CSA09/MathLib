#include <iostream>
#include "MyMathLib.h"
#include "operations.h"
#include "factorial.h"

using namespace std;
int main() {
    cout << "Hello World!\n";

    // Operaciones matemáticas básicas
    double a = 10.0, b = 5.0;
    cout << "Suma: " << sumar(a, b) << '\n';
    cout << "Resta: " << restar(a, b) << '\n';
    cout << "Multiplicación: " << multiplicar(a, b) << '\n';
    
    try {
        cout << "División: " << dividir(a, b) << '\n';
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << '\n';
    }

    // Raíz cuadrada
    cout << "Sqrt(9) = " << mySqrt(9) << '\n';

    // Factorial y combinaciones
    int n = 5, k = 2;
    try {
        cout << "Factorial de " << n << " es " << factorial(n) << '\n';
        cout << "Combinación C(" << n << ", " << k << ") = " << combination(n, k) << '\n';
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}