#include <iostream>
#include <queue>
using namespace std;

void solve(int arr[4][4], int x, int y, int c)
{
    int visited[4][4] = {0};

    queue<pair<int, int>> Q;
    Q.push({x, y});

    // use curly braces to push any "container" of STL into another container seamlessly
    //that is without declaring and initializing a new pair

    int value = arr[x][y];
    arr[x][y] = c;
    visited[x][y] = 1; // marking source as visited

    int delta_x[4] = {-1, 1, 0, 0};
    int delta_y[4] = {0, 0, -1, 1};

    //BFS
    while (!Q.empty())
    {
        pair<int, int> element;
        element = Q.front();
        Q.pop();

        for(int i = 0; i<4; i++)
        {
            int neighbour_x = element.first + delta_x[i];
            int neighbour_y = element.second + delta_y[i];

            if (arr[neighbour_x][neighbour_y] == value && visited[neighbour_x][neighbour_y] == 0)
            {
                Q.push({neighbour_x, neighbour_y});
                arr[neighbour_x][neighbour_y] = c;
                visited[neighbour_x][neighbour_y] = 1;
            }
        }
    }
}

        // EARLIER NON_ELEGANT APPROACH
        // // up
        // neighbour_x = (element.first - 1);
        // neighbour_y = element.second;

        // if (arr[neighbour_x][neighbour_y] == value && visited[neighbour_x][neighbour_y] == 0)
        // {
        //     Q.push({neighbour_x, neighbour_y});
        //     arr[neighbour_x][neighbour_y] = c;
        //     visited[neighbour_x][neighbour_y] = 1;
        // }

        // // down
        // neighbour_x = (element.first + 1);
        // neighbour_y = element.second;

        // if (arr[neighbour_x][neighbour_y] == value && visited[neighbour_x][neighbour_y] == 0)
        // {
        //     Q.push({neighbour_x, neighbour_y});
        //     arr[neighbour_x][neighbour_y] = c;
        //     visited[neighbour_x][neighbour_y] = 1;
        // }

        // //left
        // neighbour_x = element.first;
        // neighbour_y = (element.second - 1);

        // if (arr[neighbour_x][neighbour_y] == value && visited[neighbour_x][neighbour_y] == 0)
        // {
        //     Q.push({neighbour_x, neighbour_y});
        //     arr[neighbour_x][neighbour_y] = c;
        //     visited[neighbour_x][neighbour_y] = 1;
        // }

        // //right
        // neighbour_x = element.first;
        // neighbour_y = (element.second + 1);

        // if (arr[neighbour_x][neighbour_y] == value && visited[neighbour_x][neighbour_y] == 0)
        // {
        //     Q.push({neighbour_x, neighbour_y});
        //     arr[neighbour_x][neighbour_y] = c;
        //     visited[neighbour_x][neighbour_y] = 1;
        // }

int main()
{
    int arr[4][4];
    int x, y, c;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];

    cin >> x >> y >> c;
    solve(arr, x, y, c);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }

        return 0;
}