#include<iostream>
using namespace std;

//enum season
enum class season
{
	winter ,
	spring,
	summer
};

//enum color
  enum class color
  {
	black,
	blue,
	gold
	
};


int main()
{
//	enum season s=summer;
//	enum color  c=gold;
season s=season::summer;
color  c=color::gold;	
	if(s == c)
	{
	
	cout<<"equal"<<endl;
	}else
	{
	cout<<"unqual"<<endl;
}
	return 0;//
}





