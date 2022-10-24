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
	int x;   // x좌표의 범위 : 0 ~ 100
	int y;   // y좌표의 범위 : 0 ~ 100
};

int main()
{
	int x, y; // 정수형 변수 x, y 선언
	cout<<"좌표입력 : "; // "좌표입력 : "를 출력
	cin>>x>>y; // 값을 입력받아 변수 x, y에 대입

	Point p; // Point 클래스인 p를 선언
	p.x=x; // p.x에 x를 대입
	p.y=y; // p.y에 y를 대입

	cout<<"입력 된 데이터를 이용해서 그림을 그림"<<endl;
	return 0;
}
