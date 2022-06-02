# include <stdio.h>
# include <conio.h>

char findGrades (int score);

void main () {
    int score;
    char grades;

    printf("Enter score (0 - 100) :");
    scanf("%d", &score);

    grades = findGrades (score);

    if (grades=='\0')
    {
        printf("INVALID GRADES !");
    } else 
      printf("GRADE %c \n", grades);
    
    getch();
}

char findGrades (int score) {
    if (score<0 || score > 100){
        return '\0';
    }
    if (score >90 && score<=100)
    {
        return 'A';
    } else if (score >=80)
    {
        return 'B';
    } else if (score >=70)
    {
        return 'C';
    } else if (score >=60)
    {
        return 'D';
    } else if (score >=50)
    {
       return 'E';
    } else {
        return 'F';
    }
    
    
    
    
    
}