# include <stdio.h>
# include <conio.h>

float areaSquare ();

void main () {
      // clrscr();
      printf("Area of the square is %.2f sq unit ", areaSquare());
      getch ();
}

float areaSquare () {
     float width, height;
     printf("Find area of the square \n");
     printf("Enter height of the square :");
     scanf("%f", &height);
     printf("Enter width of the square :");
     scanf("%f", &width);
     // formula = area = width * height;
     return(width * height);
}