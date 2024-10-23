#include<stdio.h>
int main() {
    int row1, col1, row2, col2;


    printf("Enter number of rows : ");
    scanf("%d", &row1);
    printf("Enter number of columns : ");
    scanf("%d", &col1);

 
    printf("Enter number of rows : ");
    scanf("%d", &row2);
    printf("Enter number of columns : ");
    scanf("%d", &col2);
    if (row1 != row2 || col1 != col2) {
        printf("Matrices cannot be \n");
       
    }
}
