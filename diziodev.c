#include <stdio.h>
#include <stdlib.h>


float ortalamabul(int dizi[5]){
int ortalama,toplam=0,i;
for(i=0;i<5;i++){
 toplam=toplam+dizi[i];
	}
ortalama=toplam/5;
return ortalama;
}
int main() {
	int dizi[5];
	int i;
	for(i=0;i<5;i++){
	     
		printf("Dizinin %d.elemani : " ,i+1);
		scanf("%d",&dizi[i]);	
	}
	

	
	
	printf("Ortalama=%f ",ortalamabul(dizi));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
