#include <stdio.h>
#include <stdlib.h>
//girilen sayidan büyük sayilarin ortalamasini döndüren fonksiyon
parametredenbuyuklerinortalamasi(int dizi[5],int sayi){
int sayac=0;
int toplam=0;
int i;
for(i=0;i<5;i++){
	if(dizi[i]>sayi){	
	toplam=toplam+dizi[i];
	sayac++;
  }
  
  }
  return toplam/sayac;
	
  }

int main() {
	int dizi[5]={1,3,7,9,12};
	int i;
	int sayi;
	for(i=0;i<5;i++){
	printf("%d\n",dizi[i]);		
	}
	printf("hangi degerden buyuk sayilarin ortalamasini istiyorsunuz:");
	scanf("%d",&sayi);
	printf("Girdiginiz sayidan büyük sayilarin ortalamasi: %d",parametredenbuyuklerinortalamasi(dizi,sayi));
	
	
	
	
	
	
	
	
return 0;	
}
