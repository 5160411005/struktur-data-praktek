#include <iostream>

using namespace std;

int main(){
    void *p;

    int x;
    long y;
    double z;

    p=&x;
    x=10;
    cout<<"Nilai x  : "<<x<<endl;
    cout<<"Nilai p  : "<<p<<endl;
    cout<<"Nilai &x : "<<&x<<endl;
    cout<<endl;

    p=&y;
    y=2000;
    cout<<"Nilai y  : "<<y<<endl;
    cout<<"Nilai p  : "<<p<<endl;
    cout<<"Nilai &y : "<<&y<<endl;
    cout<<endl;

    p=&z;
    z=21.0378;
    cout<<"Nilai z  : "<<z<<endl;
    cout<<"Nilai p  : "<<p<<endl;
    cout<<"Nilai &z : "<<&z<<endl;
    cout<<endl;

    return 0;
}
