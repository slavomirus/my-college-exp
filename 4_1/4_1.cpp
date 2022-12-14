#include <stdio.h>
#include <iostream>


using namespace std;

int main()
{
	int t,l;
	cout<<"ile tablic zrobic?"<<endl;
	cin>>t;
	l = t;
	int tab[10];
	while (t--)
	{
		for (int i = 0; i < 10; i++)
			{
				cin>>tab[i];
			}	
	int j = 9;
	do{
		swap(tab[j], tab[9-j]);
		j--;
	}while(j!=4);

	for (int i = 0; i < 10; i++)
	{
	cout<<tab[i];
	}
	cout<<endl;
	}
	
	/*cout<<sizeof(tab);
	*/
	
	system("pause");
	return 0;
}
