# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

void gpa();
void main () {
    // clrscr();
    
    gpa();
    getch();
}

void gpa() {
    char str[100], ch;
    int i, grade[5];
    float credit[5], gpa = 0.0, totalcredit = 0.0;
    printf("LETTER GRADE & CREDITS FOR EACH SUBJECT :");
    for(int i=0; i < 5; i++){
        printf("Subject %d (Grade: Credit) :", i+1);
        ch = getchar();
        grade[i] = ch;
        scanf("%f", &credit[i]);
        getchar();
    }
    printf("\n Subject | Grade | Credits :\n");
    for(int i=0 ; i<=5; i++){
        printf(" %d | %c | %0.f\n", i + 1, grade[i],credit[i]);
    }
    for (int i = 0; i < 5 ; i++)
    {
        switch(grade[i]){
            case 'S':
            gpa = gpa  + 10 * credit[i];
            totalcredit = totalcredit + credit[i];
            break;
            case 'A':
            gpa = gpa + 9 * credit[i];
			totalcredit = totalcredit + credit[i];
			break;
			case 'B':
			gpa = gpa + 8 * credit[i];
			totalcredit = totalcredit + credit[i];
			break;
			case 'C':
			gpa = gpa + 7 * credit[i];
			totalcredit = totalcredit + credit[i];
			break;
			case 'D':
			gpa = gpa + 6 * credit[i];
			totalcredit = totalcredit + credit[i];
			break;
			case 'E':
			gpa = gpa + 5 * credit[i];
			totalcredit = totalcredit + credit[i];
			break;
			default:
			printf("Given Wrong grade!!\n");
			exit(0);
			}

        }
        printf("GPA : %f \t credits : %f \n ", gpa, totalcredit);
        gpa = gpa / totalcredit;
        printf("GPA of your score is : %.2f\n", gpa);
        getch();
    }
    
