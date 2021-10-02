#include <iostream>


using namespace std;

class complex

{
    
int real,img;

    public:
    
void read()
    
{
        
cout<<"enter real and imaginary value of a complex no"<<endl;
        
cin>>real>>img;
    
}
    
void show()
    
{
        cout<<"complex number="<<real<<" i "<<img<<endl;
    
}
    
void multi(complex x )
    
{
        
complex temp;
        
temp.real=real*x.real;
        
temp.img=img*x.img;
        
cout<<" multiplication of complex numbers="<<temp.real<<" i "<<temp.img<<endl;
        

    }

};


int main()

{
    
complex o1,o2;
    
o1.read();
    
o2.read();
    
o1.show();
    
o2.show();
    
o2.multi(o1);

    
return 0;

}
