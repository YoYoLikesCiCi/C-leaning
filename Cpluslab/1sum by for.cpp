# include <iostream>
using namespace std;
int main()
{
    int i,n,sum;
    i = 1;
    sum = 0;
    cout<<"Input the n:"<<endl;
    cin>>n;
    for(i;i<=n;i++)
    {
        sum += i;
    }
    cout<<"sum ="<<sum<<endl;
    return 0;
}
