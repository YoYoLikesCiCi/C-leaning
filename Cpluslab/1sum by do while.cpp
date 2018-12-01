# include <iostream>
using namespace std;
int main()
{
    int i,n,sum;
    i = 1;
    sum = 0;
    cout<<"Input the n:"<<endl;
    cin>>n;
    do{
        sum += i;
        i++;
    }while(i<=n);
    cout<<"sum ="<<sum<<endl;
}
