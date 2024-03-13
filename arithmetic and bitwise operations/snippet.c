// Declaration of variables

int* A;       // Integer array A with the base address pointing to variable A
int a;         
char b, c;           
short d;

// Append array elements

{ A[2], A[4] } = A[1] * A[0];                       
A[5] = A[4] / 230;
a = A[4] % 230;
b = a >> 16;                                              
c = (a & 0b'1000) | (b | 0b'0011);            
d = a << 2;                                                
A[6] = {b, c, d};                 
A[3] = (A[0] + A[1] - 100) - (A[2] + A[4] - A[5]);

// Output the value of variable c
printf("Value of c: %c\n", c);
