       #include<iostream>
         using namespace std;
	class complex
	{
	  int real,img;
	  public:
	  complex(int,int);
	  complex();
	  ~complex();
	  void show();
	  complex add(complex x);
	};
	complex::complex(int a,int b)
	{
	  real=a,img=b;
	}
	complex::complex()
	{
	  cout<<"enter a complex number"<<endl;
	  cin>>real>>img;
	}
	complex::~complex()
	{
	  cout<<"\n i am dead"<<endl;
	}
	void complex::show()
	  {
	    cout<<"complex number is"<<real<<" i "<<img<<endl;
	  }
	  complex complex::add(complex x)
	  {
	    complex temp;
	    temp.real=real+x.real;
	    temp.img=img+x.img;
	    return temp;
          }
	int main() {
	  complex o1,o2(9,4),temp;
	  o1.show();
	  o2.show();
	  temp=o1.add(o2);
	  cout<<"sum of this complex numbers is "<<endl;
	  temp.show();
	
	  return 0;
	}