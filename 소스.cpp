#include<iostream>
using namespace std;

class SoSimple
{
	int num;
public:
	SoSimple(int n):num(n){}
	SoSimple& AddNum(int n) { num += n; return*this; }
	void ShowData()const { cout << "num: " << num << endl; }
};

int main()
{
	const SoSimple obj(7);
	//obj.AddNum(20); //const 객체에는 const 함수를 호출해야 한다.
	obj.ShowData();
	return 0;
}