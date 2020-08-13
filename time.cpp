#include<iostream>
using namespace std;
class time{
	private:
		int hours,minutes,seconds,total;
	public:
		input();
};
time::input()
{
	int hours,minutes,seconds,total;
	cout<<"Hours? ";
	cin>>hours;
	cout<<"Minutes? ";
	cin>>minutes;
	cout<<"Seconds? ";
	cin>>seconds;
	cout<<"the time is: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
	hours=hours*60*60;
	minutes=minutes*60;
	total=hours+minutes+seconds;
	cout<<"The total number of seconds is: "<<total;
}
int main()
{
	time t;
	t.input();
	return 0;
}
