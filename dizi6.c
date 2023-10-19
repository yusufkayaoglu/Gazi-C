#include <stdio.h>
#include <stdlib.h>

int kackez(int dizi[5],float ortalama){
	int sayac=0;
	int i;
	for(i=0;i<5;i++){
	if(dizi[i]>ortalama){
	sayac++;	
	}
	}
	return sayac;
}





int main() {
	int dizi[5];
	int i;
	int toplam=0;
	float ortalama;
	for(i=0;i<5;i++){
	     
		printf("Dizinin %d.elemani : " ,i+1);
		scanf("%d",&dizi[i]);	
	}
	for(i=0;i<5;i++){
    toplam=toplam+dizi[i];
	}
	ortalama=toplam/5;
	printf("Ortalama=%f",ortalama);
	printf("\nortalamadan buyuk deger sayisi=%d",kackez(dizi,ortalama));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
