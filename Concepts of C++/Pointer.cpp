/*
====================================================================
Check [POINTERS.c] a c language file for more understanding of this.
--------------------------------------------------------------------
 >> [&] : Reference Operator returns the address of the variable;
 >> [*] : De-Reference Operator points to a variable;
====================================================================
*/
#include <iostream>
using namespace std;

int main()
{
     cout << "======================================================================" << endl;

     int a = 34;
     double b = 7896.6987;

     int *ptr_a;
     ptr_a = &a;

     double *ptr_b = &b;
     /*
     [&] is called as Reference Operator.
     [*] is called as Dereference Operator.
     */
     cout << "The address of [a] is : " << ptr_a << endl;
     cout << "The address of [a] is : " << &a << endl
          << endl;

     cout << "The address of [b] is : " << ptr_b << endl;
     cout << "The address of [b] is : " << &b << endl
          << endl;

     cout << "The value of [a] is : " << *ptr_a << endl;
     cout << "The value of [a] is : " << a << endl
          << endl;

     cout << "The value of [b] is : " << *ptr_b << endl;
     cout << "The value of [b] is : " << b << endl
          << endl;

     // Pointers Arithmatic :
     cout << "[(pointer_a)++ = (ptr_a)++ = (Address of a)++] = " << ptr_a++ << endl;
     cout << "[(pointer_a) + 2 = (ptr_a) + 2 = (Address of a) + 2] = " << ptr_a + 2 << endl
          << endl;

     cout << "[(pointer_b)++ = (ptr_b)++ = (Address of b)++] = " << ptr_b++ << endl;
     cout << "[(pointer_b) + 2 = (ptr_b) + 2 = (Address of b) + 2] = " << ptr_b + 2 << endl
          << endl;
     /*
     Here, ptr_a++ results in [ptr_a + 1] = [ptr_a + 1*(size of data_type)].
     Similarly, [ptr_a + 2] = [ptr_a + 2*(size of data_type)].
     In this case size of [int] data_type is 4 bytes.
     */
     cout << "Size Of : " << endl
          << "---------------" << endl
          << "[char]   = " << sizeof(char) << endl
          << "[int]    = " << sizeof(int) << endl
          << "[float]  = " << sizeof(float) << endl
          << "[long]   = " << sizeof(long) << endl
          << "[double] = " << sizeof(double) << endl;

     cout << "======================================================================" << endl;
     return 0;
}
