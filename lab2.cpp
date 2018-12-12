Skip to content
 
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 @YuriiWest Sign out
0
0 0 StepanKniazevich/Lab-
 Code  Issues 0  Pull requests 0  Projects 0  Wiki  Insights
Lab-/Lab 2.txt
bcbc1d4  19 days ago
@StepanKniazevich StepanKniazevich Update Lab 2.txt
     
56 lines (36 sloc)  1.03 KB
#include <iostream>
#include <Windows.h>



using namespace std;
class Rectangl {
private:
	int length;
	int width;
public:
	
	void Set_length( int a){length=a;}
	void Set_width( int b){width=b;}
	int Get_length(){return length;}
	int Get_widht(){return width;}
	 
		int square(){int S;
		S=length*width;
		return S;}


		int perimeter(){int P;
		P=length+width;
		return P;}


	




};

int main (){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
 int a,b;

Rectangl ABCD;
cout<<"Введiть значення  довжини і ширини прямокутника (від 0 до 20) "<<endl;
cin>>a;
cin>>b;

if((a>0)&(b>0)&(a<20)&(b<20)){

ABCD.Set_length(a);
ABCD.Set_width(b);
cout<<"Прямокутник розміром  : "<<ABCD.Get_length()<<" x "<<ABCD.Get_widht()<<endl;
cout<<"Площа = "<<ABCD.square()<<endl;
cout<<"Периметр = "<<ABCD.perimeter()<<endl;}
else { cout<<"Ви ввели неправильні значення "<<endl; }	

system("pause");
return 0;}
© 2018 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
Press h to open a hovercard with more details.
