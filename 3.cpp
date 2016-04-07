#include<iostream>
using namespace std;
int main()
{
    int a[100],j;
    cin>>*a;
    for(j=1;j<=*a;++j)
        cin>>*(a+j);
    for(j=*a ; j>0 ; --j)
        cout<<*(a+j)<<((j!=1)?' ':'\n');
    return 0;
}
