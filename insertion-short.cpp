//Using C++ online compiler at :
//https://www.programiz.com/cpp-programming/online-compiler/

//Insertion Sort

#include <iostream>
using namespace std;
int main() {
    int arr []={1,3,90,55,44,21,22,4,3,8,134,12,21};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nArray Length : "<<arrLength;
    // bool keyCheck=false;
    int i,j,key;
    cout<<"\nUnsorted list is \n";
    for(i=0; i<arrLength;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<endl;
    for(int i=1; i<arrLength; i++)   
    {  
        cout<<"\nStep : "<<i;
        cout<<"\nBefore Sorted list is \n";
        for(int i=0;i<arrLength;i++)  
        {  
            cout <<arr[i]<<"\t";  
        } 
        key = arr[i];  
        j= i-1;  
        while(j>=0 && key <= arr[j])  
        {  
            arr[j+1] = arr[j];  
            cout<<"\nWhile Sorting list is \n";
            for(int i=0;i<10;i++)  
            {  
                cout <<arr[i]<<"\t";  
            }
            j = j-1;  
        }
        arr[j+1] = key;  
        cout<<"\nAfter Sorted list is \n";
        for(int i=0;i<arrLength;i++)  
        {  
            cout <<arr[i]<<"\t";  
        } 
        cout<<endl;
    }  
    cout<<"\nFinal Sorted list is \n";
    for(i=0; i<arrLength;i++){
        cout<<arr[i]<<"\t";
    }
    
    return 0;
    //referensi : https://www.softwaretestinghelp.com/insertion-sort/
}
