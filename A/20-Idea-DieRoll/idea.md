# Idea
The idea of the exercise is that we have a rational number or a decimal number, and we want to simplify the numerator and denominator and find their greatest common divisor.

## Code (C/C++)
```c
// function for reducing
int ffr(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
```