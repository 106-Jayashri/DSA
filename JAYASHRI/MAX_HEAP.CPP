#include<iostream.h>
#include<conio.h>
int n;
class demo
{
	int a[10],i,temp,largest,l,r;
	public:
	void get();
	void display();
	void heapify(int n,int i);
	void build(int n);
    
};
void demo::get()
{
	cout<<"\nEnter Array Elements:\n";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void demo::display()
{
	cout<<"\nArray Elements Are:";
	for(i=1;i<=n;i++)
	cout<<"\t"<<a[i];
}
void demo::heapify(int n ,int i)
{
	  largest=i;
	  l=i*2;
	  r=i*2+1;
	  if(l<=n && a[l]>a[largest])
	   largest=l;
	  if(r<=n && a[r]>a[largest])
	   largest=r;
	  if(largest != i)
	  {
	   temp=a[i];
	   a[i]=a[largest];
	   a[largest]=temp;
	   heapify(n,largest);
	   }
}
void demo::build(int n)
{
	for(i=n/2;i>0;i--)
	{
	heapify(n,i);
	}

}
 
void main()
{
	demo d;
	clrscr();
	cout<<"\nEnter Array Size:\n";
	cin>>n;
	d.get();
	d.display();
	cout<<"\nAfter Building Max Heap Tree:\n";
	d.build(n);
	d.display();
	getch();
}