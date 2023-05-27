#include<iostream>
using namespace std;
class complex{
	private:
		int a ,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"Value of a: "<<a;
			cout<<"Value of b: "<<b;
		}
		complex operator + (complex obj)
		{
			complex temp;
			temp.a=a+obj.a;
			temp.b=b+obj.b;
			return (temp);
		}
};
int main()
{
	complex t1,t2,t3;
	t1.getdata(1,2);
	t2.getdata(2,3);
	//t3=t1+t2;
	//or
	t3=t1.operator + (t2);
	t3.showdata();
}