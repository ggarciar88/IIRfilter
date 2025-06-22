#include <stdio.h>

#define LENGTH 20

// IIR filter first-order
// y[n] = a*x[n] + b*y[n-1]
// Coefficients: a = 0.2, b = 0.8
void iir_filter(float* input, float* output, int length) {
    float a = 0.2f;
    float b = 0.8f;
    output[0] = a * input[0];  // Inicialización

    for (int i = 1; i < length; i++) {
        output[i] = a * input[i] + b * output[i-1];
    }
}

int main() {
    float input_signal[LENGTH] = {0.0, 0.3, 0.5, 0.8, 1.0, 0.9, 0.7, 0.4, 0.1, -0.2,
                                 -0.4, -0.6, -0.7, -0.6, -0.4, -0.1, 0.2, 0.5, 0.7, 0.8};
    float filtered_signal[LENGTH] = {0};

    iir_filter(input_signal, filtered_signal, LENGTH);

    printf("Input Signal  | Filtered Signal\n");
    printf("-------------------------------\n");
    for (int i = 0; i < LENGTH; i++) {
        printf("%12.4f | %14.4f\n", input_signal[i], filtered_signal[i]);
    }

    return 0;
}
