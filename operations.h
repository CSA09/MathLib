#include <math.h>
#include <stdexcept>


// Implementación de la suma
double sumar(double a, double b) {
    return a + b;
}

// Implementación de la resta
double restar(double a, double b) {
    return a - b;
}

// Implementación de la multiplicación
double multiplicar(double a, double b) {
    return a * b;
}

// Implementación de la división con manejo de error
double dividir(double a, double b) {
    if (b == 0) {
        printf("Error: División por cero\n");
        return 0;  // O podrías manejarlo de otra manera
    }
    return a / b;
}
