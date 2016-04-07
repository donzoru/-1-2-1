#include<iostream>
using namespace std;
int main()
{
    int a[12],i,j;
    for(i=0;i<12;++i)
        cin>>*(a+i);
    for(i=*(a+10)-1, j=*(a+10)+4; i<*(a+11) ; ++i, ++j)
    {
        int t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
    }
    for(i=0;i<10;++i)
        cout<<*(a+i)<<((i!=9)?' ':'\n');
    return 0;
}
