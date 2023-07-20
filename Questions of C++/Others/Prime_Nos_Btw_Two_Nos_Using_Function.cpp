/*
Getting Prime No.s Between Two No.s Using a function :
==================================================================================
>> Appling a loop with a function isPrime() which chks the numbers b/w [n] and [m] 
   weather they are prime or not and if condition is true then we print them. 
==================================================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cout << "Enter The 1st No. : ";
    cin >> n;
    cout << "Enter The 2nd No. : ";
    cin >> m;

    for (int i = n; i <= m; i++)
    {
        if (isPrime(i)) // Here, if chks like this : if(isPrime(i) == true).
            cout << i << endl;
    }
    return 0;
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// Prime(int n)
// {
//     bool flag = true;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//             flag = false;
//             break;
//         }
//     }

//     if (flag)
//     {
//         return true;
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     for (int i = a; i <= b; i++)
//     {
//         if (Prime(i) == true)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }