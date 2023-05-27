//Inheritence structure is neccessary in fuction overriding
#include<iostream>
using namespace std;
class friends{
	public:
		void myfriends()
		{
			cout<<"Not more..";
		}
};
class only_one: public friends{
	public:
		void myfrndlist()
		{
			cout<<"for bring time\n";
		}
};
int main()
{
	//friends frnd;  //to access the first method.
	only_one frnd;
	frnd.myfrndlist();
	frnd.friends::myfriends();
}
/*
for bring time
Not more..
*/