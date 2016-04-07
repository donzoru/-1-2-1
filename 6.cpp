#include<iostream>
using namespace std;
int main()
{
    int a[20],i,j;
    for(i=0;i<12;++i)
        cin>>*(a+i);
    int p=*(a+10)-1;
    for(i=p, j=p+*(a+11)-1; i<p+*(a+11)/2 ;++i,--j)
    {
        int t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
    }
    for(i=0;i<10;++i)
        cout<<*(a+i)<<((i==9)?'\n':' ');
    return 0;
}
