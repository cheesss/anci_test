#include <iostream>

//using std::cout;	//�� �Ʒ����ʹ� cout�� ����Ҷ� name_space�� �������� �ʾƵ� �ȴ�
//using std::cin;
using namespace std;	//��ɾ �ϳ��� using���� �������� �ʾƵ� �ȴ�

//C++���ʹ� ��ȯ�� void ������, �Ƚ����ִٸ� int�� �Ҵ�
int main() {
	int id;
	char name[20];

	cout << "�й��� �Է��Ͻÿ�:";
	cin >> id;
	cout << "�̸��� �Է��Ͻÿ�:";
	cin >> name;


	//name space ����
	cout << "info of me\n";
	cout << "ID:" << id << std::endl;
	cout << "Name:" << name << std::endl;
	//stdendl = \n

	return 0;		//�����ص� ��������
}