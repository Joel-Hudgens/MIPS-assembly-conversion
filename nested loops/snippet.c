// Declaration of variables

int* Array;       // Base address of array A 
int size;         // Length of the array A
int i, j, k;      // Given value to be removed from array

// Remove elements equal to val
i = 0;
while (i < size) {
    j = i + 1;
    while (j < size)  {
        if (Array[i] == Array[j]) {
            for (k = j; k < size - 1; k++)  {             
                Array[k] = Array[k + 1];      
            }                    
            size = size - 1;                           
        }
        else
            j++;
    }
    i++;
}
