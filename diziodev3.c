#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int kackezgectigi(int dizi[5],int aranan){
	int sayac=0;
	int i;
	for(i=0;i<5;i++){
	if(dizi[i]==aranan){
	sayac++;	
	}
	}
	return sayac;
}


int main() {
	int dizi[5];
	int i;
	int aranan;
	printf("Aradiginiz deger:");
	scanf("%d",&aranan);
	for(i=0;i<5;i++){
	    printf("Dizinin %d.elemani : " ,i+1);
		scanf("%d",&dizi[i]);	
	}
	printf("Dizide gecme sayisi:%d",kackezgectigi(dizi,aranan));
	
	
	return 0;
}
