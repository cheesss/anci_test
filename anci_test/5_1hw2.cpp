#include <iostream>
using namespace std;
int& fun(int& x) {
    x++;
    return (x);
}
int main()
{
    int a = 5;
    fun(a) = a;
    cout << a;
    fun(a) = ++a;
    cout << a;
    fun(a) = a++;
    cout << a;
    return 0;
}