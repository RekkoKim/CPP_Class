/*
   InfoHiding1.cpp
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Point
{
public:
	int x;   // x��ǥ�� ���� : 0 ~ 100
	int y;   // y��ǥ�� ���� : 0 ~ 100
};

int main()
{
	int x, y; // ������ ���� x, y ����
	cout<<"��ǥ�Է� : "; // "��ǥ�Է� : "�� ���
	cin>>x>>y; // ���� �Է¹޾� ���� x, y�� ����

	Point p; // Point Ŭ������ p�� ����
	p.x=x; // p.x�� x�� ����
	p.y=y; // p.y�� y�� ����

	cout<<"�Է� �� �����͸� �̿��ؼ� �׸��� �׸�"<<endl;
	return 0;
}
