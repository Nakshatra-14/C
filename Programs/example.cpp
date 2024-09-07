//write a program in c++ to take 2 number  as input and add them using function
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int a, b, sum;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    sum = add(a, b);
    cout << "The sum is " << sum << endl;
    return 0;
}
