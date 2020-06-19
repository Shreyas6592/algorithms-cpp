//Selection sort
#include <iostream>

using namespace std;

void swap(int *xp, int *yp) 
{
    int *temp = xp;
    *xp = *yp;
    *yp = *temp;
}

void selectionSort(int arr[], int n)  
{
    int idx = 0;
    int low = 0;
    for(int i=0;i<=n-1;i++)
    {
        low = arr[i];
        cout<<low<<" "<<"::";
        idx = i;
        for(int j = i+1;j<n;j++)
        {
            if(low > arr[j])
            {
                idx = j;
                low = arr[j];
            }
        }
        cout<<arr[i]<<" "<<low<<"::";
        if(arr[i]!=low)
        {
            //cout<<"Swap:"<<arr[i]<<" "<<arr[idx]<<endl;
            int temp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = temp;
        }
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

void printArray(int arr[], int size) 
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()  
{  
    int arr[] = {30,11,45,2,16,1};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}