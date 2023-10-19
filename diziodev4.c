#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int enbuyuk(int dizi[5],int max){
 int i;
 for(i=0;i<5;i++){
 max=dizi[0];
 if(dizi[i]>max){
 max=dizi[i];
 }
 } 
 return max;
 	
}
 int main(){
	int dizi[5];
	int max;
	int i;
   	for(i=0;i<5;i++){
	printf("dizinin %d.degerini giriniz: ",i+1);
    scanf("%d",&dizi[i]);
    }
    printf("En buyuk deger:%d ",enbuyuk(dizi,max));
    return 0;

}
