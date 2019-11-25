#include <iostream> //header
#include <stdlib.h>//header
#include <conio.h>//header
using namespace std;

int loading()
{
int a,j;
for(a=1;a<=100;a++)
{
cout<<"loading "<<a<<"%";
cout<<"\n";
for(j=0;j<a;j++)
{
cout<<">";
}
system ("cls");
}
}

int password()
{
int a, b, x, i;
cout<< "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
cout<< "SELAMAT DATANG "<<endl;
cout<< "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl<<endl;
for(i=1;i<=5;i++)
{
cout<< "Masukkan Password : ";
cin>>x;
if (x==1231)
{
system("cls");
loading();


//REPORT THIS AD

break;
}

else
{
cout<< "Salah Password"<<endl<<endl;
}
}
}

int sasp()
{
struct a
{
char nama[30];
int umur;
};
struct orang
{
struct a *b[5],x;
}saya[5];

saya[5].b[5]=&saya[5].x;
int i, d;
cout<< "Masukan Jumlah Data : ";
cin>>d;
for (i=0; i<d; i++)
{
cout<<endl;
cout<< "Data Ke-"<<i+1;
cout<<"\nNama : "; cin>>saya[i].x.nama;
cout<<"Umur : "; cin>>saya[i].x.umur;
cout<<endl;
}
system("cls");
for (i=0; i<d; i++)
{
cout<< "Data Ke-"<<i+1;
cout<<"\nNama : "; cout<<saya[i].x.nama<<endl;
cout<<"Umur : "; cout<<saya[i].x.umur;
cout<<endl<<endl;
}
}


//REPORT THIS AD

#define isi 5
typedef struct
{
char item[isi];
int top;
}stack;

void InisialisasiStack(stack&s)
{
s.top=0;
}

int IsEmpty (stack&s)
{
if (s.top == 0)
return 1;
else
return 0;
}

int IsFull (stack&s)
{
if (s.top == isi)
return 1;
else
return 0;
}

char masukan (int x, stack&s)
{
if (IsFull(s)==1)
{
cout<<"Stack isi! Tidak dapat menambah tumpukan data";
}

else
{
s.item[s.top]=x;
++(s.top);
}
}


//REPORT THIS AD

char keluaran (stack&s)
{
if (IsEmpty (s) == 1)
{
cout<<"Stack Masih Kosong!";
}

else
{
-(s.top);
return (s.item[s.top]);
}
}

void cetak (stack&s)
{
for (int i = 0; i<s.top; i++)
cout<<"Data ke-"<<i+1<<":"<<s.item[i]<<endl;
}

#define penuh 5
typedef struct
{
int kepala, ekor; //untuk mencacah indeks dari stack
int data[penuh+1];
}Queue;

Queue antrian;
int Empty()
{
if ((antrian.kepala> antrian.ekor) || (antrian.kepala == 0) && (antrian.ekor == 0))
return 1;
else
return 0;
}


//REPORT THIS AD

int Full()
{
if (antrian.ekor == penuh)
return 1;
else
return 0;
}

void masuk_antrian(int x)
{
if ((antrian.kepala == 0) && (antrian.ekor == 0))
{
antrian.kepala = 1;
antrian.ekor = 1;
}

else
{
antrian.ekor = antrian.ekor + 1;
}
antrian.data[antrian.ekor] = x;
}

void kaluar_antrian()
{
if (antrian.kepala > antrian.ekor)
{
antrian.kepala = 0;
antrian.ekor = 0;
}
antrian.kepala = antrian.kepala + 1;
}

