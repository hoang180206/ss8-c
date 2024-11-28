#include<stdio.h>
int main(){
	int arr[5][5]={{1,2,3,4,5},{6,7,8,9,10}};
	int max = arr[0][1];
	for(int i =1;i<10;i++){
		if(arr[i][i]>max){
		max=arr[i][i];
	}
	}
		printf("phan tu lon nhat la %d\n",max);
	return 0;
	} 

	 

