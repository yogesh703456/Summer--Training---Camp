




// program 1: maximum elements.


#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter the size : ";
    cin>>length;
    int a[length];
    for(int i=0;i<length;i++){
        cout<<"Enter the number : ";
        cin>>a[i];

    }
    int max=a[0];
    for(int i=0;i<length;i++){
        if(max<a[i]){
            max=a[i];

        }

    }
    cout<<max;
}




// // program 2: minimum elements.


// #include<iostream>
// using namespace std;
// int main(){
//     int length;
//     cout<<"Enter the size : ";
//     cin>>length;
//     int a[length];
//     for(int i=0;i<length;i++){
//         cout<<"Enter the number : ";
//         cin>>a[i];
//     }
//     int min=a[0];
//     for(int i=0;i<length;i++){
//         if(min>a[i]){
//             min=a[i];
//         }
//     }
//     cout<<"The minimum value : "<<min;

// }



// // program 3: array sum.



// #include<iostream>
// using namespace std;
// int main(){
//     int length;
//     cout<<"Enter the size : ";
//     cin>>length;
//     int a[length];
//     for(int i=0;i<length;i++){
//         cout<<"Enter the number : ";
//         cin>>a[i];
//     }
//     int sum=0;
//     for(int i=0;i<length;i++){
//         sum=sum+a[i];
//     }
//     cout<<"The sum of array : "<<sum;
    


// }    



// // // program 4: reverse array 

// #include<iostream>
// using namespace std;
// int main(){
//     int length;
//     cout<<"Enter the size : ";
//     cin>>length;
//     int a[length];
//     for(int i=0;i<length;i++){
//         cout<<"Enter the number : ";
//         cin>>a[i];
//     }
//     int rev=1;
//     for(int i=length-1;i>=0;i--){
//         cout<<a[i]<<" ";
//     }
    


// }    




// // program 5: second largest element.


// #include<iostream>
// using namespace std;
// int main(){
//     int length;
//     cout<<"Enter the size : ";
//     cin>>length;
//     int a[length];
//     for(int i=0;i<length;i++){
//         cout<<"Enter the number : ";
//         cin>>a[i];
//     }
//     for(int i=0;i<length;i++){
//         for(int j=length-1;j<length;j++){
//             if(a[i]>a[j]){
//             int temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
            
//             }
//         }

//     }
//     for(int i=0;i<length;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"The second largest number : "<<a[length-2];

    


// }    



// // program 6: matrix addition.

// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][2],b[2][2],sum[2][2];

//     cout<<"Enter the martix A : ";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cin>>a[i][j];

//         }
//     }
//     cout<<"Enter the matrix B : ";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cin>>b[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             sum[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     cout<<"Sum of matrix \n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<sum[i][j];

//         }
//         cout<<endl;

//     }

// }

