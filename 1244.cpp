#include "stdio.h"

int arr[10000];

void change(int *x){
	if(*x == 0){
		*x = 1;
	}
	else{
		*x = 0;
	}
}

int main(){
	int count;
	int len;
	scanf("%d", &count);
	len = count;

	for(int i = 0; i < count; i++){
		scanf("%d", &arr[i+1]);
	}

	scanf("%d", &count);

	for(int i = 0; i < count; i++){
		// printf("%d index\n", i);
		int gender;
		int index;
		scanf("%d %d", &gender, &index);
		if(gender == 1){
			// male

			for(int j = 1; j <= len; j++){
				if(j%index == 0){
					change(&arr[j]);

				}
			}
		}
		else{
			// female
			change(&arr[index]);
			for(int j = index-1; j >= 1; j--){
				// printf("%d = %d %d = %d\n", j, arr[j], index*2-j, arr[index*2-j]);

				if(arr[j] == arr[index*2-j]){
					change(&arr[j]);
					change(&arr[index*2-j]);
				}
				else{
					break;
				}

			}
		}
		// printf("??\n");

		// for(int i = 1; i <= len; i++){
		// 	printf("%d ", arr[i]);
		// }
		// printf("\n");
	}

	for(int i = 1; i <= len; i++){
		if(i%20 == 1 && i > 20){
			printf("\n");
		}
		printf("%d ", arr[i]);

	}
	printf("\n");

	return 0;
}

// int swtch[101];
// int i,j,sex,num;
// main(t,n)
// {
//   for(scanf("%d",&n);i<n;scanf("%d",swtch+i++));
//   for(scanf("%d",&t);t--;)
//   {
//     scanf("%d%d",&sex,&num);
//     if(sex==1)//male
//     {
//       for(i=num-1;i<n;i+=num)swtch[i]=!swtch[i];
//     }
//     else //female
//     {
//       num--;swtch[num]=!swtch[num];
//       for(i=1;num-i>=0&&num+i<n&&swtch[num-i]==swtch[num+i];i++){swtch[num-i]=!swtch[num-i];swtch[num+i]=!swtch[num+i];}
//     }
//   }
//   for(i=0;i<n;i++){printf("%d ",swtch[i]);if(i%20==19)puts("");}
// }