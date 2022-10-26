#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class Point
{
	int x;   // 정수형 x 선언
	int y;   // 정수형 y 선언
public:
	int GetX(){	return x; } // 정수형 함수 GetX 선언 밑 정의
	int GetY(){	return y; } // 정수형 함수 GetY 선언 밑 정의

	void SetX(int _x); // 함수 SetX 선언
	void SetY(int _y); // 함수 SetY 선언

	void ShowData(); // 함수 ShowData 선언
};

void Point::SetX(int _x) // 함수 정의
{
	if(_x<0 || _x>100) { // 만약에 _x<0이거나 _x>100 이면
		cout<<"X좌표 입력 오류, 확인 요망"<<endl;
		return;
	}
	x=_x; // x에 _x를 대입
}
void Point::SetY(int _y) // 함수 정의
{
	if(_y<0 || _y>100) // 만약에 _x<0이거나 _x>100 이면
	{
		cout<<"Y좌표 입력 오류, 확인 요망"<<endl;
		return;
	}
	y=_y; // y에 _y를 대입
}

void Point::ShowData() // 함수 정의
{
	cout<<"x좌표: "<<x<<endl;
	cout<<"y좌표: "<<y<<endl;
}

int main()
{
	int x, y; // 정수형 변수 언전
	cout<<"좌표입력 : ";
	cin>>x>>y;

	Point p; // Point 함수 p로 선언
	p.SetX(x); // p.SetX 매개변수 x대입후 선언
	p.SetY(y); // p.SetY 매개변수 y대입후 선언
	p.ShowData(); // p.ShowData 선언

	return 0;
}
