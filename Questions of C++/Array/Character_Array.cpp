/*
-------------------------------- Character Array : ------------------------------------
=======================================================================================
>> Declaration: char arr[n+1] here, +1 is for null character ['\0'] which represents 
   the ending of the array and comes at the end part of the array.
>> Input : We can take input in character array using two ways either loops or directly 
   using cin.
>> Output : Same way we can output using either loops or directly using cout.
=======================================================================================
*/

#include <iostream>
using namespace std;
 
int main()
{
    //Declaration :
    int n;
    cout << "Input Character Array Size : ";
    cin >> n;
    char arr[n+1];

    //Input (Directly):
    cout << "Input the character value :" << endl;
    cin >> arr;

    //Output (Using Loops):
    // 1. Using For Loop :
    cout << "The Output using [for] Loop : ";
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    // 2. Using While Loop :
    cout << "The Output using [while] Loop : ";
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i];
        i++;
    }
    cout << endl;
    
    //Output (Directly):
    cout << "Direct Output : ";
    cout << arr << endl;
    cout << "Output of a perticular index like [3] : ";
    cout << arr[3];
    return 0;
}