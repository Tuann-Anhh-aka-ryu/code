#include<bits/stdc++.h>
using namespace std;
struct Nut
{
int khoa;
Nut *trai, *phai;
}; typedef Nut* cay;
cay taonut(int x)
{
    cay p=new Nut;
    p->khoa=x;
    p->trai=p->phai=NULL;
    return p;
}
int dem(cay t)
{
    if(t==NULL) return 0;
else return 1+dem(t->trai)+dem(t->phai);
}


int main()
{
    cay t=NULL;
    int n;
    cout<<"Nhap so nut ";
    cin>>n;
    cout<<"so nut cua cay la: "<<dem(t);
}
