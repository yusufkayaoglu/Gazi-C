#include<stdio.h>
  int main()
  {
  	
double ales,yds,ortalama,islem1;
  	printf("Ales Puanini Giriniz: ");
  	scanf("%lf",&ales);
  	
  	printf("Yds Puanini Giriniz:");
  	scanf("%lf",&yds);
  	
  	
  	printf("Not Ortalamasini Giriniz:");
  	scanf("%lf",&ortalama);
  	
  	

	islem1=(ales*0.50)+(yds*0.25)+(ortalama*0.25);
  		
  		
  	printf("Genel Ortalama: %f",islem1);
  	
  	
  	if(islem1>=60 && yds>=70)
  	{
    	printf("\nOgrenci Gecti");
  	}
  	else
  	{
		printf("\nOgrenci Kaldi");
	}
  	
  	return 0;
}
  
