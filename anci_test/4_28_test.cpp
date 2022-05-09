#include<iostream>
using namespace std;
int &medium(int& a, int& b, int& c);
float &medium(float& a, float& b, float& c);

int main()
{
    int inum1, inum2, inum3;
    float fnum1, fnum2, fnum3;
    cout << "Enter three different integer numbers : ";
    cin >> inum1 >> inum2 >> inum3;
    medium(inum1, inum2, inum3) = 0;
    cout << "Enter three different float numbers : ";
    cin >> fnum1 >> fnum2 >> fnum3;
    medium(fnum1, fnum2, fnum3) = 0.0;
    return 0;
}
int & medium(int &a, int &b, int &c) {
    if (a > b) {
        if (b > c)
            return b;
        else if (a > c)
            return c;
        else
            return a;
    }
    else
        if (a > c)
            return b;
        else if (b > c)
            return c;
        else
            return a;
}
float & medium(float &a, float &b, float &c) {
    if (a > b) {
        if (b > c)
            return b;
        else if (a > c)
            return c;
        else
            return a;
    }
    else
        if (a > c)
            return b;
        else if (b > c)
            return c;
        else
            return a;
}