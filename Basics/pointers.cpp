#include <iostream>
using namespace std;

/**
 * This program demonstrates the use of pointers in C++.
 * It declares an integer variable 'a', initializes it to 10,
 * and then declares a pointer variable 'ptr' that points to the address of 'a'.
 * It then prints the value of 'a', the address of 'a', and the value pointed to by 'ptr'.
 */

int main()
{
    int a =10;
    int *ptr=&a;
    cout<<a<<" "<<ptr<<" "<<*ptr<<endl;
    return 0;
}