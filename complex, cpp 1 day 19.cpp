#include<iostream>
using namespace std;
class complex{
	int a, b;
	public:
		void setdata(int n1, int n2){
			a = n1;
			b = n2;
		}
		void printData(){
			cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
		}
	};
	int main(){
		complex c1, c2;
		c1.setdata(2, 4);
		c2.setdata(5,6);
		c1.printData();
		c2.printData();
	}
