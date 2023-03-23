#include<iostream>
using namespace std;
class complex{
	int a, b;
	public:
		void setdata(int n1, int n2){
			a = n1;
			b = n2;
		}
		friend complex subComplex(complex o1, complex o2);
		void printData(){
			cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
		}
	};
	complex subComplex(complex o1, complex o2){
		complex o3;
		o3.setdata((o1.a+o2.a),(o1.b+o2.b));
	}
	int main(){
		complex c1, c2,sum;
		c1.setdata(2, 4);
		c2.setdata(5,4);
		
		c1.printData();
		c2.printData();
		sum = subComplex(c1,c2);
		sum.printData();
		
	}
