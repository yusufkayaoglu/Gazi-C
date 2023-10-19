#include <stdio.h>
#include <stdlib.h>
struct  tarih{
 int yil;
 int ay;
 int gun;
};
int main() {
 struct tarih t1,t2,yakintarih;
 scanf("%d%d%d",&t1.yil,&t1.ay,&t1.gun);
 scanf("%d%d%d",&t2.yil,&t2.ay,&t2.gun);
  
 if(t1.yil>t2.yil){
 	yakintarih=t1;
 }
 else if(t1.yil==t2.yil){
 	if(t1.ay>t2.ay){	
 	yakintarih=t1;	
	}
	else if(t1.ay==t2.ay){
	if(t1.gun>t2.gun){
		yakintarih=t1;	
	}
	else if(t1.gun=t2.gun){
		printf("Ayni tarihler");
	}
	
	
	
	}
 		
   }
 printf("Yakin tarih %d %d %d",yakintarih.yil,yakintarih.ay,yakintarih.gun);
	
	
	
	
	
	return 0;
}
