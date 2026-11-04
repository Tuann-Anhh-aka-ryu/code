
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - 1 - i; j++)
            if(a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
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

    BubbleSort(a, n);

    cout << "Mang sau khi sap xep: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
