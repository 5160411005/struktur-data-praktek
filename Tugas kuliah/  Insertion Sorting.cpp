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

main(){

 int i,j,n,temp,data[10];

   cout<<"\nJumlah Data Yang Akan Di Urutkan : ";
    cin>>n;

      for(i=1;i<=n;i++){
        cout<<"\nMasukkan Data Ke -"<<i<<" : ";
          cin>>data[i];
      }
      system ("cls");
      gotoxy(10,2);
      setcolor(2);
      cout<<"Data Yang Belum Di Sorting ";
       for(i=1;i<=n;i++){
           setcolor(6);
           gotoxy(20,3+i);
           cout<<data[i];
         }
      gotoxy(10,6+n);
      setcolor(2);
      cout<<"Data Yang Sudah Di Sorting ";
       for(i=1;i<=n;i++){
          for(j=1;j<=n;j++){
              if(data[i]<data[j]){
                 temp=data[i];
                  data[i]=data[j];
                  data[j]=temp;
               }
            }
         }
       for(i=1;i<=n;i++){
         setcolor(6);
         gotoxy(20,7+n+i);
         cout<<data[i];
       }
         return 0;

}
