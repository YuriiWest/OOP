#include <iostream>
#include <ctime>

	using namespace std;
	void sorting(int size,int *Arr){
		int per=0;
		int W=size-1;
		for(int i=0;i<size/2;i++){
			per=Arr[W-i];
			Arr[W-i]=Arr[i];
			Arr[i]=per;
		}}
	void random(int size ,int *Arr){
		 for(int i =0;i<size;i++){
				Arr[i]=rand();
	}}
    void output (int size,int *Arr){
	 for(int i=0;i<size;i++){
				cout<<Arr[i]<<"  ";}
	 cout<<endl<<endl;}

	
	 int main (){
		
		srand(time(NULL));
		 int size;
	    cout<<"ENTER YOUR SIZE   "<<endl;
			cin>>size;
			cout<<endl;
			 int *Arr=new int[size];
			 random(size,Arr);
			 cout<<"Input array :"<<endl;
			 output(size,Arr);
			 sorting(size,Arr);
			 cout<<"Output array :"<<endl;
			 output(size,Arr);
		   
			 
	system("pause");
		return 0 ;}
