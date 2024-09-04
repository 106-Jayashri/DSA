#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],i,k,temp,n,min;
	public:
	void get();
	void display();
	void sort();
};
void demo::get()
{
	cout<<"\nEnter Size Of Array:";
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
	for(k=0;k<=n-1;k++)
	{
		min=k;
		for(i=k+1;i<=n-1;i++)
		{
		if(a[i]<a[min])
		min=i;
		temp=a[k];
		a[k]=a[min];
		a[min]=temp ;
		}
	}
}
void main()
{
	demo d;
	clrscr();
	d.get();
	cout<<"\nBefore Sorting......\n";
	d.display();
	d.sort();
	cout<<"\nAfter Sorting......\n";
	d.display();
	getch();
}

