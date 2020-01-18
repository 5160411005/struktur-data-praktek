#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

struct STACK
{
    int data[5];
   int atas;
};

STACK tumpuk;

int main()
{
    system("cls");
   int pilihan,baru,i;
   tumpuk.atas=-1;
   do
   {
       system("cls");
      cout<<"1.Push Data"<<endl;
      cout<<"2.Pop Data"<<endl;
      cout<<"3.Print Data"<<endl;
      cout<<"4.Keluar"<<endl;
      cout<<endl;
      cout<<"Pilihan : ";
      cin>>pilihan;
      switch(pilihan)
      {
          case 1 :
         {
             if(tumpuk.atas==5-1)
            {
                cout<<"Tumpukan penuh";
               getch();
            }
            else
            {
                cout<<"Data yang akan di Push :";
               cin>>baru;
               tumpuk.atas++;
               tumpuk.data[tumpuk.atas]=baru;
            }
            break;
         }
         case 2 :
         {
             if(tumpuk.atas==-1)
            {
                cout<<"Tumpuk kosong";
               getch();
            }
            else
            {
                cout<<"Data yang akan di Pop ="<<tumpuk.data[tumpuk.atas]<<endl;
               tumpuk.atas--;
               getch();
            }
            break;
         }
         case 3 :
         {
             if (tumpuk.atas==-1)
             {
                 cout<<"Tumpukan kosong "<<endl;
                getch();
             }
         else
             {
                 cout<<"Data= " <<endl;
                for(i=0;i<=tumpuk.atas;i++)
                {
                    cout<<tumpuk.data[i]<<" ";
                }
                getch();
            }
            break;
         }
         case 4:
         {
            {
                exit(1);
            }

            getch();
            break;
         }
      default:
      {
          cout<<"Tidak ada dalam pilihan"<<endl;
      }
   }
}
    while(pilihan=4);
    getch();
    return 0;
}
