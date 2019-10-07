#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
using namespace std;

COORD coordinate;
void gotoxy(int x,int y){
    coordinate.X=x; coordinate.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
    }

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

int main()
{
int data[10]; //Deklarasi Data
int i, j, k, tmp, jumlah=0; //Deklarasi Pengulangan
gotoxy(10,1);
setcolor(1);
cout<<"PROGRAM PENGURUTAN BILANGAN BUBBLE SORT";
gotoxy(10,3);
setcolor(2);
cout<<"Masukkan jumlah bilangan : "; cin>>k; //Input Banyak Data
for(i=0; i<k; i++)  {
    gotoxy(10,5+i);
    setcolor(7);
    cout<<"Masukkan Angka ke "<<(i+1)<<" : "; cin>>data[i]; //Input Data
    jumlah=jumlah+data[i];
}
system ("cls");
gotoxy(10,1);
setcolor(1);
cout<<"PROGRAM PENGURUTAN BILANGAN BUBBLE SORT";
gotoxy(10,3);
setcolor(2);
cout<<"Data sebelum diurutkan : "; //Output Data Yang Di Input
gotoxy(10,5);
setcolor(6);
for(i=0; i<k; i++){
    cout<<data[i]<<" ";
}
for( i=0;i<k;i++){ //Disini Proses Bubble Sort      {
    for(j=i+1;j<k;j++){
        if(data[i]>data[j]){
            tmp=data[i];
            data[i]=data[j];
            data[j]=tmp;
        }
    }
}
gotoxy(10,7);
setcolor(2);
cout<<"Data setelah diurutkan  : "<<endl;
gotoxy(10,9);
setcolor(6);
for(i=0; i<k; i++){
    cout<<data[i]<<" ";
}
gotoxy(10,11);
setcolor(2);
cout<<"Data setelah diurutkan (Genap): "<<endl;
gotoxy(10,13);
setcolor(6);
for(i=0; i<k; i++){
    if (data[i]%2==0){
        cout<<data[i]<<" ";
    }
}
gotoxy(10,15);
setcolor(2);
cout<<"Data setelah diurutkan (Ganjil): "<<endl;
gotoxy(10,17);
setcolor(6);
for(i=0; i<k; i++){
    if (data[i]%2!=0){
        cout<<data[i]<<" ";
    }
}
gotoxy(10,19);
setcolor(2);
cout<<"Jumlah dari bilangan  = "<<jumlah<<endl;
return 0;
}
