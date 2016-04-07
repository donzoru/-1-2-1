#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,t;
    cin>>*a;
    for(i=1;i<=*a;++i)
        cin>>*(a+i);
    for(i=1,j=*a ; i<*a/2+1; ++i,--j)
    {
        t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
    }
    for(i=1;i<=*a;++i)
        cout<<*(a+i)<<((i!=*a)?' ':'\n');
    return 0;
}
