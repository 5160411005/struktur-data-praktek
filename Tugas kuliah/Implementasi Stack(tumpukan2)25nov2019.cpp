#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct stack
{
int data[5];
int atas;
};
stack tumpuk;

int main()
{
system("cls");
int pilihan, baru, i;
tumpuk.atas=-1;
do
{
system("cls");
printf("1. PUSH DATA\n");
printf("2. POP DATA\n");
printf("3. PRINT DATA\n");
printf("MASUKKAN PILIHAN : ");
scanf("%d",&pilihan);
switch (pilihan)
{
case 1 :
if(tumpuk.atas==5-1)
{
printf("TUMPUKAN PENUH");
getch();
}
else
{
printf("MASUKKAN DATA : ");
scanf("%d",&baru);
tumpuk.atas++;
tumpuk.data[tumpuk.atas]=baru;
}
break;
case 2 :
if(tumpuk.atas==-1)
{
printf("TUMPUKAN KOSONG");
getch();
}
else
{
printf("DATA YANG AKAN DI POP = %d",tumpuk.data[tumpuk.atas]);
tumpuk.atas--;
getch();
}
break;
case 3 :
if(tumpuk.atas==-1)
{
printf("TUMPUKAN KOSONG");
getch();
}
else
{
printf("DATA - \n");
for(i=tumpuk.atas; i>=0; i--)
{
printf("- %d -\n",tumpuk.data[i]);
}
getch();
}
break;
default :
printf("TIDAK ADA DALAM PILIHAN");
            break;
      }
   }
   while((pilihan>=1) && (pilihan<=3));
getch();
}
