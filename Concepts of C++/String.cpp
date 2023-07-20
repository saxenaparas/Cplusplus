#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Paras";
    // So, here we have declared a [name] variable to a string data_type.
    cout << "His name is " << name << endl;
    
    // Now, using string functions for which we have used [<string>] library.
    cout << "The Name is " << name << endl;

    // Here, the [name.length] returns the length of the string.
    cout << "The Length of Name is " << name.length() << endl;

    /* 
    Here, the [name.substr(initial , final)] it returns the sub-string / part 
    of the string in the range given in the brackets from (initial) to (final).
    */
    cout << "The Sub-String (0.,3) of Name is " << name.substr(0.,3) << endl;
    cout << "The Sub-String (2,4) of Name is " << name.substr(2,4) << endl;
    cout << "The Sub-String (3,4) of Name is " << name.substr(3,4) << endl;
    cout << "The Sub-String (2,567) of Name is " << name.substr(2,567) << endl;

    /* 
    These lines below will give an error showing terminate [std::out_of_range] due
    to (567) is greater than the range of the string.
    */
    cout << "The Sub-String (567.) of Name is " << name.substr(567.) << endl;
    cout << "The Sub-String (567) of Name is " << name.substr(567) << endl;
    cout << "The Sub-String (567,3) of Name is " << name.substr(567,3) << endl;
    return 0;
}