int ssq() //menu kedua
{
int i, mapi; char input,kalimat[10],hasil[10];
stack tumpukan;
InisialisasiStack(tumpukan);


//REPORT THIS AD

cout<< "1. Struktur Stack"<<endl;
cout<< "2. Struktur Queue"<<endl<<endl;
cout<< "Masukkan Pilihan [1..2] : ";
cin>>mapi;
system("cls");
switch(mapi)
{
case 1: cout<< "=============="<<endl;
cout<< "STRUKTUR STACK"<<endl;
cout<< "=============="<<endl<<endl;
cout<< "Jumlah Data Ada 5 "<<endl<<endl;
for (i=0; i<isi; i++)
{
cout<<"Masukkan isi tumpukan ke-"<<i+1<<";";cin>>input;
kalimat [i] = masukan (input,tumpukan);
}

cout<<endl<<endl<<"============================="<<endl;
cout<<endl<<endl<<"============================="<<endl;
cout<<"CETAK DATA TUMPUKAN STACK"<<endl;
cout<<"============================="<<endl;
cetak(tumpukan);
cout<<endl<<"============================="<<endl;
cout<<"\n\n============================="<<endl;
cout<<"MENGAMBIL DATA TUMPUKAN STACK"<<endl;
cout<<"============================="<<endl;
for (i=0; i<isi; i++)
{
cout<<"Ambil Tumpukan :";
hasil[i] = keluaran(tumpukan); //keluaran
cout<<hasil[i]<<endl;
}
cout<<endl<<endl<<"============================="<<endl;
break;


//REPORT THIS AD

case 2: cout<< "=============="<<endl;
cout<< "STRUKTUR QUEUE"<<endl;
cout<< "=============="<<endl<<endl;
int lagi;
int msk;
lagi = 1;
while (lagi == 1)
{
if ((Empty() == 1) || (Full() == 0))
{
cout<< "Antrian masih tersedia.\n";
cout<< "Masukkan nilai: ";
cin>>msk;
masuk_antrian(msk);
cout<< "Tambah data (1/0)? : ";
cin>>lagi;
}
else if (Full() == 1)
{
cout<< "Antrian sudah penuh.\n";
getch();
lagi = 0;
}
}
while (Empty() == 0)
{
cout<< " "<<antrian.data[antrian.kepala];
kaluar_antrian();
}
break;
return 0;
}
}


//REPORT THIS AD

int akhir=4 ,awal=0 ,a;
struct data
{
string nama;
int NIM;
}mhs[5];

int search (int g)
{
if (awal<=akhir)
{
if(g==mhs[awal].NIM)
{
system("color 3");
cout<< "Dia adalah "<<mhs[awal].nama;
cout<< " Kelas 2D";
getch();
}

else
{
awal++;
search(g);
}
}

else
{
cout<<"data tidak ditemukan";
getch();
}
}

int srch()
{
int mpil;
cout<< "1. Binary"<<endl;
cout<< "2. Squential"<<endl;
cout<< "3. Interpolation"<<endl<<endl;
cout<< "Masukkan Pilihan [1..3] : ";
cin>>mpil;
system("cls");
switch(mpil)
{
case 1: cout<< "======"<<endl;
cout<< "BINARY"<<endl;
cout<< "======"<<endl<<endl;
int jd, cari,no, kiri,kanan,tengah,data[50];


//REPORT THIS AD

cout<<" Input Jumlah Data  : ";
cin>>jd;

cout<<endl;
for (no=0;no<jd;no++)
{
cout<<" Input Data Ke-"<<(no+1)<<"    : ";
cin>>data[no];
}

cout<<endl;
cout<<" Input Nilai Dicari : ";
cin>>cari;

kiri=0;
kanan=jd-1;
tengah=(kanan-kiri)/2;

while ((data[tengah]!=cari) && (kiri>=0)&& (kanan<jd) && (kanan>=kiri))
{
if (cari>data[tengah])
{
kiri=tengah+1;
}

else if (cari<data[tengah])
{
kanan=tengah-1;
}
tengah=kiri+(kanan-kiri)/2;
}

cout<<endl;
if (data[tengah]==cari)
{
cout<<" Keterangan         : Data Ditemukan";
}


//REPORT THIS AD

else
{
cout<<" Keterangan         : Data Tidak Ditemukan";
}
break;

case 2: cout<< "========="<<endl;
cout<< "SQUENTIAL"<<endl;
cout<< "========="<<endl<<endl;

mhs[0].nama="Ahmad Gapuri";
mhs[0].NIM=1316005;
mhs[1].nama="Nurul Khasanah";
mhs[1].NIM=1316003;
mhs[2].nama="Rahma Nurhamisah";
mhs[2].NIM=1316001;
mhs[3].nama="Ibnu fajar";
mhs[3].NIM=1316004;
mhs[4].nama="lusiana";
mhs[4].NIM=1316002;

system("color 6");
cout<<"Masukan NIM Mahasiswa TI  = A";cin>>a;
search (a);
break;

case 3: cout<< "============="<<endl;
cout<< "INTERPOLATION"<<endl;
cout<< "============="<<endl<<endl;

int A[10],i,j,k,tkr,rendah,tinggi,pos,tm;
for(i=0;i<10;i++)
{
cout<< "Masukkan Data Yang Ke-"<<i+1<< ": ";
cin>>A[i];
}


//REPORT THIS AD

cout<< "Masukkan Data Yang Akan Anda Cari : ";
cin>>k;
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if (A[i]>A[j])
{
tkr=A[i];
A[i]=A[j];
A[j]=tkr;
}
}
}

