________________________________________________________________________________________________________________________________________________________________________________________________________________________
# Simple IIR Filter in C
________________________________________________________________________________________________________________________________________________________________________________________________________________________

This project implements a simple first-order Infinite Impulse Response (IIR) low-pass filter in C.

## Description

- The filter is a basic first-order low-pass filter with fixed coefficients a=0.2 and b=0.8.
- The output y[n] is computed as: y[n] = a * x[n] + b * y[n-1].
- The example input is an array of noisy sine-like samples.
- The program prints the input and filtered signals side by side.

## How to compile and run

Use `gcc` to compile:

```bash
gcc -o iir_filter iir_filter.c
./iir_filter
Output
The program outputs a table showing the input and filtered signals.

License
This code is released under the MIT License.
