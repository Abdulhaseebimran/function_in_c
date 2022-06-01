# include <stdio.h>
# include <conio.h>

float areaCircle ();

void main () {
      printf("Area of the circle is %.2f sq unit",areaCircle());
      getch();
}

float areaCircle () {
     float pi = 3.14 , radius;
     printf("Find area of the circle \n");
     printf("Enter area of the radius :");
     scanf("%f", &radius);
     
     return pi * (radius * radius);
}