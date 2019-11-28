#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;

COORD coordinate;
typedef struct linkedList{
    char info;
    linkedList *berikut;
}linkedList;

linkedList *awal, *akhir;
char data,conv[20];
int pilih;

/* Prototype Fungsi Validasi Digit Input */
int intValidation(char chrInp[]);
/* ===================================== */
char input_data();
void tambah_depan(char data);
void tambah_tengah(char data);
void tambah_belakang(char data);
void hapus_simpul(char data);
void baca_maju();
void pembukaan();
void intro();
void gotoxy(int x, int y){
    coordinate.X=x; coordinate.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
}

int main()
{
  pembukaan();
  awal:
    intro();
    system("cls");
    cout << "      ====================================      \n";
    cout << "                Senarai Berantai                \n";
    cout << "      ====================================      \n";
    cout << "------------------------------------------------\n";
    cout << "1. Tambah Depan\n";
    cout << "2. Tambah Belakang\n";
    cout << "3. Tambah Tengah\n";
    cout << "4. Tampil Data\n";
    cout << "5. Hapus Simpul\n";
    cout << "6. Keluar\n";
    cout << "------------------------------------------------\n";
    cout << "Pilih : ";
    gets(conv);
    if(!intValidation(conv)){ cout<<"Input tidak boleh berupa karakter..";
    getch(); goto awal; }
    pilih=atoi(conv);    if(pilih < 1 || pilih > 6){ goto awal; }

    switch (pilih)
    {
        case 1:
            input_data();
            tambah_depan(data);
            baca_maju();
            getch();
            goto awal;
            break;
        case 2:
            input_data();
            tambah_belakang(data);
            baca_maju();
            getch();
            goto awal;
            break;
        case 3:
            input_data();
            tambah_tengah(data);
            baca_maju();
            getch();
            goto awal;
            break;
        case 4:
            baca_maju();
            getch();
            goto awal;
            break;
        case 5:
            baca_maju();
            input_data();
            hapus_simpul(data);
            getch();
            goto awal;
            break;
        case 6:
            cout << "Terimakasih Telah Mencoba Program Senarai Ini...^.^";
            exit(1);
            break;
        default:
            cout << "Id Menu Tidak Ada Pada List";
            getch();
            goto awal;
            break;
    }
}

char input_data()
{
    cout << "\n";
    cout << "Inputkan Data (Char) : ";
    cin >> data;
    return data;
}

void tambah_depan(char data)
{
    linkedList *baru;
    baru = new linkedList;
    baru->info=data;
    baru->berikut=NULL;
    if(awal == NULL)
    {
        awal=baru;
        akhir=baru; /* Fix Crash Ketika Inisiasi Pointer Kosong */
    }else{
        baru->berikut=awal;
    }
    awal=baru;
}

void tambah_belakang(char data)
{
    linkedList *baru;
    baru = new linkedList;
    baru->info=data;
    baru->berikut=NULL;
    if(awal == NULL)
    {
        awal=baru;
    }else{
        akhir->berikut=baru;
    }
    akhir=baru;
}

void tambah_tengah(char data)
{
    linkedList *baru,*bantu;
    int tmp_dat,tmp_awal,tmp_akhir,tmp_bbinfo;
    /* Temporary Variabel Untuk Koversi Ke Integer Data */
    if(awal!=NULL)
    {
       tmp_dat=data, tmp_awal = awal->info, tmp_akhir =
       akhir->info;
    }

    if(awal==NULL || tmp_dat <= tmp_awal)
    {
        tambah_depan(data);
    }
    else if(tmp_dat >= tmp_akhir)
    {
        tambah_belakang(data);
    }
    else
    {
        baru = new linkedList;
        baru->info=data;
        baru->berikut=NULL;
        bantu=awal;
        tmp_bbinfo = bantu->berikut->info;
        while(bantu->berikut!=NULL && tmp_dat > tmp_bbinfo)
        {
            bantu=bantu->berikut;
            tmp_bbinfo = bantu->berikut->info;
        }
        baru->berikut = bantu->berikut;
        bantu->berikut=baru;
    }

}

