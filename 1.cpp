#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int *pa,*pb,*pc,*t=NULL;
    pa=&a;pb=&b;pc=&c;
    cin>>a>>b>>c;
    if(*pa>*pb)
    {
        t=pa;
        pa=pb;
        pb=t;
    }
    if(*pa>*pc)
    {
        t=pa;
        pa=pc;
        pc=t;
    }
    if(*pb>*pc)
    {
        t=pb;
        pb=pc;
        pc=t;
    }

    cout<<*pa<<' '<<*pb<<' '<<*pc<<endl;
    return 0;
}
