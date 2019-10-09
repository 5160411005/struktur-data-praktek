/*contoh program sederhana array di dalam struct*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define maks 3
using namespace std;

COORD coordinate;
void gotoxy(int x,int y){
    coordinate.X=x; coordinate.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
    }

struct TMhs
{
char NIM[25];
char Nama[25];
int NilaiUTS,NilaiUAS,NilaiQuis;
float NilaiAkhir;
char index;
};

main ()
{
TMhs mhs[maks];
int i;
for(i=0;i<maks;i++){
    cout << "Pengisian Data Mahasiswa Ke-"<<i+1<< endl;
    cout << "NIM : "; cin >> mhs[i].NIM;
    cout << "NAMA : "; cin >> mhs[i].Nama;
    cout <<"Nilai Quiz : "; cin >> mhs[i].NilaiQuis;
    cout <<"Nilai UTS : "; cin >> mhs[i].NilaiUTS;
    cout <<"Nilai UAS : "; cin >> mhs[i].NilaiUAS;

    system ("cls");
    mhs[i].NilaiAkhir=0.2*mhs[i].NilaiQuis+0.3*mhs[i].NilaiUTS+0.5*mhs[i].NilaiUAS;
    if(mhs[i].NilaiAkhir>=80) {
        mhs[i].index ='A';
    }else if(mhs[i].NilaiAkhir>=60) {
        mhs[i].index ='B';
    }else if(mhs[i].NilaiAkhir>=40) {
        mhs[i].index ='C';
    }else if(mhs[i].NilaiAkhir>=20) {
        mhs[i].index ='D';
    }else if(mhs[i].NilaiAkhir>=0) {
        mhs[i].index ='E';}
}
cout <<"Data yang telah dimasukkan adalah : \n\n";
cout <<" -------------------------------------------------------------------------------------------------------- \n";
cout <<" |       NIM       |           NAMA           |   KUIS   |   UTS   |   UAS   |     NA     |    INDEX    | \n";
cout <<" -------------------------------------------------------------------------------------------------------- \n";
for(i=0;i<maks;i++){
    gotoxy(1,5+i);   cout <<"|   " << mhs[i].NIM;
    gotoxy(19,5+i);  cout <<"|   " << mhs[i].Nama;
    gotoxy(46,5+i);  cout <<"|   " << mhs[i].NilaiQuis;
    gotoxy(57,5+i);  cout <<"|   " << mhs[i].NilaiUTS;
    gotoxy(67,5+i);  cout <<"|   " << mhs[i].NilaiUAS;
    gotoxy(77,5+i);  cout <<"|   " << mhs[i].NilaiAkhir;
    gotoxy(90,5+i);  cout <<"|   " << mhs[i].index;
    gotoxy(104,5+i); cout <<"|   " << endl;
}
cout<<" -------------------------------------------------------------------------------------------------------- \n";
getch();
return 0;
}
