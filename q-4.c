#include<stdio.h>
main(){
	int percentage,A;
	printf("Enter the percentage : ");
	scanf("%d",&percentage);
	
    if(percentage>=90){
    	printf("Grade:A");
	}
	else if(percentage>=80){
		printf("Grade:B");
	}
	else if(percentage>=70){
		printf("Grade:C");
	}
	else if(percentage>=60){
		printf("Grade:D");
	}
	else{
		printf("Grade:E");
	}
}
