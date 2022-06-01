# include <stdio.h>
# include <conio.h>

int factorial (int n);
 void main () {
      int n;
      printf("Enter Number :");
      scanf("%d", &n);
      printf("Factorial is : %d", factorial(n));
      getch();
 }

int factorial (int n) {
    if (n == 0)
    {
        return 1;
    }
    int factNm1 = factorial (n -1);
    int factN =  factNm1 * n;
    return factN; 
}