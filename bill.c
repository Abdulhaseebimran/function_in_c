# include <stdio.h>
# include <conio.h>

int bill ();
void main () {
      printf("Your bill is %d", bill());
}

int bill () {
    int ac, room , unit;
    printf("Bill generate Program \n");
    printf("Enter No of Ac :");
    scanf("%d", &ac);
    printf("Enter No of Room :");
    scanf("%d", &room);
    printf("Enter No of Units :");
    scanf("%d", &unit);

    return (ac * unit) * room; 
}