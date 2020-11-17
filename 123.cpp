#include<iostream>
#include<string>

using namespace std;

int main()
{
 setlocale(LC_ALL, "Russian");
std:string N1;
 std::string N2;
std::string S1;
std::string S2;
cout<<"¬ведите два числа"<<endl;
cout<<"N1=";cin>>N1;
cout<<"N2=";cin>>N2;
std::cout<<"¬ведите две строчки"<<endl;
std::cin>>S1;
std::cin>>S2;
cout<<"–езульт сложени€: "<<N1+S1<<"\t"<<S2+N2<<endl;


 system("pause");
	return 0 ;
}