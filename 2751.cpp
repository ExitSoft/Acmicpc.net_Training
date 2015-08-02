#include "stdio.h"

int arr[1000000] = {0};

void merge(int arr[],int min,int mid,int max){
	int tmp[1000000];
	int i,j,k,m; 
	j=min;
	m=mid+1;
	for(i=min; j<=mid && m<=max ; i++){
		 if(arr[j]<=arr[m]){
				 tmp[i]=arr[j];
				 j++;
		 }else{
				 tmp[i]=arr[m];
				 m++;
		 }
	}
	if(j>mid){
		 for(k=m; k<=max; k++){
				 tmp[i]=arr[k];
				 i++;
		 }
	}else{
		 for(k=j; k<=mid; k++){
				tmp[i]=arr[k];
				i++;
		 }
	}
	for(k=min; k<=max; k++)
		 arr[k]=tmp[k];
}

void part(int arr[],int min,int max){
 int mid;
 if(min<max){
	 mid=(min+max)/2;
	 part(arr,min,mid);
	 part(arr,mid+1,max);
	 merge(arr,min,mid,max);
 }
}

 int main(){
 	int num;
 	scanf("%d", &num);
 	for(int i = 0; i < num; i++){
 		scanf("%d", &arr[i]);
 	}
 	merge(arr, 0, num/2, num-1);

 	for(int i = 0; i < num; i++){
 		printf("%d\n", arr[i]);
 	}
 	return 0;
 }