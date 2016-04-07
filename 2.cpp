//此程序由于输出表格，亲测150刚好够
//2-1是用做好的表格提交的
#include<iostream>
#include<cstdio>
#include<cstring>
#define poi 150
using namespace std;
int main()
{
    int t,k,sum,i;
    bool a[poi];
    int cc[poi];
    for(t=4;t<=poi;++t)
    {
        sum=0;
        memset(a,0,poi*sizeof(bool));
        k=0;
        for(;;){
            for(i=0;i<t;i++){
                if(*(a+i)) continue;
                k++;
                if(k==3) {*(a+i)=1;k=0;++sum;}
                if(sum==t-1) break;
            }
            if(sum==t-1) break;
        }
        for(i=0;i<t;i++)
            if(!*(a+i)) {cc[t]=i+1;break;}
    }
    for(i=4;i<=poi;i++)
        cout<<cc[i]<<',';
    return 0;
}
