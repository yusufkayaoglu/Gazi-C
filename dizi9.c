#include <stdio.h>
#include <stdlib.h>
//parametreden buyuk sayilarin toplamýný döndüren fonksiyon
 parametredenbuyukleritopla(int dizi[5],int sayi){
int i;
int toplam=0;
for(i=0;i<5;i++){
	if(dizi[i]>sayi){
		toplam=toplam+dizi[i];
	}
}
 	
 	
 	
 }


int main() {
   int dizi[5]={1,3,9,27,15};
   int sayi;
   int k;
   for(k=0;k<5;k++){
   	printf("dizinin elemanlarý:",dizi[5]);
   }
   
   printf("hangi sayidan büyük sayilarý toplamak istiyorsun ?: ");
   scanf("%d",&sayi);
   printf("Girdiðiniz sayidan büyük sayilarin toplamý: %d",parametredenbuyukleritopla(dizi,sayi));
   return 0;
	
	
	
	
	return 0;
}