tm=0;
tinggi=9;
rendah=0;

do
{
pos = ((k-A[rendah])/(A[tinggi]-A[rendah]))*(tinggi-rendah) + rendah;
if (A[pos] == k)
{
tm++;
break;
}

if (A[pos] > k)
tinggi = pos-1;
else
if (A[pos] < k)
rendah = pos + 1;
}

while(k >= A[rendah] && k <= A[tinggi]);
if (tm>0)
{
cout<<endl;
cout<< "Data Yang Dicari Ada Dalam Array : "<<k;
}


//REPORT THIS AD

else
{
cout<< "Data tidak ditemukan dalam array\n";
}
getch();
break;
return 0;
}
}

long ar[10], asort, c, d, e;
long ard[10], dsort, cd, dd, ed;
void ab (long[], long);
void abd (long d[], long de);

int Ar[10];
int Qs(int arr[], int kiri, int kanan)
{
int i = kiri, j = kanan;
int tmp;
int tengh = arr[(kiri + kanan) / 2];
while (i <= j)
{
while (arr[i] < tengh)i++;
while (arr[j] > tengh)j--;
if (i <= j)
{
tmp = arr[i];
arr[i] = arr[j];
arr[j] = tmp;
i++;
j--;
}
};


//REPORT THIS AD

if (kiri < j)
Qs(arr, kiri, j);
if (i < kanan)
Qs(arr, i, kanan);
}

