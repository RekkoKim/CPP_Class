/*
   InfoHiding2.cpp
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Point
{
	int x;   // x��ǥ�� ���� : 0 ~ 100
	int y;   // y��ǥ�� ���� : 0 ~ 100
public:
	int GetX(){	return x; } // ���� "x"���� �ҷ��ü� �ִ� �Լ� "GetX" ����
	int GetY(){	return y; } // ���� "y"���� �ҷ��ü� �ִ� �Լ� "GetY" ����

	void SetX(int _x){ x=_x; } // ���� "x"���� �ٸ� ���� �����Ҽ� �ִ� �Լ� "SetX" ����
	void SetY(int _y){ y=_y; } // ���� "y"���� �ٸ� ���� �����Ҽ� �ִ� �Լ� "SetY" ����
};

int main()
{
	int x, y; // ������ ���� x, y ����
	cout<<"��ǥ�Է� : "; // "��ǥ�Է� : "�� ���
	cin>>x>>y; // ���� �Է¹޾� ���� x, y�� ����

	Point p; // Point Ŭ������ p�� ����
	p.SetX(x); // "SetX" �Լ��� ����ؼ� Point Ŭ������ �������� "x"���� ���ο� �ִ� "x"�� ���� ����
	p.SetY(y); // "SetY" �Լ��� ����ؼ� Point Ŭ������ �������� "y"���� ���ο� �ִ� "y"�� ���� ����

	cout<<"�Է� �� �����͸� �̿��ؼ� �׸��� �׸�"<<endl; // "�Է� �� �����͸� �̿��ؼ� �׸��� �׸�"�� ���
	return 0;
}
