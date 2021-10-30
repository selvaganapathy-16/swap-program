//Call By Value

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"After Swapping In Swap Function"<<endl;
	cout<<a<<" "<<b<<endl;
}
int main()
{
	int a,b;
	a=100;
	b=200;
	cout<<"Before Swapping"<<endl;
	cout<<a<<" "<<b<<endl;
	swap(a,b); //call by value
	cout<<"After Swapping In Main Fuction"<<endl;
	cout<<a<<" "<<b; //Here We won't see any changes
	return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-------	-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Call by Address
	
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	cout<<"After Swapping In Swap Function"<<endl;
	cout<<*a<<" "<<*b<<endl;
}
int main()
{
	int a,b;
	a=100;
	b=200;
	cout<<"Before Swapping"<<endl;
	cout<<a<<" "<<b<<endl;
	swap(&a,&b); //call by address
	cout<<"After Swapping In Main Fuction"<<endl;
	cout<<a<<" "<<b; //Here We can see the Changes
	return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
--------	-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Call by Reference
	
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"After Swapping In Swap Function"<<endl;
	cout<<a<<" "<<b<<endl;
}
int main()
{
	int a,b;
	a=100;
	b=200;
	cout<<"Before Swapping"<<endl;
	cout<<a<<" "<<b<<endl;
	swap(a,b); //call by Reference
	cout<<"After Swapping In Main Fuction"<<endl;
	cout<<a<<" "<<b; //Here We can see the changes
	return 0;
}


