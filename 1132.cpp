#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int X,Y,i,result=0,min,max;
    cin>>X;
    cin>>Y;
    if(X<Y){
        min = X;
        max = Y;
    }else{
        min = Y;
        max = X;
    }
    for(i = min ; i<=max;i++){
        if(i%13 !=0){
            result +=i;
        }
    }
    cout<<result<<endl;
    return 0;
}
