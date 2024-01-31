// "Conversion of Dollar to Nepali Using Function Template"
// Depends on input (input=float value then float datatypes is used otherwise int datatype is used)
#include <iostream>
using namespace std;
template<typename T>
T Conversion(T dollar)
{
    return dollar*130;
}
int main()
{
    int temp=0;
    float num,result;
    cout<<"Enter amount in dollar: ";
    cin>>num;
    temp=num;
    if(temp==num)
    {
        result=Conversion<int>(num);
    }
    else
    {
        result=Conversion<float>(num);
    }
    cout<<endl<<num<<"$ = Rs"<<result;
    return 0;
}