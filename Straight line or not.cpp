#include<iostream>
using namespace std;
int main()
{
    int arr[100][2],n,i,j,y,z,x,flag=0;
    cout<<"Enter the number of co-ordinates";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    if(n==2)
        cout<<"True";
    else
    {
        if(arr[0][0]==arr[1][0])
            x=0;
        else if(arr[0][1]==arr[1][1])
            x=1;
        else
        {
            for(i=0;i<n-1;i++)
            {
                y=arr[i+1][0]-arr[i][0];
                z=arr[i+1][1]-arr[i][1];
                if(y!=z)
                {
                    flag=1;
                    break;
                }
            }
            flag==0?cout<<"True":cout<<"False";
        }
    }
        if((x==1)||(x==0))
        {
            for(i=1;i<n;i++)
            {
                if(arr[i][x]!=arr[0][x])
                {
                    flag=1;
                    break;
                }
            }
            flag==0?cout<<"True":cout<<"False";
        }

    return 0;
}
