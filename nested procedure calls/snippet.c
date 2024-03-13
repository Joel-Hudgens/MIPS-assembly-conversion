#include <iostream>

// Function Declarations
int power(int a, int b);
void newElement(int* P, int k, int pow);

int main() {
    // Variable Declaration
    int *A, *P;     // Base addresses of A and P
    int n, k;       // Lengths of arrays A and B
    int pow;        // Return value from power function

    // Task of main function
    P[0] = 1;       // 0th element = A[0]^0 = 1

    for (int j = 1; j < n; j++) {
        k = j;      // Current length of array B
        pow = power(A[j], j);
        newElement(P, k, pow);
    }
    k++;
}

int power(int a, int b) {
    int pow = a;
    for (int l = 1; l < b; l++) {
        pow = pow * a;
    }
    return(pow);
}

void newElement(int* P, int k, int pow) {
    P[k] = pow;
}