int srt()
{
int mpa;
cout<< "1. Buble Sort"<<endl;
cout<< "2. Quick Sort"<<endl;
cout<< "3. Insert Sort"<<endl<<endl;
cout<< "Masukkan Pilihan Anda : ";
cin>>mpa;
system("cls");
if(mpa==1)
{
cout<< "=========="<<endl;
cout<< "BUBLE SORT"<<endl;
cout<< "=========="<<endl<<endl;
int bubso;
cout<< "1. BUBLE ASCENDING"<<endl;
cout<< "2. BUBLE DESCENDING"<<endl<<endl;
cout<< "Masukkan Pilihan Anda : ";
cin>>bubso;
if(bubso==1)
{
cout<< "==============="<<endl;
cout<< "BUBLE ASCENDING"<<endl;
cout<< "==============="<<endl<<endl;
cout<< "Masukkan banyak data : ";
cin>>asort;
cout<< "Masukkan Data : "<<endl;
for(c=0;c<asort;c++)
cin>>ar[c];
ab(ar, asort);
cout<< "Daftar Urutan : "<<endl;
for(c=0;c<asort;c++)
cout<< ar[c]<<endl;
return 0;
}


//REPORT THIS AD

else if(bubso==2)
{
cout<< "================"<<endl;
cout<< "BUBLE DESCENDING"<<endl;
cout<< "================"<<endl<<endl;
cout<< "Masukkan banyak data : ";
cin>>dsort;
cout<< "Masukkan Data : "<<endl;
for(cd=0;cd<dsort;cd++)
cin>>ard[cd];
abd(ard, dsort);
cout<< "Daftar Urutan : "<<endl;
for(cd=0;cd<dsort;cd++)
cout<< ard[cd]<<endl;
}
}

else if(mpa==2)
{
cout<< "=========="<<endl;
cout<< "QUICK SORT"<<endl;
cout<< "=========="<<endl<<endl;
int jumlahBil;
cout<<"Masukkan jumlah bilangan dalam array  :";
cin>>jumlahBil;

int Ar[jumlahBil];
for(int i=0; i<jumlahBil; i++)
{
cout<<"Bilangan ke- "<< i+1<<" : ";
cin>>Ar[i];
}
Qs(Ar,0,jumlahBil-1 );
cout<<"Data yang telah diurutkan"<<endl;


//REPORT THIS AD

for(int i=0; i<jumlahBil; i++)
{
cout<<Ar[i]<<"\t";
}
}

else if(mpa==3)
{
cout<< "==========="<<endl;
cout<< "INSERT SORT"<<endl;
cout<< "==========="<<endl<<endl;
int ix ,ia[100],ii,it,ij,ik;
cout<<"Insertion Sort – Desc\n";
cout<<"Masukkan banyak bilangan = ";cin>>ix;

for(ii=1;ii<=ix;ii++)
{
cout<<"\n Bilangan ke-"<<ii<<" : ";cin>>ia[ii];
}
cout<<"\n\n data Sebelum diurutkan :";

for(ii=1;ii<=ix;ii++)
{
cout<<"  "<<ia[ii];
}
cout<<endl;

for(ii=1;ii<=ix;ii++)
{
for(ij=1;ij<=ii;ij++)
{
if(ia[ii]>ia[ij])
{
it=ia[ii];
ia[ii]=ia[ij];
ia[ij]=it;
}
}
cout<<"\n # "<<ii<<" : ";
for(ik=1;ik<=ii;ik++)
{
cout<<"  "<<ia[ik];
}
}
cout<<"\n\n data Setelah diurutkan secara descending : ";
for(ii=1;ii<=ix;ii++)
{
cout<<"  "<<ia[ii];
}
}
}


//REPORT THIS AD

void ab (long x[], long z)
{
long c,d,t;
for(c=0;c<(asort-1);c++)
{
for(d=0;d<asort-c-1;d++)
{
if(x[d]>x[d+1])
{
t=x[d];
x[d]=x[d+1];
x[d+1]=t;
}
}
}
}

void abd (long xd[], long zd)
{
long cd,dd,td;
for(cd=0;cd<(dsort-1);cd++)
{
for(dd=0;dd<dsort-cd-1;dd++)
{
if(xd[dd]<xd[dd+1])
{
td=xd[dd];
xd[dd]=xd[dd+1];
xd[dd+1]=td;
}
}
}
}

struct pohon_simpul
{
pohon_simpul* left;
pohon_simpul* right;
int data;


//REPORT THIS AD

};
pohon_simpul* akar;

bool ksg()
{
return akar==NULL;
}

void insert(int da)
{
pohon_simpul* ta = new pohon_simpul;
pohon_simpul* parent;
ta->data = da;
ta->left = NULL;
ta->right = NULL;
parent = NULL;
if(ksg())
{
akar = ta;
}

else
{
pohon_simpul* curr;
curr = akar;
while(curr!=NULL)
{
parent = curr;
if(ta->data > curr->data)
{
curr = curr->right;
}

else
{
curr = curr->left;
}
}


//REPORT THIS AD

if(ta->data < parent->data)
{
parent->left = ta;
}

else
{
parent->right = ta;
}
}
}

