#include <iostream>

//C++���ʹ� ��ȯ�� void ������, �Ƚ����ִٸ� int�� �Ҵ�
int main() {
	int id;
	char name[20];

	std::cout << "�й��� �Է��Ͻÿ�:";
	std::cin >> id;

	//name space ����
	std::cout << "info of me\n";
	std::cout << "ID:" << id << std::endl;
	std::cout << "Name:" << name << std::endl;
	//stdendl = \n

	return 0;		//�����ص� ��������
}