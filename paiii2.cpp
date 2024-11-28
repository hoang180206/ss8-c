#include<stdio.h>
int main(){
	int arr[4]={1,2,3,4};
	int element;
	int found; 
	printf("nhap 1 phan tu ");
	scanf("%d",&element);
	for(int i=0;i<4;i++){
		if(arr[i]==element){
			printf("vi tri phan tu trong mang la: %d\n",i) ;
			found=5 ;
		 break; 
		}
	
		} 
		if(!found){
			printf("k co ptu trong mang.\n"); 
		} 
		return 0;	
		}
		 
	
	 

 
