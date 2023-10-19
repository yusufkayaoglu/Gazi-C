#include <stdio.h>
#include <stdlib.h>
//12 3 1 7 8
void bubblesort(int arr[5]){
	int i,j;
	for( i=0;i<5;i++){
		for(j=1;j<5-i;j++){
			if(arr[j-1]>arr[j]){
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			}
			
		}
		
	}
}

int main() {
	int arr[5]={12,3,1,7,8};
	int i,j;
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);	
	}
	bubblesort(arr);
	printf("\nkucukten buyuge siralanisi:");
		for(j=0;j<5;j++){
		printf("%d\t",arr[j]);
		
	}

	return 0;
}
