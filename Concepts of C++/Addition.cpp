#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the First No. :\n";
    cin >> a;
    cout << "Enter the Second No. :\n";
    cin >> b;

    cout << "The a + b is : " << a + b<<endl;
    cout << "The a - b is : " << a - b<<endl;
    cout << "The a * b is : " << a * b<<endl;
    
    // Here, we have type-casted the a/b to float to get an decimal output. 
    cout << "The a / b is : " << (float) a / b<<endl;
    return 0;
}