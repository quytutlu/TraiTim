#include<iostream>
#include<windows.h>
#include"ThuVien.h"
using namespace std;
void DemNguoc(char a,char b,char c);
void main()
{
	char a=186;
    char b=186;
    char c=186;
	char d=7;
	bool flag=true;
	int giay=25;
	while(flag)
	{
		cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"				00:00:";
		if(giay<10)
		{
			cout<<0<<giay<<endl;;
		}
		else
		{
			cout<<giay<<endl;
		}
		Sleep(600);
		giay--;
		system("cls");
		if(giay==0)
		{
			break;
		}
	}
    
	int k=0;
	char q=186;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t"<<q<<q<<q<<q<<q<<"     "<<q<<q<<"    "<<q<<q<<"   "<<q<<q<<q<<q<<q<<q<<q<<"   "<<q<<q<<q<<q<<q<<q<<q<<"   "<<q<<q<<endl;
    cout<<"\t\t"<<q<<"    "<<q<<q<<"   "<<q<<q<<"    "<<q<<q<<"   "<<"      "<<q<<"         "<<q<<"   "<<q<<q<<endl;
    cout<<"\t\t"<<q<<"    "<<q<<q<<"   "<<q<<q<<"    "<<q<<q<<"   "<<"     "<<q<<"         "<<q<<"    "<<q<<q<<endl;
    cout<<"\t\t"<<q<<"    "<<q<<q<<"   "<<q<<q<<"    "<<q<<q<<"   "<<"    "<<q<<"         "<<q<<"     "<<q<<q<<endl;
    cout<<"\t\t"<<q<<q<<q<<q<<q<<"     "<<q<<q<<"    "<<q<<q<<"   "<<"   "<<q<<"         "<<q<<"      "<<q<<q<<endl;
    cout<<"\t\t"<<q<<"    "<<q<<q<<"   "<<q<<q<<"    "<<q<<q<<"   "<<"  "<<q<<"         "<<q<<"       "<<q<<q<<endl;
    cout<<"\t\t"<<q<<"    "<<q<<q<<"   "<<q<<q<<"    "<<q<<q<<"   "<<" "<<q<<"         "<<q<<"        "<<q<<q<<endl;
    cout<<"\t\t"<<q<<"    "<<q<<q<<"   "<<q<<q<<"    "<<q<<q<<"   "<<q<<"         "<<q<<"   "<<endl;
    cout<<"\t\t"<<q<<q<<q<<q<<q<<"    "<<"   "<<q<<q<<q<<q<<" "<<"    "<<q<<q<<q<<q<<q<<q<<q<<"   "<<q<<q<<q<<q<<q<<q<<q<<"   "<<q<<q<<endl;
	Sleep(1000);
	system("cls");
	char n=3;
	while(1)
	{
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"                                "<<" "<<n<<" "<<n<<"   "<<n<<" "<<n<<endl;
		cout<<"                                "<<n<<"    "<<n<<"    "<<n<<endl;
		cout<<"                                "<<" "<<n<<"       "<<n<<endl;
		cout<<"                                "<<"  "<<n<<"     "<<n<<endl;
		cout<<"                                "<<"   "<<n<<"   "<<n<<endl;
		cout<<"                                "<<"    "<<n<<" "<<n<<endl;
		cout<<"                                "<<"     "<<n<<endl;
		Sleep(500);
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"                           "<<"   "<<n<<" "<<n<<"       "<<n<<" "<<n<<endl;
		cout<<"                           "<<" "<<n<<"     "<<n<<"   "<<n<<"     "<<n<<endl;
		cout<<"                           "<<n<<"        "<<n<<"        "<<n<<endl; 
		cout<<"                           "<<n<<"                 "<<n<<endl;
		cout<<"                           "<<" "<<n<<"               "<<n<<endl;
		cout<<"                           "<<"  "<<n<<"             "<<n<<endl;
		cout<<"                           "<<"   "<<n<<"           "<<n<<endl;
		cout<<"                           "<<"    "<<n<<"         "<<n<<endl;
		cout<<"                           "<<"     "<<n<<"       "<<n<<endl;
		cout<<"                           "<<"      "<<n<<"     "<<n<<endl;
		cout<<"                           "<<"       "<<n<<"   "<<n<<endl;
		cout<<"                           "<<"        "<<n<<" "<<n<<endl;
		cout<<"                           "<<"         "<<n<<endl;
		Sleep(500);
		system("cls");
		cout<<endl;
		cout<<"                    "<<"      "<<n<<" "<<n<<" "<<n<<"           "<<n<<" "<<n<<" "<<n<<endl;
		cout<<"                    "<<"    "<<n<<"       "<<n<<"       "<<n<<"       "<<n<<endl;
		cout<<"                    "<<"  "<<n<<"           "<<n<<"   "<<n<<"           "<<n<<endl;
		cout<<"                    "<<" "<<n<<"              "<<n<<"              "<<n<<endl;
		cout<<"                    "<<" "<<n<<"                             "<<n<<endl;
		cout<<"                    "<<" "<<n<<"                             "<<n<<endl;
		cout<<"                    "<<"  "<<n<<"                           "<<n<<endl;
		cout<<"                    "<<"   "<<n<<"                         "<<n<<endl;
		cout<<"                    "<<"    "<<n<<"                       "<<n<<endl;
		cout<<"                    "<<"     "<<n<<"                     "<<n<<endl;
		cout<<"                    "<<"      "<<n<<"                   "<<n<<endl;
		cout<<"                    "<<"       "<<n<<"                 "<<n<<endl;
		cout<<"                    "<<"        "<<n<<"               "<<n<<endl;
		cout<<"                    "<<"         "<<n<<"             "<<n<<endl;
		cout<<"                    "<<"          "<<n<<"           "<<n<<endl;
		cout<<"                    "<<"           "<<n<<"         "<<n<<endl;
		cout<<"                    "<<"            "<<n<<"       "<<n<<endl;
		cout<<"                    "<<"             "<<n<<"     "<<n<<endl;
		cout<<"                    "<<"              "<<n<<"   "<<n<<endl;
		cout<<"                    "<<"               "<<n<<" "<<n<<endl;
		cout<<"                    "<<"                "<<n<<endl;
		Sleep(500);
		system("cls");
		k++;
		if(k==5)
		{
			break;
		}
	}
	DemNguoc(a,b,c);
	k=0;
	while(1)
	{
		Sleep(500);
		cout<<endl;
		TraiTimDoi(n);
		Sleep(500);
		system("cls");
		k++;
		if(k==30)
		{
			break;
		}
	}
	/*Sleep(1000);
	system("cls");*/
	cout<<endl;
    cout<<"                    ";cout<<"      ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<"           ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"    ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<"       ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"  ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<"   ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<" ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<" ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<" ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"  ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"   ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"    ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"     ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"      ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"       ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"        ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"         ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"          ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"           ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"            ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"             ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"              ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"               ";cout<<n;Sleep(150);cout<<n;Sleep(150);cout<<n<<endl;
    cout<<"                    ";cout<<"                ";cout<<n<<endl;
	cout<<"A";Sleep(500);cout<<"N";Sleep(500);cout<<"H ";Sleep(500);cout<<"Y";Sleep(500);cout<<"E";Sleep(500);cout<<"U ";Sleep(500);cout<<"E";Sleep(500);cout<<"M ";Sleep(500);cout<<"H";Sleep(500);cout<<"O";Sleep(500);cout<<"N ";Sleep(500);cout<<"N";Sleep(500);cout<<"H";Sleep(500);cout<<"U";Sleep(500);cout<<"N";Sleep(500);cout<<"G ";Sleep(500);cout<<"G";Sleep(500);cout<<"I ";Sleep(500);cout<<"A";Sleep(500);cout<<"N";Sleep(500);cout<<"H ";Sleep(500);cout<<"N";Sleep(500);cout<<"O";Sleep(500);cout<<"I !!!"<<endl;Sleep(500);
	cout<<"I ";Sleep(500);cout<<"L";Sleep(500);cout<<"O";Sleep(500);cout<<"V";Sleep(500);cout<<"E ";Sleep(500);cout<<"Y";Sleep(500);cout<<"O";Sleep(500);cout<<"U ";Sleep(500);cout<<"M";Sleep(500);cout<<"O";Sleep(500);cout<<"R";Sleep(500);cout<<"E ";Sleep(500);cout<<"T";Sleep(500);cout<<"H";Sleep(500);cout<<"A";Sleep(500);cout<<"N ";Sleep(500);cout<<"I ";Sleep(500);cout<<"C";Sleep(500);cout<<"A";Sleep(500);cout<<"N ";Sleep(500);cout<<"S";Sleep(500);cout<<"A";Sleep(500);cout<<"Y !!!";Sleep(500);cout<<endl;
	Sleep(1500);
	DemNguoc(a,b,c);
	//system("pause");
}
void DemNguoc(char a,char b,char c)
{
	system("cls");
	cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                           "<<"  "<<a<<a<<a<<a<<a<<endl;
    cout<<"                           "<<a<<a<<"     "<<b<<b<<endl;
    cout<<"                           "<<"       "<<b<<b<<endl;
    cout<<"                           "<<"       "<<b<<b<<endl;
    cout<<"                           "<<"    "<<a<<a<<a<<endl;
    cout<<"                           "<<"       "<<b<<b<<endl;
    cout<<"                           "<<"       "<<b<<b<<endl;
    cout<<"                           "<<a<<a<<"     "<<b<<b<<endl;
    cout<<"                           "<<"  "<<a<<a<<a<<a<<a<<endl;
    Sleep(1000);
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                           "<<"  "<<a<<a<<a<<a<<a<<a<<endl;
    cout<<"                           "<<a<<a<<"      "<<b<<b<<endl;
    cout<<"                           "<<"        "<<b<<b<<endl;
    cout<<"                           "<<"      "<<a<<a<<endl;
    cout<<"                           "<<"    "<<a<<a<<endl;
    cout<<"                           "<<"  "<<a<<a<<endl;
    cout<<"                           "<<a<<a<<endl;
    cout<<"                           "<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
    Sleep(1000);
    system("cls");
	cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                           "<<a<<a<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    cout<<"                             "<<c<<c<<endl;
    Sleep(1000);
    system("cls");
}