void baca_maju()
{
    linkedList *bantu;
    bantu=awal;
    cout << "\nData Pada Senarai : ";
    while(bantu!=NULL)
    {
        cout << bantu->info << " ";
        bantu=bantu->berikut;
    }
}

void hapus_simpul(char data)
{
    linkedList *hapus, *bantu;
    if(awal==NULL)
    {
        cout << "Senarai Masih Kosong... Silahkan Input Data Terlebih Dahulu";
    }
    else if(awal->info == data)
    {
        hapus = awal;
        awal = hapus->berikut;
        delete hapus;
        cout << endl << "Data Berhasil Dihapus.....\n";
        baca_maju();
    }
    else
    {
        bantu = awal;
        hapus = awal->berikut;
        while((hapus!=NULL) && (data!=hapus->info))
        {
            hapus = hapus->berikut;
            bantu = bantu->berikut;
        }

        if(hapus == NULL)
        {
            cout << "Data Yang Dicari Tidak Ada";
        }
        else if(data == hapus->info)
        {
            bantu->berikut = hapus->berikut;
            delete hapus;
            cout << endl << "Data Berhasil Dihapus.....\n";
            baca_maju();
        }
    }
}

int intValidation(char chrInp[])
{
    int i;
    for(i=0;i<strlen(chrInp);i++){
        if(!isdigit(chrInp[i]))
        {
            return 0;
            break;
        }
           }
           return 1;
}

void pembukaan()
{
  cout<<"====================================================\n";
  cout<<"====================================================\n";
  cout<<"                                                    \n";
  cout<<"                   Loading ........                 \n";
  cout<<"                                                    \n";
  cout<<"   ===============================================  \n";
  cout<<"   |                                             |  \n";
  cout<<"   |    Program Senarai Berantai (Linked List)   |  \n";
  cout<<"   |                                             |  \n";
  cout<<"   ===============================================  \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"                                                    \n";
  cout<<"====================================================\n";
  cout<<"====================================================";
  int x = 17, y=6,c,d,a,e;
  for(a=1;a<3;a++)
  {
  for (x;x<64;x++)
  {
     gotoxy(x,y);
     cout<<"   ";
     for(c=1;c<1000;c++)
       for(d=1;d<1000;d++)
          cout<<"";
     gotoxy(x,y);
     cout<<"=";
  }
  x = 63, y=7;
  for (y;y<11;y++)
  {
     gotoxy(x,y);
     cout<<" ";
     for(c=1;c<1000;c++)
       for(d=1;d<1000;d++)
         cout<<"";
     gotoxy(x,y);
     cout<<"|";
  }
  x = 63, y=10;
  for (x;x>16;x--)
  {
     gotoxy(x-2,y);
     cout<<"   ";
     for(c=1;c<1000;c++)
       for(d=1;d<1000;d++)
         cout<<"";
     gotoxy(x,y);
     cout<<"=";
  }
  x = 17, y=9;
  for (y;y>6;y--)
  {
     gotoxy(x,y);
     cout<<" ";
     for(c=1;c<1000;c++)
        for(d=1;d<1000;d++)
           cout<<"";
     gotoxy(x,y);
     cout<<"|";
  }
  }
}

void intro()
{
  int x,y;
  for(x=1;x<=78;x=x+3)
  {
   for(y=1;y<=25;y++)
   {
    gotoxy(x,y);
    cout<<"===";
    for(int a=1;a<80;a++)
      for(int b=1;b<80;b++)
        cout<<"";
   }
   for(int a=1;a<700;a++)
      for(int b=1;b<700;b++)
        cout<<"";
  }
  for(int a=1;a<1800;a++)
      for(int b=1;b<1800;b++)
        cout<<"";
}
