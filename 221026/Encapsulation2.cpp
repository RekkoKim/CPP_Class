#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Point
{
	int x;   // ������ x ����
	int y;   // ������ y ����
public:
	int GetX(){	return x; } // ������ �Լ� GetX ���� �� ����
	int GetY(){	return y; } // ������ �Լ� GetY ���� �� ����

	void SetX(int _x); // �Լ� SetX ����
	void SetY(int _y); // �Լ� SetY ����

	void ShowData(); // �Լ� ShowData ����
};

void Point::SetX(int _x) // �Լ� ����
{
	if(_x<0 || _x>100) { // ���࿡ _x<0�̰ų� _x>100 �̸�
		cout<<"X��ǥ �Է� ����, Ȯ�� ���"<<endl;
		return;
	}
	x=_x; // x�� _x�� ����
}
void Point::SetY(int _y) // �Լ� ����
{
	if(_y<0 || _y>100) // ���࿡ _x<0�̰ų� _x>100 �̸�
	{
		cout<<"Y��ǥ �Է� ����, Ȯ�� ���"<<endl;
		return;
	}
	y=_y; // y�� _y�� ����
}

void Point::ShowData() // �Լ� ����
{
	cout<<"x��ǥ: "<<x<<endl;
	cout<<"y��ǥ: "<<y<<endl;
}

int main()
{
	int x, y; // ������ ���� ����
	cout<<"��ǥ�Է� : ";
	cin>>x>>y;

	Point p; // Point �Լ� p�� ����
	p.SetX(x); // p.SetX �Ű����� x������ ����
	p.SetY(y); // p.SetY �Ű����� y������ ����
	p.ShowData(); // p.ShowData ����

	return 0;
}
