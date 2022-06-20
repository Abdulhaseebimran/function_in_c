# include <stdio.h>
# include <conio.h>

void checkPrime(int num);

int main () {
     int num;
     printf("Enter Number :");
     scanf("%d", &num);
     
    checkPrime (num);
    //getch();
}

void checkPrime (int num) {
    int count =0;
   for(int i = 2; i<=num/2; i++)
   {
       if(num%i== 0){
          count++;
          break;
       }
   } if (count !=0)
   {
       printf("This is not a prime number");
   } else {
       printf("This is a prime number");
   }
   
}