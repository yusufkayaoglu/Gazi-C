#include <stdio.h>
#include <stdlib.h>
 void orthesapla(float ort[5],int vize[5],int final[5]){
 	
 int i;
   for(i=0;i<5;i++)
	{
	ort[i]=(vize[i]+final[i])/2;
	} 
}
 	
 	
int main() {
	int vize[5];
	int final[5];
	int i;
	float ort[5];
  	for(i=0;i<5;i++)
	{
		printf("VÝZENÝN %d.DEGERINI GIR: ",i+1);
		scanf("%d",&vize[i]);
	} 
		for(i=0;i<5;i++)
	{
		printf("FÝNALÝN %d.DEGERINI GIR: ",i+1);
		scanf("%d",&final[i]);	
	} 
	orthesapla(ort,vize,final);
	for(i=0;i<5;i++)
	{
		printf("ORTALAMANÝN %d.DEGERI :%f ",i+1,ort[i]);
	
	} 
	
	return 0;
	}

