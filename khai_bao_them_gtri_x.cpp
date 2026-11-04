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
void chen(cay &t, int x)
{
    if(t==NULL)
    {
        t=taonut(x);
    }
    else
    {
        if(t->khoa<x)
            chen(t->phai,x);
        else
            if(t->khoa>x)
                chen(t->trai,x);
        else return;
    }
}
void duyet(cay t)
{
    if(t!=NULL)
    {
        cout<<t->khoa<<" ";
        duyet(t->trai);
        duyet(t->phai);
    }
}
int dem(cay t)
{
    if(t==NULL) return 0;
else return 1+dem(t->trai)+dem(t->phai);
}
int demle(cay t)
{
    if(t==NULL) return 0;
    else return (t->khoa%2!=0)+demle(t->trai)+demle(t->phai);
}
int tongnut(cay t)
{
    if(t==NULL) return 0;
    else return t->khoa+tongnut(t->trai)+tongnut(t->phai);
}
int tongduong(cay t)
{
    if(t==NULL) return 0;
    else return (t->khoa > 0)+tongduong(t->trai)+tongduong(t->phai);
}
int main()
{
    cay t=NULL;
    int n,x;
    cout<<"Nhap so nut ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<" Nhap gia tri: ";
        cin>>x;
        chen(t,x);
    }
    cout<<"duyet cay: ";
    duyet(t);
    cout<<"\n so nut cua cay: "<<dem(t);
    cout<<"\n so nut le: "<<demle(t);
    cout<<"\n tong nut: "<<tongnut(t);
    cout<<"\n tong cac nut duong: "<<tongduong(t);
    return 0;
}
