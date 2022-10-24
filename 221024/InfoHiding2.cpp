/*
   InfoHiding2.cpp
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Point
{
	int x;   // x좌표의 범위 : 0 ~ 100
	int y;   // y좌표의 점위 : 0 ~ 100
public:
	int GetX(){	return x; } // 변수 "x"값을 불러올수 있는 함수 "GetX" 선언
	int GetY(){	return y; } // 변수 "y"값을 불러올수 있는 함수 "GetY" 선언

	void SetX(int _x){ x=_x; } // 변수 "x"값에 다른 값을 대입할수 있는 함수 "SetX" 선언
	void SetY(int _y){ y=_y; } // 변수 "y"값에 다른 값을 대입할수 있는 함수 "SetY" 선언
};

int main()
{
	int x, y; // 정수형 변수 x, y 선언
	cout<<"좌표입력 : "; // "좌표입력 : "를 출력
	cin>>x>>y; // 값을 입력받아 변수 x, y에 대입

	Point p; // Point 클래스인 p를 선언
	p.SetX(x); // "SetX" 함수를 사용해서 Point 클래스에 지역변수 "x"값에 메인에 있는 "x"에 값을 대입
	p.SetY(y); // "SetY" 함수를 사용해서 Point 클래스에 지역변수 "y"값에 메인에 있는 "y"에 값을 대입

	cout<<"입력 된 데이터를 이용해서 그림을 그림"<<endl; // "입력 된 데이터를 이용해서 그림을 그림"를 출력
	return 0;
}
