/*
Arthimatic opertors :
1. Binary -> +, -, *, /, %.
2. Unary  -> Increment(++) & Decrement(--).
*/

#include <iostream>
using namespace std;

main()
{
    int b, a = 10;
    int d, c = 10;

    b = ++a; // Pre-Increment (Increments the value of [a] first then assign it).
    d = c++; // Post-Increment (First assign the value to [d] first; then, Increments the value of [c]).

    cout << "The Value of a is : " << a << endl
         << endl;
    cout << "The Value of b is : " << b << endl
         << endl;
    cout << "The Value of c is : " << c << endl
         << endl;
    cout << "The Value of d is : " << d << endl
         << endl; // Here, we can notice that due to post increment the value doesn't increase.

    int i = 10;
    cout << "The Value of [i] is : " << i << endl
         << endl;
    i = i++ + ++i;
    cout << "The Value of [i++ + ++i] is : " << i << endl
         << endl;

    int j = 10;
    cout << "The Value of [j] is : " << j << endl
         << endl;
    j = j+++i; // It simply means [j++ + i].
               // If you format the document then [j+++i] formatted to [j++ + i].
    cout << "The Value of [j+++i] is : " << j << endl;
    return 0;
}
