#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter 2 numbers to divide : " << endl;
    cin >> a >> b;
    try
    {
        if(b == 0)
        throw (0);
        cout << "Quotient : " << a/b;
    }
    catch(int e)
    {
        cout << "Divison is not possible as the denominator cannot be 0";
    }
    return 0;
}