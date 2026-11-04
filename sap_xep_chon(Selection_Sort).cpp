
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
            if(a[j] < a[min])
                min = j;

        swap(a[i], a[min]);
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

    SelectionSort(a, n);

    cout << "Mang sau khi sap xep: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
