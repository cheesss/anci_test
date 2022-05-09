#include <iostream>
using namespace std;

class item {
	int number;
	static int count;		//���� �������

public:
	void setdata(int a) {
		number = a;
		count++;
	}
	int getdata() {
		return number;
	}
	void printdata() {
		cout << "�ѹ� ��:" << number << endl;
		cout << "ī��Ʈ ��:" << count << endl;
	}

	static void setcount(int a) {
		count = a;
	}

	static void printcount() {	//Ŭ�������� ��ü ���̵� ȣ�Ⱑ���� �Լ�
		cout << "ī��Ʈ:" << count << endl;
		//cout << "�ѹ�:" << number << endl;		//������ ��� ������ �ݵ�� ��ü�� ���� ȣ���ؾ��ϹǷ� �����߻�!
	}	//static �Լ��� static var�� ����ؾ��Ѵ�
};

int item::count;		//�ڵ����� 0���� �ʱ�ȭ

int main() {
	item a, b, c;
	a.setdata(100);
	b.setdata(200);
	c.setdata(300);

	a.printdata();
	b.printdata();
	c.printdata();	//0���� �ʱ�ȭ�� count�� �������� ����-> 3�� ���� count==3 


	item::setcount(100);
	item::printcount();	//���� ��� �Լ��� ��ó�� ��ü���� Ŭ�������� �ҷ��ͼ� ��밡���ϴ�.

	return 0;
}