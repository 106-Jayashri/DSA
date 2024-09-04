#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],i,k,n,temp,key;
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
	for(k=1;k<=n-1;k++)
	{
		key=a[k];
		i=k-1;
		while(key<a[i])
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}
void main()
{
	demo d;
	clrscr();
	d.get();
	cout<<"\nBefore Sorting.......";
	d.display();
	d.sort();
	cout<<"\nAfter Sorting........";
	d.display();
	getch();
}
