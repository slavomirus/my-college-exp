#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
	int taba[100];
	int tabb[100];
	int tabc[200];
	int tabd[200];
	int *t, *b, *c;
	t = taba;
	b = tabb;
	
	
	int n;
	
	cout<<"n= ";
	cin>>n;
	
	for (int i = 0; i < n; i++)
	{
		cout<<"taba["<<i<<"]= ";
		cin>> *t++;
		cout<<"tabb["<<i<<"]= ";
		cin>> *b++;
	}
	int x = 0;
	cout<<"jakie dzialanie wykonac?"<<endl;
	cout<<"1 - dodawanie"<<endl;
	cout<<"2 - mnozenie"<<endl;
	cout<<"3 - mix tablic"<<endl;
	cin>>x;
	switch (x)
	{
	case 1:
	{
		cout<<endl;
		t = taba;
		b = tabb;
		for (int i = 0; i < n; i++)
		{
			*t += *b;
			*b++;
			tabc[i] = *t;
			cout<< *t++ <<", ";

		}
		break;
		cout<<endl;
	}

	case 2:
		{
		t = taba;
		b = tabb;
		for (int i = 0; i < n; i++)
		{
			*t = *t * *b;
			*b++;
			tabc[i] += *t;
			cout<<"iloczyn: "<< (*t++) <<", ";

		}
		break;
		}

	case 3:
		{
			t = taba;
			b = tabb;
			c = tabd;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (taba[i] >= tabb[j])
					{
						*c = *b;
						tabd[j] += *c;
						*b++;
						
					}
					else
					{
						*c = *t;
						tabd[j] += *c;
						*t++;
						
					}
				}
				
			}
			for (int i = 0; i < n*2; i++)
				cout<<tabd[i]<<", ";
			break;
		}
	default:
		cout<<"nie ma takiej opcji"<<endl;
		break;
	}
	
	
	system("pause");
	return 0;
}