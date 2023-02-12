#include <iostream>

using namespace std;

void Selection(int arr[],int Size)
{

    int mini;
    int temp;

    for(int x=0;x<Size-1;x++)
    {
        mini=x;
        for(int i=x+1;i<Size;i++)
        {
            if(arr[i]<arr[mini])
            {

                mini=i;

            }
        }
            temp=arr[x];

            arr[x]=arr[mini];
            arr[mini]=temp;

    }

}

void display(int arr[],int Size)
{

    for(int i=0;i<Size;i++)
    {

        cout<<arr[i]<<endl;

    }

}

int main()
{
    int Size=6;
    int arr[Size];
    arr[0]=56;
    arr[1]=42;
    arr[2]=5;
    arr[3]=87;
    arr[4]=34;
    arr[5]=23;

    display(arr,Size);

    cout<<"......................."<<endl;

    Selection(arr,Size);
    display(arr,Size);

    cout<<"......................."<<endl;

    return 0;
}
