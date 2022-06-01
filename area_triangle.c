# include <stdio.h>
# include <conio.h>

float areaTriangle ();
void main () {
    // clrscr();
    printf("Area of the Triangle is %.2f sq unit", areaTriangle()),
    getch();
}

float areaTriangle () {
    float height, Base;

    printf("Find area of the triangle \n");
    printf("Enter height of the Triangle :");
    scanf("%f", &height);
    printf("Enter Base of the Triangle :");
    scanf("%f", &Base);

    return (height * Base) / 2;
}