/*
   InfoHiding3.cpp
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Point
{
	int x;   // x좌표의 범위 : 0 ~ 100
	int y;   // y좌표의 범위 : 0 ~ 100
public:
	int GetX(){	return x; } // 변수 "x"값을 불러올수 있는 함수 "GetX" 선언
	int GetY(){	return y; } // 변수 "y"값을 불러올수 있는 함수 "GetY" 선언

	void SetX(int _x); // 변수 "x"값에 다른 값을 대입할수 있는 함수 "SetX" 선언
	void SetY(int _y); // 변수 "y"값에 다른 값을 대입할수 있는 함수 "SetY" 선언
};

void Point::SetX(int _x) // 함수 정의
{
	if(_x<0 || _x>100)	// 만약 "_x"가 0보다 작거나 100보다 크다면?
	{
		cout<<"X좌표 입력 오류, 확인 요망"<<endl; // "X좌표 입력 오류, 확인 요망"를 출력
		return;
	}
	x=_x; // " "_x"가 0보다 작거나 100보다 크다면 "이 아니면 클래스 Point의 맴버변수 "x"에 매개변수 _x를 대입
}
void Point::SetY(int _y) // 함수 정의
{
	if(_y<0 || _y>100) // 만약 "_y"가 0보다 작거나 100보다 크다면?
	{
		cout<<"Y좌표 입력 오류, 확인 요망"<<endl; // "Y좌표 입력 오류, 확인 요망"를 출력
		return;
	}
	y=_y; // " "_y"가 0보다 작거나 100보다 크다면 "이 아니면 클래스 Point의 맴버변수 "y"에 매개변수 _y를 대입
}


int main() // 메인 시작
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
