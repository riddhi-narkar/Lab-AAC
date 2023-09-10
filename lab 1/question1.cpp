#include <iostream>
#include <queue>
using namespace std;

void solve(int arr[4][4], int x, int y, int c)
{
    queue<int> x_cord;
    queue<int> y_cord;
    int i, j;

    x_cord.push(x);
    y_cord.push(y);

    while (!x_cord.empty())
    {
        x_cord.pop();
        y_cord.pop();

        i = x--;
        j = y;
        if(arr[i][j] == c)
        {
            x_cord.push(i);
            y_cord.push(j);
        }

        i = x;
        j = y++;
        if (arr[i][j] == c)
        {
            x_cord.push(i);
            y_cord.push(j);
        }

        i = x++;
        j = y;
        if (arr[i][j] == c)
        {
            x_cord.push(i);
            y_cord.push(j);
        }

        i = x;
        j = y--;
        if(arr[i][j] == c)
        {
            x_cord.push(i);
            y_cord.push(j);
         }
    }
 }

int main()
{
    int arr[4][4];
    int x, y, c;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];

    cin >> x >> y >> c;
    solve(arr, x, y, c);

    return 0;
}