
#include<bits/stdc++.h>
using namespace std;

struct Nut
{
    int khoa;
    Nut *tiep;
};
typedef Nut* Queue;
Queue taonut(int x)
{
    Queue p = new Nut;
    p->khoa = x;
    p->tiep = NULL;
    return p;
}
void khoitao(Queue &q)
{
    q = NULL;
}
bool rong(Queue q)
{
    return q == NULL;
}
void push(Queue &q, int x)
{
    Queue p = taonut(x);

    if(q == NULL)
        q = p;
    else
    {
        Queue tam = q;
        while(tam->tiep != NULL)
            tam = tam->tiep;

        tam->tiep = p;
    }
}
void pop(Queue &q)
{
    if(q == NULL)
        return;

    Queue p = q;
    q = q->tiep;
    delete p;
}
int front(Queue q)
{
    if(q == NULL)
        return -1;

    return q->khoa;
}
int back(Queue q)
{
    if(q == NULL)
        return -1;

    while(q->tiep != NULL)
        q = q->tiep;

    return q->khoa;
}
int dem(Queue q)
{
    if(q == NULL)
        return 0;

    return 1 + dem(q->tiep);
}
void xuat(Queue q)
{
    while(q != NULL)
    {
        cout << q->khoa << " ";
        q = q->tiep;
    }
}

int main()
{
    Queue q;
    khoitao(q);

    int n, x;

    cout << "Nhap so phan tu: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri: ";
        cin >> x;
        push(q, x);
    }

    cout << "Queue: ";
    xuat(q);

    cout << "\nPhan tu dau Queue: " << front(q);
    cout << "\nPhan tu cuoi Queue: " << back(q);
    cout << "\nSo phan tu Queue: " << dem(q);

    pop(q);

    cout << "\nQueue sau khi Pop: ";
    xuat(q);

    return 0;
}

