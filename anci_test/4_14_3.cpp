#include <iostream>
using namespace std;

int main() {
	const int size = 4;		//const������ �ʱ�ȭ�� ������ ���ÿ�������Ѵ�.

	//int size = 4;	�迭�� ������ ���� ����� ����, �� �ڵ�� ������ �߻���Ų��

	//const int size = 100;
	//size = 200; ���ȭ�� ������ ���� �ٲٷ��ϹǷ� �����߻�

	int arr[size] = { 0 };
	for (int i = 0; i < size; i++)
		cout << arr[i] << endl;
}