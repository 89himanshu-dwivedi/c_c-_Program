#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#define D m();}
#define Merry m x=
#define from (
#define Bazzy );int main(){goto l;l
#define I struct

                 I
                 S
               {int
             p[2 ];S(
           int a, int b)
             {p[0]=a;;
          p[1]=b;}virtual
      std::string build()const
            {;; ; std::
          string r(1,'/');
       for(int i=0;i<p[1];i++
     )r+=(rand()%(3+2)?' ':'*');
           return r+'\\';
         }};struct T:public
       S{T(int a,int b):S(a,b
    ){}virtual std::string build
 ()const{return'|'+std::string(p[1]
            ,'_')+'|';}
            };struct U:
            public S{U(


int a,int           b):S(a,b){}        virtual            std::string             build()const             {return '/'+std::string
 (p[1],'_'         )+'\\' ;}};         struct P          {S*p;mutable           bool cp; P(int a,       int b):p(new S(a,b)),cp(!0
  ){}P(int        a,int b,char         c):p(c=='|'    ?(S*)new T(a,b)         :(S*)new     U(a,b)),     cp(true){}P( const P&o):p(
   o.p),cp(      true ){o.cp=          false; }P&operator=( const P&o         ){p=o.p;     cp=true;     o.cp=false;
    return *    this ;}~P(){           if(!!cp)  delete   p;}} ;std::         ostream&     operator      <<(std::ostream&
     os,const  P&p){ return            os<< std    ::     string (p.p         ->p[0],' ')<<((S*)p.p        )->build()<<'\n';}struct
       m{void operator-()              {m();}};           struct Xmas         {std::vector<P>v;Xmas           (){int i;for(i=0;i<4;
        i++){v.push_back               (P(13-i,           i*2));if(i%         2)v.push_back(P(13-i,                i*2));}v.push_back
      (P(13-i,i*2 ,'_'));v            .push_back          (P(12,2,'|'         ));;;;;}   friend std                         ::ostream
     &operator     <<(std::            ostream&           os,  const          Xmas& x)     {for(int                       unsigned i=
    0; i<x.v.       size();i           ++)os<<x           .v[i] ;int          w;return     os;w=0;}                operator m()const
  {std::cout         <<*this;          if(false           )std::cout          <<123456     ;int x=6       ;x=123;return m();}};void
 fooooooooo           ( double         xy){if(8           %7<0){char          ccc=xy<7     ?'a':'b'       ;int x=ccc+123;x=346;}}



