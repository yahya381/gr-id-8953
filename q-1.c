#include<stdio.h>
void swapNumbers(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
   
}
main(){
 int num1,num2,swapNumberm;
	printf("Enter the 1 number : ");
	scanf("%d",&num1);
    printf("Enter 2 number: ");
    scanf("%d",&num2);

    printf("Before swap : \n");
    printf("Number 1 = %d \n",num1);
    printf("Number 2 = %d \n", num2);
    
    swapNumbers(&num1,&num2);

    printf("After swap : \n");
    printf("Number 1 = %d \n", num1);
    printf("Number 2 = %d \n", num2);

}
