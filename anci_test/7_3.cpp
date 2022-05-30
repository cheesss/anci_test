#include<iostream>
using namespace std;

class MAT{
    int a[2][2];
public:
    void accept()
    {
        cout << "4개 요소를 입력하시오 : ";
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];}
    }
    void display()
    {
        for (int i = 0; i < 2; i++){
            cout << endl;
            for (int j = 0; j < 2; j++)
                cout << "  " << a[i][j];}
    }
    MAT operator+(MAT M2)
    {
        MAT M3;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                M3.a[i][j] = a[i][j] + M2.a[i][j];}
        }
        return M3;
    }
    MAT operator*(MAT M2)
    {
        MAT M3;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                M3.a[i][j] = 0;
                for (int k = 0; k < 2; k++){
                    M3.a[i][j] = (a[i][k] * M2.a[k][j]) + M3.a[i][j];}
            }
        }
        return M3;
    }
};
int main()
{
    MAT M1, M2, M3;

    cout << "M1값 ";
    M1.accept();

    cout << "M2값 ";
    M2.accept();

    M3 = M1 + M2;
    cout << "M1+M2 : ";
    M3.display();

    M3 = M1 * M2;
    cout << "M1*M2 : ";
    M3.display();

    return 0;
}