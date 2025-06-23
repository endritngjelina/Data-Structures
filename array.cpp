#include <iostream>
using namespace std;

const int SIZE=5;

void printarray(int arr[], int size)

{
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void insertarray(int arr[], int pos, int value)

{
    if (pos<0||pos>SIZE)
    {
        cout<<"invalid position"<<endl;
        return;
    }
    //shifting all the elements to the right to make space
    for (int i=SIZE;i >pos;--i)
    {
        arr[i]=arr[i-1];//arr[1]=arr[0]
    }
    arr[pos]=value;



}

int main()

{
int arr[SIZE]={1,2,3};
int size=5;

int val=8;
// printarray(arr,size);
insertarray(arr,0,val);

printarray(arr,size);

}

// g++ -std=c++11 ood.cpp -o od

// #include <vector>
// #include <iostream>
// using namespace std;

// int main()

// {
// vector <int> vec1;
// vec1.push_back(10);
// vec1.push_back(20);
// vec1.insert(vec1.begin(),5);//{5,10,20}
// // cout<<vec1[0]<<endl;
// // cout<<vec1.begin()<<endl;
// vec1.pop_back();
// // cout<<vec1.back()<<endl;//{5,10}

// // vec1.clear();

// for (const auto elem:vec1)
// {
//     cout<<elem<<endl;
// }

// }