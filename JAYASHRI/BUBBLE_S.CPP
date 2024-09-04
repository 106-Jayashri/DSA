#include<iostream.h>
#include<conio.h>

class demo
{
	int a[10],i,k,n,temp;
	public:
	void get();
	void display();
	void sort();
};
void demo::get()
{
	cout<<"\nEnter Array Size:\n";
	cin>>n;
	cout<<"\nEnter Array Elements:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
}


void demo::display()
{
	cout<<"\nArray Elements Are:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
void demo::sort()
{
	cout<<"\nBUBBLE SORT...........GIVES......\n";
	for(k=1;k<=n-1;k++)
	{
		for(i=0;i<=n-k;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}

}
void main()
{
	demo d;
	clrscr();
	d.get();
	cout<<"\nBefore Sorting:\n";
	d.display();
	d.sort();
	cout<<"\nAfter Sorting:\n";
	d.display();
	getch();
}

