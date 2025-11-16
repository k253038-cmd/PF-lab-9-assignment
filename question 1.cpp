#include<stdio.h>
int beds[3][5];
 void recordstatus(int ward[3][5]){
 	printf("enter a status (1= occupied, 0= empty)");
 	for(int i=0; i<3; i++){
 		printf("\nenter the number of wards %d\n:", i+1);
 		for(int j=0; j<5; j++){
 			printf("bed %d\n", j+1);
 			scanf("%d", &ward[i][j]);
		 }
	 }
	  }
	  void countbeds(int ward[3][5], int *occupied, int *avaiable){
	  	*occupied=0;
	  	*avaiable=0;
	   int	*ptr=&ward[3][5];
	   for(int i=0; i<3*5; i++){
	   	if(*(ptr+i)==1){
	   		(*occupied)++;
		   }else{
		   	(*avaiable)++;
		   }
		     }
	  	 }
	  void displaystatus(int ward[3][5]){
	  	char *wardnames[]={"ICU", "GENERAL","PRIVATE"};
	  	for(int i=0; i<3; i++){
	  		printf("%s\n", wardnames[i]);
	  		for(int j=0; j<5; j++){
	  			printf("%d\n", ward[i][j]);
			  }
		  }
		  printf("\n");
	  }
	  int main(){
	  	int beds[3][5];
	  	int avaiable;
	  	int occupied;
	  	 recordstatus(beds);
	  	 countbeds(beds, &occupied, &avaiable);
	  	 displaystatus(beds);
	  	printf("the total bed occupied is %d\n", occupied);
	  	printf("the total bed avaiable is %d\n", avaiable);
	  }
