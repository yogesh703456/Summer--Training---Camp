// program 1: point address
// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
    
    
//     int *p=&a;
//     cout<<"address of a is"<<p;
//     return 0;
// }


// program 2:swapping two numbers using pointer
// #include <iostream> 
// using namespace std;
// int main(){
//     int a=10;
//     int b=15;
//     int *p1=&a;
//     int *p2=&b;
//     int temp;
//     temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//     cout<<"value of a & b after swaping is "<<a<<" and "<<b;
//     return 0;
// }

// program 3: array sum using pointer 

    // #include <iostream>
    // using namespace std;
    // int main(){
    //     int arr[5]={1,2,3,4,5};
    //     int *p=arr;
    //     int sum=0;
    //     for(int i=0;i<5;i++){
    //         sum+=*(p+i);
    //     }
    //     cout<<"sum of array is "<<sum;
    //     return 0;
    // }

    // program 4 : largest element in array using pointer
    // #include <iostream>
    // using namespace std;
    // int main(){
    //     int arr[17]={564,56,78,8,4,3,2,6,7,9,4342,34,23,45,67,89,90};
    //     int *p=arr;
    //     int largest=*p;
    //     for(int i=0;i<17;i++){
    //         if(*(p+i)>largest){
    //             largest=*(p+i);
    //         }
    //     }
    //     cout<<"largest element in array is "<<largest;
    //     return 0;
    // }

    // program 5:reverse an array using pointer
    // #include <iostream>
    // using namespace std;
    // int main(){
    //     int arr[10]={23,335,567,6345,87858,497,567,78,7864,22};
    //     int *p=arr;
    //     cout<<"array before reversing is ";
    //     for(int i=0;i<10;i++){
    //         cout<<*(p+i)<<" ";
    //     }
    //     cout<<endl;
    //     cout<<"array after reversing is ";
    //     for(int i=9;i>=0;i--){
    //         cout<<*(p+i)<<" ";
    //     }
    //     cout<<endl;
    //     return 0;
    // }

 
// program 6:traverse an array using pointer

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to the first element

    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;  // Move to the next element
    }

    return 0;
}