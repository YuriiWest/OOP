#include <iostream>
#include <string>
using namespace std;

class Base
{ public:

virtual void myname() { 
	cout << "This is class Base" <<endl << endl; }

};

class DerA:public Base
{public:
void myname() override{
cout<<"The first  inherited class : DerA"<<endl<<endl;

}

};
class DerB:public Base

{public:
void myname()override
{
cout<<"The second  inherited class : DerB"<<endl<<endl;
}

};
class DerAB:public DerA, public DerB
{public:
void myname() override
{
cout<<"The third  inherited class : DerAB"<<endl<<endl;
}
};

int main()
{   Base Base_one;
Base_one.myname();
   DerA A;
   A.myname();
   DerB B;
   B.myname();
   DerAB AB;
   AB.myname();

   Base base;
   DerA a;
   DerB b;
   DerAB ab;

	
   cout<<"Calling function using pointers :\t"<<endl<<endl;
   Base *point[] ={&base,&a,&b}; //point[3]=&ab  - íåÿâëÿºòüñÿ îäíîçíà÷íèì
	 point[0]->myname();
	 point[1]->myname(); 
	 point[2]->myname();

	 DerAB *a_b=&ab;
	 a_b->myname();
	



	system("pause");
    return 0;
} 
