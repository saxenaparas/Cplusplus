#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. : " << endl;
    cin >> n;

    /*
    Entry control loop :
    goes only when condition fulfills.
    */
    while (n < 25)
    {
        cout << "While Output : " << n << endl;
        n++;
    }

    /*
    Exit control loop :
    goes at least once even condition
    is false.
    */
    do
    {
        cout << "Do-While Output : " << n << endl;
        n++;
    } while (n < 25);
    return 0;
}