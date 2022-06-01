# include <stdio.h>
# include <conio.h>

int fib(int n);

void main () {
     printf("Fibonacci is : %d", fib(10));
     getch();
}

int fib (int n) {
    if (n == 0) {
        return 0;
    } if (n == 1) {
        return 1;
    } 
    
    int fibNm1 = fib (n -1);
    int fibNm2 = fib (n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}