#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define maks 100

using namespace std;

COORD coordinate;
void gotoxy(int x,int y){
    coordinate.X=x; coordinate.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
}

struct konversi
{
char nilai;
float suhu;
float celcius;
float reamur;
float fahrenheit;
float kelvin;
};

int main()
{
konversi knv[maks];
int satuan,i=0,stop;
char ulang;
do{
    cout<<"\t|==================================|"<<endl;
    cout<<"\t|+|+|+| KONVERSI SATUAN SUHU |+|+|+|"<<endl;
    cout<<"\t|==================================|"<<endl;
    cout<<"\t|----------------------------------|"<<endl;
    cout<<"\t|            DAFTAR SUHU           |"<<endl;
    cout<<"\t|----------------------------------|"<<endl;
    cout<<"\t|                                  |"<<endl;
    cout<<"\t|  1. KELVIN                       |"<<endl;
    cout<<"\t|  2. CELCIUS                      |"<<endl;
    cout<<"\t|  3. FAHRENHEIT                   |"<<endl;
    cout<<"\t|  4. REAMUR                       |"<<endl;
    cout<<"\t|                                  |"<<endl;
    cout<<"\t|==================================|"<<endl;
    cout<<endl;
    cout<<"\tPilih [1/2/3/4] : ";cin>>satuan;
    stop=i+1;
    switch(satuan){
        case 1:
            cout<<"================================="<<endl;
            cout<<"masukkan suhu kelvin : ";cin>>knv[i].suhu;
            cout<<"================================="<<endl;
            knv[i].celcius=knv[i].suhu-273.15;
            knv[i].fahrenheit=knv[i].suhu*1.8-459.67;
            knv[i].reamur=(knv[i].suhu-273.15)*0.8;
            knv[i].nilai='KELVIN';
            knv[i].kelvin=knv[i].suhu;
            cout<<endl;
            break;
        case 2:
            cout<<"================================="<<endl;
            cout<<"masukkan suhu celcius : ";cin>>knv[i].suhu;
            cout<<"================================="<<endl;
            knv[i].fahrenheit=knv[i].suhu*1.8+32;
            knv[i].reamur=knv[i].suhu*0.8;
            knv[i].kelvin=knv[i].suhu+273.15;
            knv[i].nilai='CELCIUS';
            knv[i].celcius=knv[i].suhu;
            cout<<endl;
            break;
        case 3:
            cout<<"================================="<<endl;
            cout<<"masukkan suhu Fahrenheit : ";cin>>knv[i].suhu;
            cout<<"================================="<<endl;
            knv[i].celcius=(knv[i].suhu-32)/1.8;
            knv[i].kelvin=(knv[i].suhu+459.67)/1.8;
            knv[i].reamur=(knv[i].suhu-32)/2.25;
            knv[i].nilai='FAHRENHEI';
            knv[i].fahrenheit=knv[i].suhu;
            cout<<endl;
            break;
        case 4:
            cout<<"================================="<<endl;
            cout<<"masukkan suhu reamur : ";cin>>knv[i].suhu;
            cout<<"================================="<<endl;
            knv[i].celcius=knv[i].suhu/0.8;
            knv[i].kelvin=knv[i].suhu/0.8+273.15;
            knv[i].fahrenheit=knv[i].suhu*2.25+32;
            knv[i].nilai='REAMUR';
            knv[i].reamur=knv[i].suhu;
            cout<<endl;
            break;
        default:
            cout<<"================================="<<endl;
            cout<<"Menu tidak teridentifikasi!!!\n";
            cout<<"================================="<<endl;
            cout<<endl;
            break;
    }
    i++;
    cout<<"Apakah anda ingin melanjutkan konversi ?(y/n) "; cin>>ulang;
    system ("cls");
} while(ulang=='Y' || ulang=='y');

cout <<" Data konversi yang telah dimasukkan adalah : \n\n";
cout <<" |===========================================================================================| \n";
cout <<" |+|+|+|+|+|+|+|+|                    KONVERSI SATUAN SUHU                   |+|+|+|+|+|+|+|+| \n";
cout <<" |===========================================================================================| \n";
cout <<" |    SUHU AWAL    |   NILAI AWAL   |   KELVIN   |   CELCIUS   |   FAHRENHEIT   |   REAMUR   | \n";
cout <<" |===========================================================================================| \n";
for(i=0;i<stop;i++){
    gotoxy(1,7+i);  cout <<"|   " << knv[i].nilai;
    gotoxy(19,7+i); cout <<"|   " << knv[i].suhu;
    gotoxy(36,7+i); cout <<"|   " << knv[i].kelvin;
    gotoxy(49,7+i); cout <<"|   " << knv[i].celcius;
    gotoxy(63,7+i); cout <<"|   " << knv[i].fahrenheit;
    gotoxy(80,7+i); cout <<"|   " << knv[i].reamur;
    gotoxy(93,7+i); cout <<"|   " << endl;
}
cout <<" |===========================================================================================| \n";
cout <<" \nTerimakasih [tekan enter 2x untuk keluar]";
getch();
}
