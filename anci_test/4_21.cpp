#include <iostream>
using namespace std;

void printline();
int fact(int);

int main() {
	int a;
	printline();
	cout << "�����Է�";
	cin >> a;
	cout << "fact(" << a << "):" << fact(a) << endl;
}

void printline() {
	for (int i = 0; i < 10; i++) {
		cout << "-";
	}
	cout << endl;
}

int fact(int n) {
	if (n == 1)
		return 1;
	else{
		return (n * fact(n - 1));
	}
}			//���ȣ�� �Լ��� inline ���� �Ұ�, �����Ϸ����� �Ǵ� �� ����, ������ ������ �ʴ´�.

