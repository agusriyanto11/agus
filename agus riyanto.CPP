#include <stdio.h>
#include <conio.h>

main()
{
	float f;
   float r;
   float c;
   c=0;
   printf("Tugas Algoritma dan Setruktur Data, program konveksi suhu farenheit,reamur,celcius""\n""Masukan suhu derajat Celsius : ");
   scanf("%f",&c);
   f=c*0.8+32;
   r=c*0.8;
   printf("jadi %2.4f derajat Farenheit sama dengan %2.4f derajat Reamur dan %2.4f derajat Celsius",f,r,c);
   getch();
}