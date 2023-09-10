#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[10], root, p, q;

    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cin >> p >> q;
    root = arr[0];

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    if(p < root && q > root)
        cout << "the answer is " << root << endl;

    else if

    return 0;
}