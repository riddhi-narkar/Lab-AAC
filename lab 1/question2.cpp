#include<iostream>
#include<list>
using namespace std;

void solve(int n, int m, int arr[][])
{
    list<int> l;

}

int main()
{
    int m, n;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    solve(n, m, arr);

    return 0;
}