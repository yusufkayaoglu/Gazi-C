#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int enkucuk(int dizi[5],int min){
 int i;
 for(i=0;i<5;i++){
 min=dizi[0];
 if(dizi[i]<min){
 min=dizi[i];
 }
 } 
 return min;
 	
}
 int main(){
	int dizi[5];
	int min;
	int i;
   	for(i=0;i<5;i++){
	printf("dizinin %d.degerini giriniz: ",i+1);
    scanf("%d",&dizi[i]);
    }
    printf("En kucuk deger:%d ",enkucuk(dizi,min));
    return 0;

}
