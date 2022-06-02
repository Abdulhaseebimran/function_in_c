# include <stdio.h>
# include <conio.h>

void sort (int array[], int size);
void printArray(int array[], int size);
void main () {

    int array[] = {9,1,2,4,5,6,7,8,3};
    //char array[] = {'B', 'S', 'E', 'E', 'A', 'H'};
    int size = sizeof(array)/sizeof(array[0]); 

    sort(array,size);
    printArray(array,size);

    getch();
}

void sort (int array[], int size) {
      for (int  i = 0; i < size - 1; i++)
      {
          for (int j = 0; j < size - i - 1; j++)
          {
              if(array[j] > array[j+1]){
                  int temp = array[j];
                  array[j] = array [j+1];
                  array[j+1] = temp;
              }
          }
          
      }
      
}

void printArray (int array[], int size){
      for (int i = 0 ; i < size ; i++) {
          printf("%d ", array[i]);
      }
}