#include <stdio.h>

// Recursive function to display binary representation of integer part
void display_recursive(int a[], int n) {
    if (n <= 0) return;
    printf("%d", a[n - 1]);
    display_recursive(a, n - 1);
}

// Recursive function to handle fractional part conversion
void fractional_recursive(float decimal_part, int k) {
    if (k <= 0 || decimal_part == 0) return;
    decimal_part *= 2;
    int fractional_bit = (int)decimal_part;
    printf("%d", fractional_bit);
    fractional_recursive(decimal_part - fractional_bit, k - 1);
}

// Recursive function to convert integer part to binary
int convert_integer_recursive(int integer_part, int remainder[], int i) {
    if (integer_part == 0) return i;
    remainder[i] = integer_part % 2;
    return convert_integer_recursive(integer_part / 2, remainder, i + 1);
}

// Function to convert a floating-point number to binary
void binary(float n, int k) {
    // Separate the integer and fractional parts
    int integer_part = (int)n;
    float decimal_part = n - integer_part;

    // Convert the integer part to binary using recursion
    int remainder[100];
    int count = convert_integer_recursive(integer_part, remainder, 0);

    // Display the integer part in binary
    display_recursive(remainder, count);
    printf(".");

    // Convert and display the fractional part in binary using recursion
    fractional_recursive(decimal_part, k);
}

int main() {
    float a = 4.47;
    int precision = 4;

    printf("Binary representation of %.2f with %d fractional bits: ", a, precision);
    binary(a, precision);

    return 0;
}

