#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int k;
	cin>>k;
	char ch[100001];
	cin>>ch;
	int finalaMax=0;
	for(int i=0;i<strlen(ch);i++)
	{
		int j=i;
		int x=k;
		int aMax=0;
		while(x>=0  && ch[j]!='\0')
		{
			if(ch[j]=='a')
			{
				aMax++;
			}
			else
			{
            		x--;
				aMax++;
			}
			j++;
		}
		if(aMax>finalaMax)
			finalaMax=aMax;
	}
	int finalbMax=0;
	for(int i=0;i<strlen(ch);i++)
	{
		int j=i;
		int x=k;
		int bMax=0;
		while(x>=0 && ch[j]!='\0')
		{
			if(ch[j]=='b')
			{
				bMax++;
			}
            	else
			{
				x--;
				bMax++;
			}
			j++;
		}
		if(bMax>finalbMax)
			finalbMax=bMax;
	}
	cout<<max(finalaMax,finalbMax)<<endl;

	return 0;

}
