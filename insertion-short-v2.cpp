// Using online compiler at :
// https://www.programiz.com/cpp-programming/online-compiler/

// Insertion Sort Version 2
#include <iostream>

using namespace std;
int main() {
    int arr []={1,3,90,55,44,21,22,4,3,8,134,12,21};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nArray Length : "<<arrLength;
    cout<<"\nUnsorted list is \n";
    for(int i=0; i<arrLength;i++){
        cout<<arr[i]<<"\t";
    }
    int temp;
    cout<<endl<<endl;
    for(int i=1; i<arrLength; i++)   //ekspansi
    {  
        cout<<"\nStep : "<<i;
        
        cout<<"\nBefore Sorted list is \n";//print sebelum disort pada langkah i
        for(int i=0;i<arrLength;i++)  
        {  
            cout <<arr[i]<<"\t";  
        } 
        
        //proses sorting
        for (int j=i; j>0; j--){
            cout<<"\nWhile Sorted list is \n"; //print saat sedang sorting
            for(int i=0;i<10;i++)  
            {  
                cout <<arr[i]<<"\t";  
            }
            if(arr[j-1]>arr[j]){//cek apakah elemen sebelum j lebih kecil atau tidak
               temp = arr[j];
               arr[j]=arr[j-1];
               arr[j-1]=temp;
           }
           else{
               break;
           }
        }  
        
        cout<<"\nAfter Sorted list is \n";//print sesudah disort pada langkah i
        for(int i=0;i<arrLength;i++)  
        {  
            cout <<arr[i]<<"\t";  
        } 
        
        cout<<endl;
    }  
    cout<<"\nFinal Sorted list is \n";
    for(int i=0; i<arrLength;i++){
        cout<<arr[i]<<"\t";
    }
    
    return 0;
    //referensi : https://youtu.be/F_XLjwNsrpY
}
