#include<iostream>
using std::cout;
using std::endl;

const int SIZE=20; // ����� ���� SIZE ����, �� ����

class AAA // Ŭ���� AAA ���� 
{
	int i, j; // ������ ���� i, j ����
public:
	AAA() // ������ ȣ��
	{ 
		cout<<"������ ȣ��"<<endl;
		i=10, j=20; // ������ ������
	}
	void ShowData() // �Լ� ����
	{
		cout<<i<<' '<<j<<endl;
	}
};

int main()
{
	AAA aaa; // Ŭ���� AAA ����
	aaa.ShowData(); // aaa�� ShowData ����

	return 0;
}
