#include<iostream>
using std::cout;
using std::endl;
using std::cin;

const int SIZE=20; // ����� ���� SIZE ����, �� ����

class Person
{
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	void ShowData();
};

void Person::ShowData() // �Լ� ����
{
	cout<<"name: "<<name<<endl;
	cout<<"phone: "<<phone<<endl;
	cout<<"age: "<<age<<endl;
}


int main()
{
	Person p={"KIM", "013-113-1113", 22}; // �̰� ���� �����̺��̶� ��������
	p.ShowData();

	return 0;
}
