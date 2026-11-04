
#include<bits/stdc++.h>
using namespace std;

void Merge(int a[], int l, int m, int r)
{
    int b[1000];
    int i = l, j = m + 1, k = 0;

    while(i <= m && j <= r)
    {
        if(a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while(i <= m)
        b[k++] = a[i++];

    while(j <= r)
        b[k++] = a[j++];

    for(i = l, k = 0; i <= r; i++)
        a[i] = b[k++];
}

void MergeSort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;

        MergeSort(a, l, m);
        MergeSort(a, m + 1, r);

        Merge(a, l, m, r);
    }
}

int main()
{
    int a[100], n;

    cout << "Nhap n: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    MergeSort(a, 0, n - 1);

    cout << "Mang sau khi sap xep: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
