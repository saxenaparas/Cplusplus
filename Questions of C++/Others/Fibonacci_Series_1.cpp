/*
Fibonacci Series By using a while loop in a function:
=======================================================
In this the next term is the sum of previous two terms.
i.e. in a, b, c, d;
c = a + b; & llly, d = b + c;
=======================================================
*/

#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int n1 = 0,n2 = 1,fibonacci = 0;
    while (fibonacci < n)
    {
        cout << n1 << "  ";
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;
    }
    return;
}
int main()
{
    int num;
    cout << "Enter The Number : ";
    cin >> num;

    fibonacci(num);
    return 0;
}