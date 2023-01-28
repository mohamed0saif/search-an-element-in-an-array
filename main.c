/*

 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: mohamed
 */





#include "stdio.h"

void Clear (void);
void main (){
int Array[100];
int No_Of_Element , Search ;
printf("Enter no of element : ");
Clear();
scanf("%d",&No_Of_Element);
for(int i=0;i<No_Of_Element;i++){
	Clear();
	scanf("%d",&Array[i]);
}
printf("Enter the element to be Searched : ");
Clear();
scanf("%d",&Search);
for(int i =0 ; i<No_Of_Element;i++){
	if(Array[i]==Search){
		printf("Number found in location : %d",i+1);
		break;
	}
	else if(i==No_Of_Element-1){
		printf("this number is not found!!!!!");
	}

}

}

void Clear (void){

	fflush(stdin);
	fflush(stdout);

}

