#include <iostream>
using namespace std;

int main()
{
    int a = 345;
    float b = 37.89;
    cout << (float)a / 37 << endl;
    // Here, as we can see I have typecasted [a] an integer to float value.
    cout << (int)b << endl;
    /* 
    Here, as we can see I have typecasted [b] a float data_type to an integer 
    (it don't do the roundoff it just take the integer part from the float 
    value and become an integer).
    */
    return 0;
}