
#include<bits/stdc++.h>
using namespace std;

int timkiem(int a[], int n, int x)
{
    int l = 0, r = n - 1;

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(a[mid] == x)
            return mid;
        else if(a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}

int main()
{
    int a[100], n, x;

    cout << "Nhap n: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Nhap x can tim: ";
    cin >> x;

    int k = timkiem(a, n, x);

    if(k == -1)
        cout << "Khong tim thay x";
    else
        cout << "Tim thay x tai vi tri: " << k;

    return 0;
}
