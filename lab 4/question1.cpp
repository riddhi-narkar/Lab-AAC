#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int size, answer = 0;
        cin >> size;

        int arr[size];

        for (int i = 0; i < size; i++)
            cin >> arr[i];

        for (int i = 0; i < size; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                if(arr[i] > arr[j])
                    answer++;
            }
        }

        cout << answer << endl;
    }

    return 0;
}