void pesan(pohon_simpul* pa)
{
if(pa!=NULL)
{
if(pa->left)
pesan(pa->left);
cout<<" "<<pa->data<<" ";

if(pa->right)
pesan(pa->right);
}

else
return;
}

void cetak_pesan()
{
pesan(akar);
}

int count(pohon_simpul* pa)
{
if(pa==NULL)return 0;
return count(pa->left) + count(pa->right) + 1;
}


//REPORT THIS AD

int height(pohon_simpul* pa)
{
if(pa==NULL)return 0;
int ua = height(pa->left),va = height(pa->right);

if(ua > va)
return ua+1;

else
return va+1;
}

void cari_terbesar(pohon_simpul* pa)
{
if(pa==NULL)

return;
else if(pa->right==NULL)
{
cout<<" "<<pa->data<<" ";
return;
}

else
{
cari_terbesar(pa->right);
return;
}
}

int tng()
{
cout<< "1. Tree"<<endl;
cout<< "2. Grap"<<endl<<endl;
cout<<endl<<endl;
int maspil;
cout<< "Masukkan Pilihan [1..2] : ";
cin>>maspil;


//REPORT THIS AD

if(maspil==1)
{
akar=NULL;
int ch,tmp;
while(1)
{
system("cls");
cout<<endl;
cout<<"Menu Utama Operasi Pohon Biner"<<endl;
cout<<"——————–"<<endl;
cout<<"1. Insert/Tambah Data"<<endl;
cout<<"2. Kunjungan In-pesan"<<endl;
cout<<"3. Menghitung Jumlah simpul"<<endl;
cout<<"4. Menghitung Tinggi Pohon"<<endl;
cout<<"5. Mencari Data Terbesar"<<endl;
cout<<"6. Exit"<<endl;
cout<<"Pilihan Anda [1..6] : ";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1 :cout<<"Masukan Data : ";
cin>>tmp;
insert(tmp);
break;

case 2 :cout<<endl;
cout<<"Kunjungan In-pesan"<<endl;
cout<<"—————"<<endl;
cetak_pesan();getch();
break;

case 3 :cout<<"Menghitung Jumlah simpul"<<endl;
cout<<"——————"<<endl;
cout<<"Jumlah simpul = "<<count(akar);
getch();
break;


//REPORT THIS AD

case 4 :cout<<"Menghitung Tinggi Pohon"<<endl;
cout<<"——————"<<endl;
cout<<"Tinggi Pohon = "<<height(akar);
getch();
break;

case 5 :cout<<"Mecari Data Terbesar"<<endl;
cout<<"——————"<<endl;
cout<<"Data Terbesar Adalah = "<<endl;
cari_terbesar(akar);
getch();
break;

case 6 :return 0;
break;
getch();
}
}
}

else if(maspil==2)
{
bool ketemu,nolsemua;
int matrix[10] [10];
int i,j,jumlah_simpul,jumlah_sisi,asal,tujuan;

cout<<"jumlah simpul:";
cin>>jumlah_simpul;
cout<<"jumlah_sisi:";
cin>>jumlah_sisi;
for (i=1;i<=jumlah_simpul;i++)
for (j=1;j<=jumlah_simpul;j++)
matrix[i][j]=0;

for (i=1;i<=jumlah_sisi;i++)
{
cout<<"simpul asal:";
cin>>asal;
cout<<"simpul tujuan:";
cin>>tujuan;
matrix[asal][tujuan]=1;
matrix[tujuan][asal]=1;
}

i=1;nolsemua=false;
while (i<=jumlah_simpul && !nolsemua)
{
j=1;ketemu=false;
while (j<=jumlah_simpul && !ketemu)
{
if (matrix[i][j]==1)
ketemu=true;

else
j++;
}

if (!ketemu)
{
nolsemua=true;
}

else
{
i++;
}
}

if(nolsemua)
{
cout<<"graf tidak terhubung";
}

else
{
cout<<"graf terhubung";
}
getch();
}
}

