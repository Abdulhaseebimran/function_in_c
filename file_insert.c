	#include <stdio.h>
	#include <string.h>
	#include <conio.h>
	#include <stdlib.h>
	struct filing
	{
	    char name[10];	
	    char marks[5];
	    char id[5];
	} data;
void view();
void main()
	{
	    FILE *ft;
	    char yn = 'y';
	    ft = fopen("Data.txt", "ab+");
	    if (ft == NULL)
		{
		    printf("error!");
		    }
	    while (yn == 'y')
		    {
		    printf("Enter Your name :");
		    fflush(stdin);
		gets(data.name);
	        printf("Enter Your marks :");
		    fflush(stdin);
        gets(data.marks);
        printf("Enter Your Id :");
        fflush(stdin);
        gets(data.id);
        fwrite(&data, sizeof(data), 1, ft);
        printf("Want to add of another record? Then press 'y' else 'n'.");
        fflush(stdin);
        yn = getch();
        
    }
    fclose(ft);
    int views;
    printf("Press 1 to view Record o to exit:");
    scanf("%d", &views);
     views=getch();
    if (views == 1)
    {
        view();
        getch();
    }
    else if (views == 0)
    {
        exit(0);
    }
    else
        exit(0);
    getch();
    }

void view()
{
    FILE *ft;
    ft = fopen("Data.txt", "rb+");
    if (ft == NULL)
    {
        printf("error!");
    }
    while (fread(&data, sizeof(data), 1, ft) == 1)
    {
        printf("\n%s %s\n", data.name, data.marks);
    }
    fclose(ft);
}
