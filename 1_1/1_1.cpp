#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	float a, b;
	cin>>a;
	cin>>b;
	
	if (a < 200 && b < 200)
	{
		cout<<a+b<<endl;
	}
	else
	{
		cout<<"daj mniejsze niz 200";
	}
			

	system("pause");
	return 0;
}
