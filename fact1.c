# include <stdio.h>
# include <conio.h>

int factorial (int n);

int main () {
    // clrscr();
    int num;
    printf("Enter number :");
    scanf("%d", &num);
    printf("factorial of the given number is : %d", factorial(num));
    return 0;
}

int factorial (int n) {
    int i , f = 1;
    for (int i = 1; i<=n; i++){
        f = f * i;
    }
    return f;
}