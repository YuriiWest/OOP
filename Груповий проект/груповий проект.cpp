#include<iostream>
#include "windows.h"
#include <iomanip>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout<<"Кількість виробів: ";
    cin>>n;
    string one[n][4];
    string two[n][2];
    string three[n][2];
    string four[n][5];
    int count = 0;
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;
    int max4 = 0;
    int max5 = 0;
    int max6 = 0;
    getline(cin,one[count][0]);


    for (;count<n; count++) {
        cout<<"код виробу: ";
        getline(cin,one[count][0]);
        cout<<"назва виробу: ";
        getline(cin,one[count][1]);
        cout<<"код постачальника сировини: ";
        getline(cin,one[count][2]);
        cout<<"ціна за одиницю: ";
        getline(cin,one[count][3]);
        cout<<"код постачальника: ";
        getline(cin,two[count][0]);
        cout<<"назва постачальника сировини: ";
        getline(cin,two[count][1]);
        cout<<"код торгової точки: ";
        getline(cin,three[count][0]);
        cout<<"назва торгової точки: ";
        getline(cin,three[count][1]);
        cout<<"код виробу: ";
        getline(cin,four[count][0]);
        cout<<"код торгової точки: ";
        getline(cin,four[count][1]);
        cout<<"кількість: ";
        getline(cin,four[count][2]);
        cout<<"дата: ";
        getline(cin,four[count][3]);
        cout<<"наявність 5%-ї націнки за поставку: ";
        getline(cin,four[count][4]);
        cout<<endl;
    }
        for (int i = 0; i<n; i++) {
            if (one[i][0].length() > max1) max1 = one[i][0].length();
            if (two[i][1].length() > max2) max2 = two[i][1].length();
            if (four[i][4].length() > max3) max3 = four[i][4].length();
            if (three[i][1].length() > max4) max4 = three[i][1].length();
            if (four[i][2].length() > max5) max5 = four[i][2].length();
            if (one[i][2].length() > max6) max6 = one[i][2].length();
        }
        cout << left << setw(max1+2) << "1"<<setw(max2+2) << "2" <<setw(max3+2) << "3"<<setw(max4+2) << "4"<<setw(max5+2) << "5"<<setw(max6+2) << "6"<<setw(5) << "7"<<endl;
        for (int i = 0; i<n; i++) {
            cout << left << setw(max1+2)<<one[i][0]<< setw(max2+2)<<two[i][1]<< setw(max3+2)<<four[i][0]<< setw(max4+2)<<three[i][1]<< setw(max5+2)<<four[i][2]<< setw(max6+2)<<one[i][2]<< setw(5)<<four[i][4]<<endl<<endl;
        }


}