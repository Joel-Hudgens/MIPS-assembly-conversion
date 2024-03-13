int main(int a, int b) {         
    int result = a * recursion(abs(a+b), abs(a-b)) - b * recursion(abs(b-a), abs(b+a));        
}

int recursion(int x, int y) {
   if (x <= 0 && y <= 0)
       return(0);
   else if (x > 0 && y <= 0)
       return(x);
   else if (x <= 0 && y > 0)
       return(y);
   else
       return(recursion(x-1, y) + recursion(x, y-1));
} 
