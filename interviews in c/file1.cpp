#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file;
/*	file.open("11.txt");
//file.open("11.txt",ios::out | ios::in);

file.open("11.txt");
file.close();
*/

char text[30];
file.open("11.txt",ios::out | ios::in);

cout<<"write on the file "<<endl;
cin.getline(text,sizeof(text));

cout<<"write on the file"<<endl;
file<<text<<endl;

cout<<"read on the file"<<endl;
cin>>text;
cout<<text<<endl;


file.close();
	return 0;
}
