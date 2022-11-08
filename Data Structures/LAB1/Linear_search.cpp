 #include<iostream>
     using namespace std ;
     
   int search(int arr[],int size,int term){
     int count=0;
    for (int i=0;i<size;i++)
    {
        if(arr[i]==term)
        {count=1;
        break;}
    
    }
   
   if (count==1)
      return 1;
   else
    return 0;
}






//      int main()
//  { 
//      int n;
//      cout<<"Enter the size of array: ";
//      cin>>n;
//      int arr[n];
//      cout<<"Enter the elements of array :";
//      for(int i=0;i<n;i++)
//     {
//      cin>>arr[i];
//      }
//     int key; 
//     cout<<"Enter the element to be found ";
//     cin>>key;
//     for(int i=0;i<n;i++)
//     {
//         if (arr[i]==key)
//         {
//             cout<<"Elements is present at "<<i+1<<" place.";
//             break;
//         }
//         else 
//         {cout<<"Element is not present !!!";
//         break;
//         }
//     }
//         return 0 ;
//  }




         //using function
  int main()
  {
    int n;
     cout<<"Enter the size of array: ";
     cin>>n;
     int arr[n];
     cout<<"Enter the elements of array :";
     for(int i=0;i<n;i++)
    {
     cin>>arr[i];
     }
    int term; 
    cout<<"Enter the element to be found ";
    cin>>term;
     int find=search(arr,10,term);
    
    if(find){
        cout<<"Element is present.";  
    }
    else {
        cout<<"Element is not present.";
    }
    return 0 ;
    
  }



