#include <bits/stdc++.h>
using namespace std;
int power(int k, int l)
{
    if (k == 0)
    {
        return 1;
    }

    return l * power(k - 1, l);
}

int main()
{
    int n, n1, n2, num = 0;
    cin >> n;
    n2 = n1 = n;
    int k = 0, l;

    for (int i = n; n > 0; i++)
    {
        n = n / 10;
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        l = n1 % 10;
        num = num + power(k, l);
        n1 = n1 / 10;
    }

    if (num == n2)
    {
        cout << "Entered number is a armstrong number" << endl;
    }
    else
    {
        cout << "Entered number is not a armstrong number" << endl;
    }
    return 0;
}
