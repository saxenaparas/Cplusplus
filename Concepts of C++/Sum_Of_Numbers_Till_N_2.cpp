// Sum of the whole/natural numbers till [n] :

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "Enter the No. : ";
    cin >> n;

    for (sum = 0; n > 0; n--)
    {
        sum += n;
    }

    cout << "Sum of the numbers is : " << sum;

    return 0;
}