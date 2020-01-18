#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <stack>
#include <cstdlib>

using namespace std;

struct time {
    int jam;
    int men;
};

struct rencana {
    struct time awal;
    struct time akhir;
    int x,y;
};
struct rencana kerja {11,22,33,44,6,5};
funct (struct rencana oo)
{
    cout<<"dengan fungsi (a)\n"<<oo.awal.jam<<" "<<oo.awal.men<<" "<<
    oo.akhir.jam<<" "<<oo.akhir.men<<" "<<oo.y<<" "<<oo.x<<endl;
    oo.awal.jam = 111;
    oo.y=555;
    cout<<"dalam fungsi (a)\n"<<oo.awal.jam<<" "<<oo.awal.men<<" "<<
    oo.akhir.jam<<" "<<oo.akhir.men<<" "<<oo.y<<" "<<oo.x<<endl;
};

void swapmembers(int items[], int index1, int index2){
    int temp;

    temp = items[index1];
    items[index1] = items[index2];
    items[index2] = temp;
}

typedef struct node {
    int lkey;
    char nama[10];
    struct node* next;
}tnode;

tnode *head, *tail;

int loadnode(tnode *p);
void freenode(tnode *p);
void printnode(tnode *p);

void createlist(){
    tnode *p;
    int n=sizeof(tnode);

    head=tail=0;
    for(;;){
        if ((p=(tnode*)malloc(n))==0){
            printf("\n memori tidak cukup");
            break;
        }if (loadnote(p)!=1){
            freenode(p);
            break;
        }
        p->next=0;
        if (head==0)
            head=tail=0;
        else{
            tail->next=p;
            tail=p;
        }
    }
}

int loadnode(tnode *p){
    char opt;
    printf("\n masukkan node baru ? ");
    opt=getche();
    opt=toupper(opt);
    if (opt!='N'){
        puts("\n masukkan data untuk node = ");
        printf("\n lkey = \t");
        if (scanf("%d",&(p->lkey))!=1)
            return 0;
        printf("\n nama = \t");
        if (scanf("%s",p->name)!=1)
            return 0;
        return 1;
    }else
        return -1;
}

void freenode(tnode *p){
    free(p);
}

void viewalllist(){
    tnode *p;
    p=head;
    while (p){
        printnode(p);
        p=p->next;
    }
}

tnode* findnode(int key){
    tnode *p;
    p=head;
    while (p){
        if (p->lkey==key)
            return p;
        p=p->next;
    }
    return 0;
}

void printnode(tnode *p){
    if (p)
        printf("\n%d\t%s",p->name);
}

