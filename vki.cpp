#include<stdio.h>

int main(){
 float kilo,boy,ind;
  	
printf("Kilonuzu giriniz: ");
scanf("%f",&kilo);

printf("Metre Cinsinden Boyunuzu Giriniz: ");
scanf("%f",&boy);

ind=kilo/(boy*boy);
printf("Vucut kitle indeksiniz: %f",ind);
if(ind<18){
	
	printf("zay˝f");
}
	if(ind>=18 && ind<25){
		
		printf("\nNormal");
	}
	 if(ind>=25 && ind<30){
	
          printf("\nKilolu");
      }
        if(ind>=30 && ind<40){
	  
          printf("\nObez");
      }
       if(ind>=40){
      	printf("\n›leri Derece Obez");
	  }
	
		
	}
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 
