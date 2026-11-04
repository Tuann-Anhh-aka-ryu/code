
#include<bits/stdc++.h>
using namespace std;

void QuickSort(int a[], int l, int r)
{
    int i = l, j = r;
    int x = a[(l + r) / 2];

    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;

        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if(l < j)
        QuickSort(a, l, j);

    if(i < r)
        QuickSort(a, i, r);
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

    QuickSort(a, 0, n - 1);

    cout << "Mang sau khi sap xep: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
