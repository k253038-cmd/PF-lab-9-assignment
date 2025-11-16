#include<stdio.h>
void functiondata(void *ptr, char type){
	    if(type=='i'){
			printf(" %d\n", *(int*)ptr);
		 }else if(type=='f'){
			printf(" %.2f\n", *(float*)ptr);
	 }else if(type=='c'){
			printf(" %c\n", *(char*)ptr);
	}else{
		printf("invalid data type");

}
}
   int main(){
  
	int productID=121;
	float price=1200.9;
	char categorycode='A';
	
	printf("productId:");
	functiondata(&productID, 'i');
	printf("price:");
	functiondata(&price, 'f');
	printf("categorycode:");
	functiondata(&categorycode, 'c');
}
