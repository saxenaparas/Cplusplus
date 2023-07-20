/*
Checking a Pyhagorian Triplet Using a Function :
================================================
Logic is simple just find the maximum out of three which
should be hypotaneous and then sum of squares of rest if
equal to the hypotaneous square then it's a triplet.
*/

#include <iostream>
using namespace std;

int max(int l, int m)
{
    if (l > m)
        return l;
    else
        return m;
}

bool pythchk(int a, int b, int c)
{
    int H, P, B;
    H = max(a, max(b, c));

    if (H == a)
    {
        P = b;
        B = c;
    }
    else if (H == b)
    {
        P = a;
        B = c;
    }
    else
    {
        P = a;
        B = b;
    }

    if ((H * H) == ((P * P) + (B * B)))
        return true;
    else
        return false;
}

int main()
{
    int x, y, z, h, p, b;
    cout << "Enter The Triplet : " << endl;
    cin >> x >> y >> z;

    if (pythchk(x, y, z))
        cout << "It's A Pythagorean Triplet";
    else
        cout << "It's Not A Pythagorean Triplet";
    return 0;
}