#include<iostream.h>
#include<conio.h>
int n;
class demo
{
	int a[10],i,temp;
	public:
	void get();
	void display();
	void heapify(int n,int i);
	void build(int n);
};
void demo :: get()
{
	cout<<"\nEnter Array Elements:";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void demo:: display()
{
	cout<<"\nArray Elements Are:";
	for(i=1;i<=n;i++)
	cout<<"\t"<<a[i];
}
void demo::heapify(int n,int i)
{
	int smallest=i;
	int l=i*2;
	int r=i*2+1;
	if(l<=n && a[l]<a[smallest])
		smallest=l;
	if(r<=n && a[r]<a[smallest])
		smallest=r;
	if(smallest != i)
	{
		temp=a[i];
		a[i]=a[smallest];
		a[smallest]=temp;
		heapify(n,smallest);
	}
}
void demo::build(int n)
{
	for(i=n/2;i>0;i--)
	heapify(n,i);
}
void main()
{
	demo d;
	clrscr();
	cout<<"\nEnter The Size Of Array:";
	cin>>n;
	d.get();
	d.display();
	cout<<"\nMin Heap Tree Is:\n";
	d.build(n);
	d.display();
	getch();
}