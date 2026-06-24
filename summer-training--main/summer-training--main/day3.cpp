Day 3 Questions ....



// program 1: print 1 to n.


#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }

}



// program 2....sum of n number.

#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Total sum : "<<sum;

}



// program 3....factorial.


#include<iostream>
using namespace std;
int main(){
    int n;
    int fac=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        fac=fac*i;
    }
    cout<<"The factorial : "<<fac;

}



// program 4....reverse number.



#include<iostream>
using namespace std;
int main(){
    int n;
    
    int digit;
    cout<<"Enter the number : ";
    cin>>n;
    
    int rev=0;
    for(int i=n;i>0;){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<rev;
}
    



// program 5....count digit.


#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
   
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=n;i>0;){
       
        count++;
        n=n/10;
    }
    cout<<count;


}



// program 6....find prime number.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"It is a prime number";
    }
    else{
        cout<<"It is not a prime number ";
    }

}
