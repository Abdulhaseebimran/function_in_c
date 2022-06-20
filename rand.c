# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

void randNumber (int n,  int l);

int main () {
    //clrscr();
    int n ,limit;
    printf("How many random number you want : ");
    scanf("%d", &n);
    printf("Enter the limit of number :");
    scanf("%d", &limit);
    printf("\n\n");
    randNumber(n,limit);
    return 0;
}

void randNumber (int n, int l) {
    int i;
    srand(time(0));
    for (int i = 1; i < n; i++)
    {
        printf("%d", (rand()%l));
    }
    
}