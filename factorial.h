#include <math.h>
#include <stdexcept>

using namespace std;

// Función para calcular el factorial de un número entero
unsigned long long factorial(int n) {
    if (n < 0) {
        throw runtime_error("Factorial of a negative number is not defined");
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Función para calcular la combinación de n sobre k
unsigned long long combination(int n, int k) {
    if (n < 0 || k < 0 || k > n) {
        throw runtime_error("Invalid values for combination");
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

