#include<iostream>
using std::cout;
using std::endl;
using std::cin;

const int SIZE=20; // 상수형 변수 SIZE 선언, 값 대입

class Person
{
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	void ShowData();
};

void Person::ShowData() // 함수 정의
{
	cout<<"name: "<<name<<endl;
	cout<<"phone: "<<phone<<endl;
	cout<<"age: "<<age<<endl;
}


int main()
{
	Person p={"KIM", "013-113-1113", 22}; // 이거 못함 프라이빗이라 못가져옴
	p.ShowData();

	return 0;
}
