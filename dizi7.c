#include <stdio.h>
#include <stdlib.h>

int kackez(int dizi[6],float ortalama){
	int sayac=0;
	int i;
	for(i=0;i<6;i++){
	if(dizi[i]<ortalama){
	sayac++;	
	}
	}
	return sayac;
}





int main() {
	int dizi[6];
	int i;
	int toplam=0;
	float ortalama;
	for(i=0;i<6;i++){
	     
		printf("Dizinin %d.elemani : " ,i+1);
		scanf("%d",&dizi[i]);	
	}
	for(i=0;i<6;i++){
    toplam=toplam+dizi[i];
	}
	ortalama=toplam/6;
	printf("Ortalama=%f",ortalama);
	printf("\nortalamadan kucuk deger sayisi=%d",kackez(dizi,ortalama));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
