#include <stdio.h>
#include <iostream>


using namespace std;

int main()
{
	
	int pz,wiersz,kolumna,w,k,h,l;
	cin>>pz;
	while (pz--)
	{
		cout<<"podaj wielkoœæ kratek i ramki kolejno: iloœæ wierszy i kolumn i w ramce, wielkoœæ kratki wys, dl"<<endl;
		cin>>wiersz>>kolumna>>h>>l;
		h++;l++;
		w = wiersz * h + 1;
		k = kolumna * l + 1;
		for (int i = 0; i < w; i++)
		{
			for (int j = 0; j < k; j++)
				if ((i%h==0)||(j%l==0)) cout<<"*";
				else
				{
					cout<<".";
				}cout<<endl;
		}
	}
	
	system("pause");
	return 0;
}