tnode* insertbeforehead(){
    tnode *p;
    int n=sizeof(tnode);
    if (((p=(tnode*)malloc(n)!=0)&&(loadnode(p)==1)){
        if (head==0){
           p->next=0;
           head=tail=p;
        }else{
           p->next=head;
           head=p;
        }
    return p;
    }
    if (p==0)
        printf("\n memori tidak cukup");
    else
        freenode(p);
    return 0;
}

tnode* insertbeforekey(int key){
    tnode *p, *q, *q1;
    int n=sizeof(tnode);
    q1=0;
    q=head;
    while (q){
        if (q->lkey == key)
            break;
            q1=q;
            q=q->next;
    }
    if (q==0){
        printf("\n tidak ada node yang mempunyai kunci atau senarai kosong");
        return 0;
    }if (((p=(tnode*)malloc(n))!=0)&&(loadnode(p)==1)){
        if (q==head){
            p->next=head;
            head=p;
        }else{
            p->next=q;
            q1->next=p;
        }
        return p;
    }
    if (p==0)
        printf("\n memori tidak cukup");
    else
        freenode(p);
    return 0;
}

tnode* insertafterkey(int key){
    tnode *p, *q;
    int n=sizeof(tnode);
    q=head;
    while (q){
        if (q->lkey == key)
            break;
            q=q->next;
    }
    if (q==0){
        printf("\n tidak ada node yang mempunyai kunci atau senarai kosong");
        return 0;
    }if (((p=(tnode*)malloc(n))!=0)&&(loadnode(p)==1)){
        if (q==tail){
            p->next=0;
            tail->next=p;
            tail=p;
        }else{
            p->next=q->next;
            q->next=p;
        }
        return p;
    }
    if (p==0)
        printf("\n memori tidak cukup");
    else
        freenode(p);
    return 0;
}

tnode* insertaftertail(){
    tnode *p;
    int n=sizeof(tnode);
    if (((p=(tnode*)malloc(n)!=0)&&(loadnode(p)==1)){
        p->next=0;
        if (head==0){
           head=tail=p;
        }else{
           tail->next=p;
           tail=p;
        }
    return p;
    }
    if (p==0)
        printf("\n memori tidak cukup");
    else
        freenode(p);
    return 0;
}

void removehead(){
    tnode *p;
    if (head==0)
        return;
    if (head==tail){
        freenode(head);
        head=tail=0;
        return;
    }
    p=head;
    head=head->next;
    freenode(p);
}

void removetail(){
    tnode *p, *q;
    if (head==0)
        return;
    if (head==tail){
        freenode(head);
        head=tail=0;
        return;
    }
    q=0;
    p=head;
    while (p!=tail){
        q=p;
        p=p->next;
    }
    p=tail;
    freenode(p);
    q->next=0;
    tail=q;
}

void removebykey(int key){
    tnode *p, *q;
    if (head==0)
        return;
    q=0;
    p=head;
    while (head==0){
        if (p->lkey == key)
        break;
        q=p;
        p=p->next;
    }
    if (!p){
        printf("\n tidak ada node yang mempunyai kunci");
        return;
    }
    if (head==tail){
        freenode(head);
        head=tail=0;
        return;
    }
    if (p==head){
        head=head->next;
        freenode(p);
        return;
    }
    if (p==tail){
        q->next=0;
        tail=q;
        freenode(p);
        return;
    }
    q->next=p->next;
    freenode(p);
}

void deletelist(){
    tnode *p;
    p=head;
    while (p){
        head=head->next;
        freenode(p);
        p=head;
    }
    tail=0;
}

class tumpukan
{
private:
    int ukuranmaks;
    vector<double>tumpukanvector;
    int atas;
public:
    tumpukan(int s): ukuranmaks(s),atas(-1)
    {
        tumpukanvector.reserve(ukuranmaks);
    }
    void push(double j)
    {
        tumpukanvector[++atas]=j;
    }
    double pop()
    {
        return tumpukanvector[atas--];
    }
    double peek()
    {
        return tumpukanvector[atas];
    }
    bool apakosong()
    {
        return(atas==-1);
    }
    bool apapenuh()
    {
        return(atas==ukuranmaks-1);
    }
};

class simpul
{
public:
    double ddata;
    simpul*pbrktnya;
    simpul*psblmnya;
    simpul(double dd): ddata(dd),pbrktnya(NULL),psblmnya(NULL)
    {}
    void tampilsimpul()
    {
        cout<<ddata<<" ";
    }
};
class senaraiberantai
{
private:
    simpul*ppertama;
public:
    senaraiberantai():ppertama(NULL){}
    ~senaraiberantai()
    {
        simpul*pskrg = ppertama;
        while(pskrg!=NULL)
        {
            simpul*plama = pskrg;
            pskrg = pskrg->pbrktnya;
            delete plama;
        }
    }
    bool apakosong()
    {
        return(ppertama==NULL);
    }
    void sisippertama(double dd)
    {
        simpul*psimpulbaru = new simpul(dd);
        psimpulbaru->pbrktnya=ppertama;
        ppertama=psimpulbaru;
    }
    double hapuspertama()
    {
        simpul*ptemp = ppertama;
        ppertama = ppertama->pbrktnya;
        double kunci=ptemp->ddata;
        delete ptemp;
        return kunci;
    }
    void tampilsenarai()
    {
        simpul*pskrg=ppertama;
        while(pskrg !=NULL)
        {
            pskrg->tampilsimpul();
            pskrg=pskrg->pbrktnya;
        }
        cout<<endl;
    }
};
class tumpukansenarai
{
private:
    senaraiberantai*psenarai;
public:
    tumpukansenarai()
    {
        psenarai=new senaraiberantai;
    }
    ~tumpukansenarai()
    {
        delete psenarai;
    }
    void push(double j)
    {
        psenarai->sisippertama(j);
    }
    double pop()
    {
        return psenarai->hapuspertama();
    }
    bool apakosong()
    {
        return(psenarai->apakosong());
    }
    void tampiltumpukan()
    {
        cout<<"tumpukan(atas-->bawah): ";
        psenarai->tampilsenarai();
    }
};

class antrian
{
private:
    int ukuranmaks;
    vector<int>vectorantrian;
    int depan;
    int belakang;
    int jumitem;
public:
    antrian(int s):ukuranmaks(s),depan(0),belakang(-1),jumitem(0)
    {
        vectorantrian.resize(ukuranmaks);
    }
    void sisip(int j)
    {
        if(belakang==ukuranmaks-1)
            belakang=-1;
        vectorantrian[++belakang]=j;
        jumitem++;
    }
    int hapus()
    {
        int temp = vectorantrian[depan++];
        if(depan==ukuranmaks)
            depan=0;
        jumitem--;
        return temp;
    }
    int intipdepan()
    {
        return vectorantrian[depan];
    }
    bool apakosong()
    {
        return(jumitem==0);
    }
    bool apapenuh()
    {
        return(jumitem==ukuranmaks);
    }
    int ukuran()
    {
        return jumitem;
    }
};

class senaraiberantaiganda
{
private:
    simpul*ppertama;
    simpul*pakhir;
public:
    senaraiberantaiganda():ppertama(NULL),pakhir(NULL){}
    ~senaraiberantaiganda()
    {
        simpul*pskrg=ppertama;
        while(pskrg !=NULL)
        {
            simpul*ptemp=pskrg;
            pskrg=pskrg->pbrktnya;
            delete ptemp;
        }
    }
    bool apakosong()
    {
        return ppertama==NULL;
    }
    void sisippertama(double dd){
        simpul* psimpulbaru = new simpul(dd);
        if(apakosong())
            pakhir = psimpulbaru;
        else
            ppertama->psblmnya = psimpulbaru;
            psimpulbaru->pbrktnya = ppertama;
            ppertama = psimpulbaru;
    }
    void sisipakhir(double dd)
    {
        simpul*psimpulbaru= new simpul(dd);
        if(apakosong())
            ppertama=psimpulbaru;
        else
            pakhir->pbrktnya=psimpulbaru;
            pakhir=psimpulbaru;
    }
    bool sisipsetelah(double kunci, double dd){
        simpul* pskrg = ppertama;
        while(pskrg->ddata != kunci){
            pskrg = pskrg->pbrktnya;
            if(pskrg == NULL)
                return false;
        }
        simpul* psimpulbaru = new simpul(dd);
        if(pskrg == pakhir){
            psimpulbaru->pbrktnya = NULL;
            pakhir = psimpulbaru;
        }else{
            psimpulbaru->pbrktnya = pskrg->pbrktnya;
            pskrg->pbrktnya->psblmnya = psimpulbaru;
        }
        psimpulbaru->psblmnya = pskrg;
        pskrg->pbrktnya = psimpulbaru;
        return true;
    }
    double hapuspertama()
    {
        simpul*ptemp=ppertama;
        double temp = ppertama->ddata;
        if(ppertama->pbrktnya==NULL)
            pakhir=NULL;
        ppertama=ppertama->pbrktnya;
        delete ptemp;
        return temp;
    }
    double hapusakhir(){
        simpul* ptamp = pakhir;
        if(ppertama->pbrktnya == NULL)
            ppertama = NULL;
        else
            pakhir->psblmnya->pbrktnya = NULL;
            pakhir = pakhir->psblmnya;
        delete ptamp;
    }
    bool hapuskunci(double kunci){
        simpul* pskrg = ppertama;
        while(pskrg->ddata != kunci){
            pskrg = pskrg->pbrktnya;
            if(pskrg == NULL)
                return false;
        }
        if(pskrg == ppertama){
            ppertama = pskrg->pbrktnya;
        }else{
            pskrg->psblmnya->pbrktnya = pskrg->pbrktnya;
        }
        if(pskrg == pakhir){
            pakhir = pskrg->psblmnya;
        }else{
            pskrg->pbrktnya->psblmnya = pskrg->psblmnya;
            delete pskrg;
        }
        return true;
    }
    void tampilmaju(){
        cout<<"\nSenarai (Pertama-->Akhir) = ";
        simpul* pskrg = ppertama;
        while(pskrg != NULL){
            pskrg->tampilsimpul();
            pskrg = pskrg->pbrktnya;
        }
        cout<<endl;
    }

    void tampilmundur(){
        cout<<"\nSenarai (Akhir-->Pertama) = ";
        simpul* pskrg = pakhir;
        while(pskrg != NULL){
            pskrg->tampilsimpul();
            pskrg = pskrg->psblmnya;
        }
        cout<<endl;
    }
    void tampilsenarai()
    {
        simpul*pskrg = ppertama;
        while(pskrg!=NULL)
        {
            pskrg->tampilsimpul();
            pskrg=pskrg->pbrktnya;
        }
        cout<<endl;
    }
};
class senaraiantrian
{
    private:
    senaraiberantaiganda senarai;
public:
    bool apakosong()
    {
        return senarai.apakosong();
    }
    void sisip(double j)
    {
        senarai.sisipakhir(j);
    }
    double hapus()
    {
        return senarai.hapuspertama();
    }
    void tampilantrian()
    {
        cout<<"antrian (depan-->belakang): ";
        senarai.tampilsenarai();
    }
};

class Simpul
{
public:
    int iData;
    double dData;
    Simpul*pAnakKiri;
    Simpul*pAnakKanan;

    Simpul(): iData(0), dData(0.0), pAnakKiri(NULL), pAnakKanan(NULL)
    {}
    ~Simpul()
    {
        cout <<"X-"<<iData<<"";
    }

    void tampilSimpul()
    {
        cout <<"{"<<iData<<","<<dData<<"}";
    }
};

class Pohon
{
private:
    Simpul*pAkar;
public:
    Pohon():pAkar(NULL)
    {}

    Simpul*cari(int kunci)
    {
        Simpul*pSkrg=pAkar;
        while (pSkrg->iData != kunci)
        {
            if(kunci<pSkrg->iData)
                pSkrg=pSkrg->pAnakKiri;
            else
                pSkrg=pSkrg->pAnakKanan;
            if(pSkrg==NULL)
                return NULL;
        }
        return pSkrg;
    }

    void sisip(int id, double dd)
    {
        Simpul*SimpulBaru = new Simpul;
        SimpulBaru->iData=id;
        SimpulBaru->iData=dd;

        if(pAkar==NULL)
            pAkar=SimpulBaru;
        else
        {
            Simpul*pSkrg=pAkar;
            Simpul*pInduk;
            while(true)
            {
                pInduk=pSkrg;
                if(id<pSkrg->iData)
                {
                    pSkrg=pSkrg->pAnakKiri;
                    if(pSkrg==NULL)
                    {
                        pInduk->pAnakKiri=SimpulBaru;
                        return;
                    }
                }
                else
                {
                    pSkrg=pSkrg->pAnakKanan;
                    if(pSkrg==NULL)
                    {
                        pInduk->pAnakKanan=SimpulBaru;
                        return;
                    }
                }
            }
        }
    }

    void jelajah(int tipeJelajah)
    {
        switch(tipeJelajah)
        {
            case 1: cout<<"\n Penjelajah Preorder:";
            preOrder(pAkar);
            break;
            case 2: cout<<"\n Penjelajah inorder:";
            inOrder(pAkar);
            break;
            case 3: cout<<"\n Penjelajah Postorder:";
            postOrder(pAkar);
            break;
        }
        cout<<endl;
    }

    void preOrder(Simpul*pAkarLokal)
    {
        if(pAkarLokal !=NULL)
        {
            cout <<pAkarLokal->iData<<"";
            preOrder(pAkarLokal->pAnakKiri);
            preOrder(pAkarLokal->pAnakKanan);
        }
    }

    void inOrder(Simpul*pAkarLokal)
    {
        if(pAkarLokal != NULL)
        {
            inOrder(pAkarLokal->pAnakKiri);
            cout<< pAkarLokal->iData<<"";
            inOrder(pAkarLokal->pAnakKanan);
        }
    }

    void postOrder(Simpul*pAkarLokal)
    {
        if(pAkarLokal != NULL)
        {
            postOrder(pAkarLokal->pAnakKiri);
            postOrder(pAkarLokal->pAnakKanan);
            cout<<pAkarLokal->iData<<"";
        }
    }

    void tampilPohon()
    {
        stack<Simpul*> tumpukan;
        tumpukan.push(pAkar);
        int jumSpasi = 32;
        bool apaBarisKosong= false;
        cout <<".............................";
        cout << endl;

        while (apaBarisKosong==false)
        {
            stack<Simpul*> tumpukanLokal;
            apaBarisKosong=true;

            for(int j=0;j<jumSpasi;j++)
                cout <<"";

            while (tumpukan.empty()==false)
            {
                Simpul*temp = tumpukan.top();
                tumpukan.pop();

                if(temp !=NULL)
                {
                    cout <<temp->iData;
                    tumpukanLokal.push(temp->pAnakKiri);
                    tumpukanLokal.push(temp->pAnakKanan);

                    if(temp->pAnakKiri !=NULL || temp->pAnakKanan !=NULL)
                        apaBarisKosong=false;
                }
                else
                {
                    cout <<"__";
                    tumpukanLokal.push(NULL);
                    tumpukanLokal.push(NULL);
                }

                for (int j=0; j<jumSpasi*2-2; j++)
                    cout <<"";
            }
            cout <<endl;
            jumSpasi/=2;

            while(tumpukanLokal.empty()==false)
            {
                tumpukan.push(tumpukanLokal.top());
                tumpukanLokal.pop();
            }
        }
        cout <<"....................................";
        cout << endl;
    }

    void hapus()
    {
        hapusRekursif(pAkar);
    }

    void hapusRekursif(Simpul*pAkarLokal)
    {
        if(pAkarLokal != NULL)
        {
            hapusRekursif(pAkarLokal->pAnakKiri);
            hapusRekursif(pAkarLokal->pAnakKanan);

            delete pAkarLokal;
        }
    }
};

class Simpul_SBBST
{
public:
    int tinggi, data;
    Simpul_SBBST*kiri,*kanan;

    Simpul_SBBST()
    {
        kiri = NULL;
        kanan = NULL;
        data = 0;
        tinggi = 0;
    }

    Simpul_SBBST(int n)
    {
        kiri = NULL;
        kanan = NULL;
        data = n;
        tinggi = 0;
    }
};

class PohonSBBSTSeimbang
{
private:
    Simpul_SBBST*akar;
public:
    PohonSBBSTSeimbang()
    {
        akar = NULL;
    }

    bool apaKosong()
    {
        return akar = NULL;
    }

    void membuatKosong()
    {
        akar = NULL;
    }

    void sisip(int data)
    {
        akar = sisip(data, akar);
    }

    int tinggi(Simpul_SBBST*t)
    {
        return t == NULL? -1 : t-> tinggi;
    }

    int maks(int lhs, int rhs)
    {
        return lhs > rhs ? lhs : rhs;
    }

    Simpul_SBBST*sisip(int x, Simpul_SBBST*t)
    {
        if(t==NULL)
            t=new Simpul_SBBST(x);
        else if (x < t->data)
        {
            t->kiri = sisip(x,t->kiri);
            if(tinggi(t->kiri)-tinggi(t->kanan)==2)
                if(x<t->kiri->data)
                t=rotasiDenganAnakKiri(t);
                else
                    t=doubleDenganAnakKiri(t);
        }
        else if (x>t->data)
        {
            t->kanan=sisip(x,t->kanan);
            if(tinggi(t->kanan)-tinggi(t->kiri)==2)
                if(x>t->kanan->data)
                t=rotasiDenganAnakKanan(t);
            else
                t=doubleDenganAnakKanan(t);
        }
        t->tinggi=maks(tinggi(t->kiri),tinggi(t->kanan))+1;
        return t;
    }

    Simpul_SBBST*rotasiDenganAnakKiri(Simpul_SBBST*k2)
    {
        Simpul_SBBST*k1=k2->kiri;
        k2->kiri=k1->kanan;
        k1->kanan=k2;
        k2->tinggi=maks(tinggi(k2->kiri), tinggi(k2->kanan))+1;
        k1->tinggi=maks(tinggi(k1->kiri),k2->tinggi)+1;
        return k1;
    }
    Simpul_SBBST*rotasiDenganAnakKanan(Simpul_SBBST*k1)
    {

    Simpul_SBBST*k2=k1->kanan;
    k1->kanan=k2->kiri;
    k2->kiri=k1;
    k1->tinggi=maks(tinggi(k1->kiri), tinggi(k1->kanan))+1;
    k2->tinggi=maks(tinggi(k2->kanan), k1->tinggi)+1;
    return k2;
    }

    Simpul_SBBST*doubleDenganAnakKiri(Simpul_SBBST*k3)
    {
        k3->kiri=rotasiDenganAnakKanan(k3->kiri);
        return rotasiDenganAnakKiri(k3);
    }

    Simpul_SBBST*doubleDenganAnakKanan(Simpul_SBBST*k1)
    {
        k1->kanan=rotasiDenganAnakKiri(k1->kanan);
        return rotasiDenganAnakKanan(k1);
    }

    int hitungSimpul()
    {
        return hitungSimpul(akar);
    }

    int hitungSimpul(Simpul_SBBST*r)
    {
        if(r==NULL)
            return 0;
        else
        {
            int l=1;
            l+=hitungSimpul(r->kiri);
            l+=hitungSimpul(r->kanan);
            return l;
        }
    }

    bool  cari(int nil)
    {
        return cari(akar, nil);

    }

    bool cari(Simpul_SBBST*r, int nil)
    {
        bool ditemukan= false;
        while ((r!=NULL)&& !ditemukan)
        {
            int nilaiKanan = r->data;
            if(nil<nilaiKanan)
                r=r->kiri;
            else if(nil>nilaiKanan)
                r=r->kanan;
            else
            {
                ditemukan = true;
                break;
            }
            ditemukan=cari(r,nil);
        }
        return ditemukan;
    }

    void inorder()
    {
        inorder(akar);
    }

    void inorder(Simpul_SBBST*r)
    {
        if(r!=NULL)
        {
            inorder(r->kiri);
            cout << r->data<<"";
            inorder(r->kanan);
        }
    }

    void preorder()
    {
        preorder(akar);
    }

    void preorder(Simpul_SBBST*r)
    {
        if(r!=NULL)
        {
            cout <<r->data<<"";
            preorder(r->kiri);
            preorder(r->kanan);
        }
    }

    void postorder()
    {
        postorder(akar);
    }

    void postorder(Simpul_SBBST*r)
    {
        if(r!=NULL)
        {
            postorder(r->kiri);
            postorder(r->kanan);
            cout <<r->data<<"";
        }
    }
};
        
int main()
{
char ulang,ch,pilihan=NULL;
long *p;
long x;
int i,pil,n,m,nilai,nil,pilihan,dt[100],cr,data[5],jml=0,sigma=0,numbers[] = {102,21,83,42,11,10,9,3,20,27,15,92,2};
float rata,stddeviasi;
Simpul*ditemukan;

do{
    system("cls");
    cout<<"\t|==================================|"<<endl;
    cout<<"\t|+|+|+|+| KUMPULAN PROGRAM |+|+|+|+|"<<endl;
    cout<<"\t|==================================|"<<endl;
    cout<<"\t|----------------------------------|"<<endl;
    cout<<"\t|      KUMPULAN PROGRAM MODUL      |"<<endl;
    cout<<"\t|----------------------------------|"<<endl;
    cout<<"\t|                                  |"<<endl;
    cout<<"\t|1. Pointer                        |"<<endl;
    cout<<"\t|2. Array                          |"<<endl;
    cout<<"\t|3. Struktur                       |"<<endl;
    cout<<"\t|4. Sorting                        |"<<endl;
    cout<<"\t|5. Searching                      |"<<endl;
    cout<<"\t|6. Linked list senarai berantai   |"<<endl;
    cout<<"\t|7. Tumpukan                       |"<<endl;
    cout<<"\t|8. Senarai berantai tumpukan      |"<<endl;
    cout<<"\t|9. Antrian                        |"<<endl;
    cout<<"\t|10. Senarai berantai antrian      |"<<endl;
    cout<<"\t|11. Senarai berantai ganda        |"<<endl;
    cout<<"\t|12. Pohon biner                   |"<<endl;
    cout<<"\t|13. Senarai beratai ganda         |"<<endl;
    cout<<"\t|14. KELUAR                        |"<<endl;
    cout<<"\t|                                  |"<<endl;
    cout<<"\t|==================================|"<<endl;
    cout<<endl;
    cout<<"\tPilihlah menurut bab [1 - 14] : ";cin>>pil;
    switch(pil){
        case 1: system("cls");
          p=&x;
          x=10;
          cout<<"Nilai X  : "<<x<<endl;
          cout<<"Nilai *P : "<<*p<<endl;
          cout<<"Nilai P  : "<<p<<endl;
          cout<<"Nilai &X : "<<&x<<endl;
          *p=200;
          cout<<"Nilai X  : "<<x<<endl;
          cout<<"Nilai *P : "<<*p<<endl;
          cout<<"Nilai P  : "<<p<<endl;
          cout<<"Nilai &X : "<<&x<<endl;
          cout<<endl;
          break;
        case 2: system("cls");
          for (int i=1; i<=5; i++){
            cout<<"Masukkan data pada elemen ke-"<<i<<" = ";
            cin>>data[i];
            jml=jml+data[i];
          }
          cout<<endl;
          rata=jml/5;
          for (int i=1; i<=5; i++){
            sigma=sigma+(pow((data[i]-rata),2));
          }
          stddeviasi=sqrt(sigma/5);
          cout<<"Nilai rata-rata dari array di atas adalah "<<rata<<endl;
          cout<<"Nilai standart deviasi dari array di atas adalah "<<stddeviasi;
          cout<<endl;
          break;
        case 3: system("cls");
          kerja.akhir.men = 40;
          kerja.x = 66;
          cout<<"proses main sebelum ke fungsi\n"<<kerja.awal.jam<<" "<<kerja.awal.men<<" "<<
          kerja.akhir.jam<<" "<<kerja.akhir.men<<" "<<kerja.y<<" "<<kerja.x<<endl;
          funct(kerja);
          cout<<"proses main sesudah ke fungsi\n"<<kerja.awal.jam<<" "<<kerja.awal.men<<" "<<
          kerja.akhir.jam<<" "<<kerja.akhir.men<<" "<<kerja.y<<" "<<kerja.x<<endl;
          cout<<endl;
          break;
        case 4: system("cls");
          const int size = sizeof(numbers) / sizeof(numbers[0]);
          for (n=size-1; n>0; n--){
            for (m=0; m<n; m++){
              if (numbers[m]>numbers[m+1]){
                swapmembers(numbers, m, m+1);
              }
            }
          }
          for (n=0; n<size; n++){
            cout<<numbers[n]<<" , ";
          }
          cout<<endl;
          break;
        case 5: system("cls");
          cout<<"masukkan jumlah array = ";cin>>n;
          for (i=1; i<=n; i++){
            cout<<"masukkan data array ke-"<<i<<" = ";cin>>dt[i];
          }
          cout<<"masukkan nilai yang dicari = ";cin>>cr;
          cout<<endl;
          for (i=1; i<=n; i++){
            if (dt[i]==cr){
              cout<<"data ditemukan\n";
              i=n;
            }else if(i==n){
              cout<<"data tidak ditemukan\n";
            }
          }
          cout<<endl;
          break;
        case 6: system("cls");
          createlist();
          viewalllist();
          insertaftertail();
          viewalllist();
          removehead();
          viewalllist();
          insertafterkey(1);
          viewalllist();
          insertafterkey(2);
          viewalllist();
          deletelist();
          viewalllist();
          cout<<endl;
          break;
        case 7: system("cls");
          tumpukan tumpukan(10);
          tumpukan.push(20);
          tumpukan.push(40);
          tumpukan.push(60);
          tumpukan.push(80);
          while(!tumpukan.apakosong()){
            double nilai = tumpukan.pop();
            cout<<nilai<<" ";
          }
          cout<<endl;
          break;
        case 8: system("cls");
          tumpukansenarai tumpukan;
          tumpukan.push(20);
          tumpukan.push(40);
          tumpukan.tampiltumpukan();
          tumpukan.push(60);
          tumpukan.push(80);
          tumpukan.tampiltumpukan();
          tumpukan.pop();
          tumpukan.pop();
          tumpukan.tampiltumpukan();
        ` cout<<endl;
          break;
        case 9: system("cls");
          antrian antrian(5);
          antrian.sisip(10);
          antrian.sisip(20);
          antrian.sisip(30);
          antrian.sisip(40);
          antrian.hapus();
          antrian.hapus();
          antrian.hapus();
          antrian.sisip(50);
          antrian.sisip(60);
          antrian.sisip(70);
          antrian.sisip(80);
          while(!antrian.apakosong()){
              int n = antrian.hapus();
              cout<<n<<" ";
          }
          cout<<endl;
          break;
        case 10: system("cls");
          senaraiantrian antrian;
          antrian.sisip(20);
          antrian.sisip(40);
          antrian.tampilantrian();
          antrian.sisip(60);
          antrian.sisip(80);
          antrian.tampilantrian();
          cout<<"menghapus dua item"<<endl;
          antrian.hapus();
          antrian.hapus();
          antrian.tampilantrian();
          cout<<endl;
          break;
        case 11: system("cls");
          senaraiberantaiganda senarai;
          senarai.sisippertama(22);
          senarai.sisippertama(44);
          senarai.sisippertama(66);
          senarai.sisipakhir(11);
          senarai.sisipakhir(33);
          senarai.sisipakhir(55);
          senarai.tampilmaju();
          senarai.tampilmundur();
          cout<<"\nMenghapus Simpul Pertama, Simpul akhir, dan 11"<<endl;
          senarai.hapuspertama();
          senarai.hapusakhir();
          senarai.hapuskunci(11);
          senarai.tampilmaju();
          cout<<"\nMenyisipkan 77 Setelah Simpul 22, dan 88 Setelah 33"<<endl;
          senarai.sisipsetelah(22, 77);
          senarai.sisipsetelah(33, 88);
          senarai.tampilmaju();
          cout<<endl;
          break;
        case 12: system("cls");
          Pohon pohon;
          pohon.sisip(50,5.0);
          pohon.sisip(25,2.5);
          pohon.sisip(75,7.5);
          pohon.sisip(12,1.2);
          pohon.sisip(37,3.7);
          pohon.sisip(43,4.3);
          pohon.sisip(30,3.0);
          pohon.sisip(33,3.3);
          pohon.sisip(87,8.7);
          pohon.sisip(93,9.3);
          pohon.sisip(97,9.7);
          while (pilihan !='k'){
            cout <<"Masukkan huruf pertama dari";
            cout <<"tampil,sisip,cari,jelajah,atau keluar:";
            cin >> pilihan;
            switch(pilihan){
              case 't':
                pohon.tampilPohon();
                break;
              case 's':
                cout <<"Masukkan nilai yang akan disisipkan:";
                cin >> nilai;
                pohon.sisip(nilai, nilai+ 0.9);
                break;
              case 'c':
                cout <<"Masukkan nilai yang akan di cari:";
                cin >> nilai;
                ditemukan = pohon.cari(nilai);
                if(ditemukan != NULL){
                  cout <<"Ditemukan:";
                  ditemukan->tampilSimpul();
                  cout << endl;
                }else
                  cout << "Tidak ditemukan." <<nilai<<endl;
                break;
              case'j' :
                cout << "Masukkan tipe jelajah(1 = preorder," << "2 = inorder, 3 = postorder):";
                cin >> nilai;
                pohon.jelajah(nilai);
                break;
              case 'k':
                pohon.hapus();
                cout << endl;
                break;
              default :
                cout << "Entri tak Valid \n";
            }
          }
          cout<<endl;
          break;
        case 13: system("cls");
          PohonSBBSTSeimbang sbbst;
          cout <<"Uji Pohon BST Seimbang\n";
          do{
            cout <<"\n Operasi-Operasi Pohon BST Seimbang\n";
            cout <<"1. Sisisp "<<endl;
            cout <<"2. Hitung Simpul"<<endl;
            cout <<"3. Cari " << endl;
            cout <<"4. Periksa Kosong " << endl;
            cout <<"5. Membuat Kosong" <<endl;
            cout <<"Masukan Pilihan Anda :";
            cin >> pilihan;
            switch (pilihan){
            case 1:
              cout <<"Masukkan elemen integer yang akan disisipkan:";
              cin >> nil;
              sbbst.sisip(nil);
              break;
            case 2:
              cout <<"Simpul = "<<endl;
              sbbst.hitungSimpul();
              break;
            case 3 :
              cout <<"Masukkan elemen integer yang akan dicari:";
              cin >>nil;
              if(sbbst.cari(nil))
                cout <<nil<<"ditemukan didalam pohon"<<endl;
              else
                cout <<nil<<"tidak ditemukan"<<endl;
              break;
            case 4 :
              cout <<"status kosong=";
              if(sbbst.apaKosong())
                cout <<"Pohon Kosong"<<endl;
              else
                cout <<"Pohon Tidak Kosong"<<endl;
              break;
            case 5 :
              cout <<"\n Pohon dikosongkan\n";
              sbbst.membuatKosong();
              break;
            default :
              cout <<"Entri Salah\n ";
              break;
          }
          cout <<"\n Post Order:";
          sbbst.postorder();
          cout <<"\n Pre Order:";
          sbbst.preorder();
          cout <<"\n In Order:";
          sbbst.inorder();
          cout <<"\n Anda Ingin Melnjutkan ? (ketik y atau t):";
          cin >> ch;
          }while (ch=='Y'|| ch=='y');
          cout<<endl;
          break;
        case 14:
          ulang='n';
          cout <<" \nTerimakasih [tekan enter 2x untuk keluar]";
          getch();
          return 0;
          break;
        default:
          cout<<"================================="<<endl;
          cout<<"|  MENU TIDAK TERIDENTIFIKASI!! |\n";
          cout<<"================================="<<endl;
          cout<<endl;
          break;
    }
    i++;
    cout<<"Apakah anda ingin melanjutkan program ?(y/n) "; cin>>ulang;
    system ("cls");
} while(ulang=='Y' || ulang=='y');
cout <<" \nTerimakasih [tekan enter 2x untuk keluar]";
}
