# include <stdio.h>
# include <conio.h>

int cgpa ();

int main (){
    // clrscr();
    int n;
    printf("How many subject are there :\n");
    scanf("%d", &n);
    cgpa(n);
    printf("Your cpga is %f", cgpa(n));
    // getch();
    return 0;

}

int cgpa(int n) {
    int i;
    float subject [15], total = 0 , cgpa, Cgpapar;
    for(int i = 0; i < n; i++){
         printf("Enter point of subject %d(e.g : 7.6, 9.0) :", i + 1);
         scanf("%f", &subject[i]);
         total = total + subject[i];
    }
    cgpa  = total / n;
    Cgpapar = (float)(9.5 * (cgpa));
    return Cgpapar;
}