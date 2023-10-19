#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char tip;
	int gun,mesafe,ucret;
	printf("Gun Giriniz: ");
	scanf("%d",&gun);
	printf("Mesafe Giriniz: ");
	scanf("%d",&mesafe);
	printf("Tip Giriniz: ");
	scanf("%s",&tip);
	switch(tip){
	case'R':
	case'r':ucret=gun*20+mesafe*18;
	printf("Ucretiniz :%d",ucret);break;
	case'M':
	case'm':ucret=gun*32+mesafe*22;
	printf("Ucretiniz :%d",ucret);break;
	case'H':
	case'h':ucret=gun*51+mesafe*36;
	printf("Ucretiniz :%d",ucret);break;
    case'F':
    case'f':ucret=gun*20+mesafe*18;
    printf("Ucretiniz :%d",ucret);break;
    default:printf("Hatali karakter girdiniz");
    }
	
	
	
	
	
	
	
	
	
	return 0;
}
