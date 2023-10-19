#include <stdio.h>
#include <stdlib.h>

float ortalama(int vize,int final){
  float ort;
  ort=vize*0.40+final*0.60;
  return ort;
  }
  int main(){
  int vize;
  int final;
  do{
  printf("Vize Giriniz: ");
  scanf("%d",&vize);
  printf("Final Giriniz: ");
  scanf("%d",&final);
 
  if(ortalama(vize,final)>80){
   printf("AA");
  }
  if(ortalama(vize,final)>60&&ortalama(vize,final)<80){
   printf("BB");
  }
  if(ortalama(vize,final)>40&&ortalama(vize,final)<60){
   printf("BA");
  }
  if(ortalama(vize,final)<40){
   printf("FF");
   
  }
  }while(vize!=111);

  
  return 0;
  }
