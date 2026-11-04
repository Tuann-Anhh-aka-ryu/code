
#include<bits/stdc++.h>
using namespace std;

struct Nut
{
    int khoa;
    Nut *tiep;
};
typedef Nut* Stack;
Stack taonut(int x)
{
    Stack p = new Nut;
    p->khoa = x;
    p->tiep = NULL;
    return p;
}
void khoitao(Stack &s)
{
    s = NULL;
}
bool rong(Stack s)
{
    return s == NULL;
}
void push(Stack &s, int x)
{
    Stack p = taonut(x);
    p->tiep = s;
    s = p;
}
void pop(Stack &s)
{
    if(s == NULL)
        return;

    Stack p = s;
    s = s->tiep;
    delete p;
}
int top(Stack s)
{
    if(s == NULL)
        return -1;

    return s->khoa;
}
int dem(Stack s)
{
    if(s == NULL)
        return 0;

    return 1 + dem(s->tiep);
}
void xuat(Stack s)
{
    while(s != NULL)
    {
        cout << s->khoa << " ";
        s = s->tiep;
    }
}

int main()
{
    Stack s;
    khoitao(s);

    int n, x;

    cout << "Nhap so phan tu: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri: ";
        cin >> x;
        push(s, x);
    }

    cout << "Stack: ";
    xuat(s);

    cout << "\nPhan tu dau Stack: " << top(s);
    cout << "\nSo phan tu Stack: " << dem(s);

    pop(s);

    cout << "\nStack sau khi Pop: ";
    xuat(s);

    return 0;
}

