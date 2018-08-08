#include<iostream>
 void countFre(string S)
    {
        for(auto char c = ‘a’;c <= ‘z’;++c)
        {
            int frequency = 0;
            for(int i = 0;i < S.length();++i)
                if(S[i] == c)
                    frequency++;
            cout << c << ‘ ‘ << frequency << endl;
        }
    }
int main()
{
	String s="ram";
countFre(s);
return 0;	
}
