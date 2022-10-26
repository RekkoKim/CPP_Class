#include<iostream>
using std::cout;
using std::endl;

const int SIZE=20; // 상수형 변수 SIZE 선언, 값 대입

class AAA // 클래스 AAA 선언 
{
	int i, j; // 정수형 변수 i, j 선언
public:
	AAA() // 생성자 호출
	{ 
		cout<<"생성자 호출"<<endl;
		i=10, j=20; // 변수에 수정의
	}
	void ShowData() // 함수 정의
	{
		cout<<i<<' '<<j<<endl;
	}
};

int main()
{
	AAA aaa; // 클래스 AAA 선언
	aaa.ShowData(); // aaa에 ShowData 선언

	return 0;
}
