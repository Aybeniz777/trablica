#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

 int main() {
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
		
	cout<<j<<"*"<<i<<"="<<j * i<<"\t";
	cout<<endl;
}
	}
	return 0;
}
