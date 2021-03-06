/*
*实例化std::vector
*/

#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> vecDynamicIntegerArray;

    vector<int> vecArrayWithTenElements(10);
    
    vector<int> vecArrayWithTenInitializedElements(10,90);

    vector<int> vecSomeElementsCopied(vecArrayWithTenElements.begin(),
                                      vecArrayWithTenElements.begin()+5);

    //观察size和capacity
    cout<<"size="<<vecDynamicIntegerArray.size()<<"    capacity="<<vecDynamicIntegerArray.capacity()<<endl;
    //size=0 capacity=0

    cout<<"size="<<vecArrayWithTenElements.size()<<"    capacity="<<vecArrayWithTenElements.capacity()<<endl;
    //size=10 capacity=10

    cout<<"size="<<vecSomeElementsCopied.size()<<"    capacity="<<vecSomeElementsCopied.capacity()<<endl;

    //观察值
    vector<int>::iterator iter=vecArrayWithTenElements.begin();
    while(iter!= vecArrayWithTenElements.end())
    {
        cout<<*iter<<"  ";
        iter++;
    }
    //全是0:
    cout<<endl;

    //扩容观察
    cout<<"size="<<vecDynamicIntegerArray.size()<<"    capacity="<<vecDynamicIntegerArray.capacity()<<endl;
    //size=1,capacity=1

    for (int i=0;i<200;i++)
    {
        vecDynamicIntegerArray.push_back(10);
        cout<<"i="<<i<<"    size="<<vecDynamicIntegerArray.size()<<"    capacity="<<vecDynamicIntegerArray.capacity()<<endl;
    }
    //capacity以指数介增长，2的n次方
    
    for (int i=0;i<200;i++)
    {
        vecArrayWithTenElements.push_back(10);
        cout<<"i="<<i<<"   size="<<vecArrayWithTenElements.size()<<"   capacity="<<vecArrayWithTenElements.capacity()<<endl;
    }

    //capacity以指数介增长，2的n次方
    return 0;
}

