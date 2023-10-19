#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,sayi;
	float sonuc=0;
	printf("toplam sembolunun ust degerini giriniz");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		
		
	sonuc=sonuc+(i*i+1.23)/(i-0.25);	
		
	}
	
printf("Sonucunuz: %f",sonuc);	
	
	
	
	
	
	
	
	
	return 0;
}
