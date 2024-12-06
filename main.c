#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{setlocale(LC_ALL,"turkish");

double a,b,c,delta,tekkok,x1,x2;

FILE *dosya;

printf("y = ax2 + bx + c tipindeki denklemin kökleri\n");
printf("A katsayýsýnýn deðeri nedir : ");scanf("%lf",&a);
printf("B katsayýsýnýn deðeri nedir : ");scanf("%lf",&b);
printf("C katsayýsýnýn deðeri nedir : ");scanf("%lf",&c);

delta =(b*b)-(4*a*c);
if (delta < 0)
{
	printf("REEL KOK yada KOKLERI YOK\n");
}
if (delta == 0)
{
    tekkok = (-1*b) / (2*a);
    printf("TEK KOK  : %.2f\n",tekkok);
}
if (delta > 0)
{
    x1 = ((-1*b)+(sqrt(delta))) / (2*a);
    x2 = ((-1*b)-(sqrt(delta))) / (2*a);
    printf("X1 KOKU    : %.2f\n",x1);
    printf("X2 KOKU    : %.2f\n",x2);
    
    dosya=fopen("bilgiler.txt","a");
    fprintf(dosya,"%.1f  %.1f  %.1f --> x1 : %.2f  x2 : %.2f\n",a,b,c,x1,x2);
    fclose(dosya);
    printf("HER IKI KOK DEGERI KAYDEDILDI...");
}
getch();
}
