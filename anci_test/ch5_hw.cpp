#include <iostream>
using namespace std;
class Vector
{
public:
	int x, y, z;
	void set_vector()
	{
		cout << "\nEnter the scaler values of vector quentity\nIn x direction :";
		cin >> x;
		cout << "\nIn y direction :";
		cin >> y;
		cout << "\nIn z direction :";
		cin >> z;
	}
	void modify()
	{
		int i;
		display();
		cin >> i;
		if (i == 1)
		{
			cout << "\nEnter new x :";
			cin >> x;
		}
		else if (i == 2)
		{
			cout << "\nEnter new y :";
			cin >> y;
		}
		else if (i == 3)
		{
			cout << "\nEnter new z :";
			cin >> z;
		}
		display();
	}
	void multiply()
	{
		int scalar;
		cout << "\nEnter scalar quantity to multiply by :";
		cin >> scalar;
		x = x * scalar;
		y = y * scalar;
		z = z * scalar;
		display();
	}
	void display()
	{
		cout << "\nEntered vector is :" << x << "i + " << y << "j + " << z << "k";
	}

};
void main()
{
	Vector vt;
	vt.set_vector();
	vt.modify();
	vt.multiply();

}