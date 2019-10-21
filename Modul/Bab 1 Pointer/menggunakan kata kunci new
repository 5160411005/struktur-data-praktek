#include <iostream>

using namespace std;

int main(){
    float *p1;
    int *p2;

    p1=new float;
    *p1=3.14;
    cout<<"Nilai *p1    : "<<*p1<<endl;
    cout<<"Nilai p1     : "<<p1<<endl;
    cout<<"\n";

    p2=new int[5];
    for (int c=0; c<5; c++){
        *p2=(c+1)*10;
        p2+=1;
    }
    p2-=5;
    for (int c=0; c<5; c++){
        cout<<"Nilai *p2 ke-"<<c<<" :"<<*p2<<endl;
        cout<<"Nilai p2 ke-"<<c<<"  :"<<p2<<endl<<endl;
        p2+=1;
    }
    return 0;
}