int main()
{
loading();
password();
int pilut;
char lagi;
atas:
cout<< "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
cout<< "SELAMAT DATANG DI APLIKASI ANANG GAGAH"<<endl;
cout<< "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl<<endl;

cout<< "Jenis Pilihan Yang Tersedia"<<endl;
cout<< "1. Struktur Array & Pointer"<<endl;
cout<< "2. Struktur Stack & Queue"<<endl;
cout<< "3. Searching"<<endl;
cout<< "4. Sorting"<<endl;
cout<< "5. Tree & Graph"<<endl;
cout<< "Masukkan Pilihan Yang Diinginkan [1..5] : ";
cin>>pilut;
system("cls");
if(pilut==1)
{
cout<< "xxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
cout<< "STRUKTUR ARRAY & POINTER"<<endl;
cout<< "xxxxxxxxxxxxxxxxxxxxxxxx"<<endl<<endl;
sasp();
cout<<endl<<endl;
cout<< "Tekan Tombol [y] Untuk Kembali Ke Menu Utama Dan Tekan Tombol [n] untuk Keluar Aplikasi : ";
cin>>lagi;
system("cls");
if (lagi=='y'||lagi=='Y')
goto atas;

else
{
cout<<endl;
cout<< "Terima Kasih Telah Menggunakan Aplikasi ini";
}
}

else if(pilut==2)
{
cout<< "======================"<<endl;
cout<< "STRUKTUR STACK & QUEUE"<<endl;
cout<< "======================"<<endl<<endl;
ssq();
cout<<endl<<endl;
cout<< "Tekan Tombol [y] Untuk Kembali Ke Menu Utama Dan Tekan Tombol [n] untuk Keluar Aplikasi : ";
cin>>lagi;
system("cls");
if (lagi=='y'||lagi=='Y')
goto atas;

else
{
cout<<endl;
cout<< "Terima Kasih Telah Menggunakan Aplikasi ini";
}
}

else if(pilut==3)
{
cout<< "========="<<endl;
cout<< "SEARCHING"<<endl;
cout<< "========="<<endl<<endl;
srch();
cout<<endl<<endl;
cout<< "Tekan Tombol [y] Untuk Kembali Ke Menu Utama Dan Tekan Tombol [n] untuk Keluar Aplikasi : ";
cin>>lagi;
system("cls");
if (lagi=='y'||lagi=='Y')
goto atas;

else
{
cout<<endl;
cout<< "Terima Kasih Telah Menggunakan Aplikasi ini";
}
}

else if(pilut==4)
{
cout<< "========="<<endl;
cout<< "SORTING"<<endl;
cout<< "========="<<endl<<endl;
srt();
cout<<endl<<endl;
cout<< "Tekan Tombol [y] Untuk Kembali Ke Menu Utama Dan Tekan Tombol [n] untuk Keluar Aplikasi : ";
cin>>lagi;
system("cls");
if (lagi=='y'||lagi=='Y')
goto atas;

else
{
cout<<endl;
cout<< "Terima Kasih Telah Menggunakan Aplikasi ini";
}
}

else if(pilut==5)
{
cout<< "============"<<endl;
cout<< "TREE & GRAPH"<<endl;
cout<< "============"<<endl<<endl;
tng();
cout<<endl<<endl;
cout<< "Tekan Tombol [y] Untuk Kembali Ke Menu Utama Dan Tekan Tombol [n] untuk Keluar Aplikasi : ";
cin>>lagi;
system("cls");
if (lagi=='y'||lagi=='Y')
goto atas;

else
{
cout<<endl;
cout<< "Terima Kasih Telah Menggunakan Aplikasi ini";
}
}

}
