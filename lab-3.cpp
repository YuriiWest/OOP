#include <iostream>
#include <Windows.h>



using namespace std;





class Time {
private:
	int hours,  minutes,  seconds;
public:
	Time(){
		hours = 0;
		minutes = 0;
		seconds = 0;}

	Time(int hour, int minute, int second){

		if((hour>=0)&(hour<=24)&(minute>=0)&(minute<=60)&(second>=0)&(second<=60)){
			hours=hour;
	    minutes=minute;
		seconds=second;}
	else{hours=0;minutes=0;seconds=0;}
			}


	void normal(int k){
	if(k<10){cout<<"0";
	}}

	void showTime(){
	cout<<"Поточний час :  " ; normal(hours);cout<<hours <<":";normal(minutes); cout<<minutes<<":";normal(seconds); cout<<seconds<<endl;  
	
	}

	void summaTime(int hour_s, int min_s,int sec_s)
	 {int  day=0;
sec_s=seconds+sec_s;
if(sec_s>60){sec_s-=60; min_s++;}
min_s=minutes+min_s;
 if (min_s>60){min_s-=60; hour_s++;}
hour_s=hours+hour_s;
if(hour_s>24){hour_s-=24;day++;  }
cout<<"Результат додавання   :   " <<day <<" День  " ; normal(hour_s);  cout<<hour_s <<":";normal(min_s); cout<<min_s<<":";normal(sec_s); cout<<sec_s<<endl;  
}
	
	


};
int main (){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int hour,  min,sec;
	int hour_s,  min_s,sec_s;



cout<<"Введiть поточний час "<<endl<<"Година : ";
	cin>>hour;
	cout<<"Хвилина : ";
	cin>>min;
	cout<<"Секунда : ";
	cin>>sec;



Time Now(hour,min,sec);

Now.showTime();

cout<<endl<<"Введiть  час, який потрібно додати до поточного  "<<endl<<"Година : ";
	cin>>hour_s;
	cout<<"Хвилина : ";
	cin>>min_s;
	cout<<"Секунда : ";
	cin>>sec_s;
	 
	Now.summaTime(hour_s,  min_s,sec_s);



system("pause");
return 0;}
