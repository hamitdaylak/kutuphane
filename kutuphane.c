#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	system("color 2B"); 
	setlocale(LC_ALL, "Turkish");
	int ogrencisayisi,i;

struct ogrenci{
	
	char ogrencino[30];
	char ad[50];
	char soyad[50];
	char bolum[50];
	char sinif[3];
	
};

struct kitapinfo{
	
	char kad[30];
	char sayfa[80000];
	char tur[30];
	char yazar[30];
	char baski[20];
	char kutuphane[150];
	
};  struct ogrenci s;
printf("--------------------------------------------------\n");
printf(" kütüphane otomasyonu v1 \n\n ");
printf("HOŞ GELDİNİZ \n\n");
printf(" programa geçmek için bir tuşa basıp enter tuşuna basınız\n\n");
printf("--------------------------------------------------\n");
scanf("%d \n",i);

	system ("cls");
    printf("ogrenci numrasini giriniz \n\n");
    scanf("%s",&s.ogrencino);
    system ("cls");
	printf("ogrenci ismini giriniz \n\n");
	scanf("%s",&s.ad);
	system ("cls");
	printf("ogrencinin soyismini giriniz  \n\n");
	scanf("%s",&s.soyad);
	system ("cls");
	printf("ogrencinin bolumunu giriniz \n\n");
	scanf("%s",&s.bolum);
	system ("cls");
	printf("ogrencinin okudugu sinifini  giriniz \n\n");
	scanf("%s",&s.sinif);
	system ("cls");
	
	struct kitapinfo x;
	printf("KİTAPLAR \n\n\n\n");
	printf("kitabin adini giriniz \n\n");
	scanf("%s",&x.kad);
	system ("cls");
	printf("kitabin sayfasini giriniz \n\n");
	scanf("%s",&x.sayfa);
	system ("cls");
	printf("kitabin turunu giriniz \n\n");
	scanf("%s",&x.tur);
	system ("cls");
	printf("kitabin yazarini girini \n\n");
	scanf("%s",&x.yazar);
	system ("cls");
	printf("kitabin baskisini giriniz \n\n");
	scanf("%s",&x.baski);
	system ("cls");
	printf("kütüphane ismini giriniz \n\n");
	scanf("%s",&x.kutuphane);
	system ("cls");
	
	printf("---------------------------------------------------\n");
	printf(" ogrenci numarasi  %s dır\n ",&s.ogrencino);
	printf("ogrenci adi  %s  dir \n",&s.ad);
	printf(" ogrenci soyadi  %s dır\n ",&s.soyad);
	printf("ogrenci bolümü  %s dür \n ",&s.bolum);
	printf("ogrencinin sinifi  %s \n ",&s.sinif);
	printf("kitabin adı  %s dır \n",&x.kad);
	printf(" kitabın sayfası   %s dır \n ",&x.sayfa);
	printf("kitabin türü  %s dür\n ",&x.tur);
	printf("kitabin yazari  %s dır\n ",&x.yazar);
	printf("kitabın baskı sayısı  %s dır\n ",&x.baski);
	printf("%s kütüphanesidir \n  ",&x.kutuphane);
	printf("CODED BY HAMİT DAYLAK  \n");
	
getchar ();
return 0;
	
	}
