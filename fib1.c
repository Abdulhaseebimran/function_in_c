# include <stdio.h>
# include <conio.h>

void fibonnacci (int n);

int main () {
    // clrscr();
    int num;
    printf("enter num : ");
    scanf("%d", &num);

     fibonnacci(num);
     return 0;
}

void fibonnacci (int n){
    int i,a,b,c;
    a = 1, b = 1;
    for (int i=0 ; i<=n ; i++){
        printf("%d \t", a);
        c = a + b;
        a = b;
        b = c;
    }
}