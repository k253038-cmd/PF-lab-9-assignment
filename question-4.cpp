#include<stdio.h>
int main(){
	int rows, cols, keys;
	printf("enter a numberv of rows\n");
	scanf("%d", &rows);
	printf("enter a number of cols\n");
	scanf("%d", &cols);
	
	int arr[rows][cols];
	
	printf("enter the elements of array");
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			scanf("%d", &(*(arr+i)+j));
			
		}
	}
	printf("enter a key element");
	scanf("%d", &keys);
	int *ptr=&arr[0][0];
	int found=0;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
	     if(*(*(arr+i)+j)==keys){
	     	printf("\n elemnt of found% row %d and cols%d\n ",keys, rows, cols );
	     	found=`1;
		 }
		}
}
if(!found){
	printf("the element is not found");
}
	
	
}
