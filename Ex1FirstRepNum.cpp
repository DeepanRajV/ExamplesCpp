#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 10;
    int a[n];
    time_t t;

    srand(time(&t));

    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % n + 1;
        cout << a[i] << ' ';
    }
    cout << ']' << endl;

    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]) - 1;
        if (a[index] < 0)
        {
            cout << "First repeated number : " << abs(a[i]) << endl;
            return 0;
        }
        else
        {
            a[index] = -a[index];
        }
    }

    cout << "No repeated numbers" << endl;

    return 0;
}
