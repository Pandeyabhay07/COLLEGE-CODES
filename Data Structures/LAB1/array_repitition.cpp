#include <iostream>
using namespace std;

int main()

{
    int n, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int r[100], u[100], k = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        if (arr[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    if (flag == 0)
                        r[k++] = arr[i];
                    flag = 1;
                    arr[j] = 0;
                    // cout<<arr[j]<<endl;
                }
            }

            if (flag == 0)
            {
                u[l++] = arr[i];
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < l; i++)
    {

        cout << u[i] << " ";
    }
    return 0;
}

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int maximum(int arr[],int n){
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max)
//         max=arr[i];
//     }
//     return max;
// }
// int main()

// {

//     int n;
//     cout << "Enter the size";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int arr2[10]={0};
//     // for (int i = 0; i < 10; i++)
//     //     arr2[i] = 0;
//     int i;
//     for (int i = 0; i < n; ++i)
//     {
//         arr2[arr[i]]++;
//     }
//         // for (int i=0;i<10;i++)
//         // cout<<arr2[i];

//     // int a =( sizeof(arr2[n])) / (sizeof(arr2[0]));
//     int max=maximum(arr,n);
//     for (int j= 0; j < max; j++)
//     {
//         if (arr2[j] > 1)
//         {
//             cout << "Repeated element is" << j << " "<<endl;
//         }

//     }
//     return 0;
// }
