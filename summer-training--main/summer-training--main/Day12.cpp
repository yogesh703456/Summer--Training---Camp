#include<iostream>
#include<string>
using namespace std;

//program 1:student info. by class  

// class student{
//     string name;
//     int rollno ;
    
//     float marks;
// public:
//     int input(){
//         cout << "enter the name of student :";
//         cin >> name>>rollno >>marks;
//     }
//     int  output(){
//         cout <<"---details of student----\n";
//         cout<<"\n"<<name;
//         cout<<"\n"<<rollno;
//         cout<<"\n"<<marks;
//     }

// };

// int main(){
//     student s;
//     s.input();
//     s.output();
//     return 0;
// }

// program 2:employee info. by constuctor and display() 

// class Employee
// {
// private:
//     int id;
//     string name;

// public:
//     // Constructor
//     Employee(int empId, string empName)
//     {
//         id = empId;
//         name = empName;
//     }

//     // Display function
//     void display()
//     {
//         cout << "Employee ID   : " << id << endl;
//         cout << "Employee Name : " << name << endl;
//     }
// };

// int main()
// {
//     int id;
//     string name;

//     cout << "Enter Employee ID: ";
//     cin >> id;

//     cin.ignore(); // Ignore newline character
//     cout << "Enter Employee Name: ";
//     getline(cin, name);

//     // Creating object using constructor
//     Employee emp(id, name);

//     // Display employee details
//     emp.display();

//     return 0;
// }


// program 3: rectangle area

// class ractangle {
//     public:

//     float length;
//     float widgth;
//     float a;
//     public:
//     void setdata(){
//         cout <<"enter the length and widgth of ractangle:";
//         cin>>length>>widgth;
//     };
//     public:
//     int area(){
//         a = length*widgth;
//         cout<<"area of ractangle:"<<a<<endl;
//     };
// };
// int main(){
//     ractangle t;
//     t.setdata();
//     t.area();

//     return 0;

// }

// program 4:bank account
// class account{
//     public:
//     float amount,totelbalance;
//     float currentbalance,previousbalance=10000;
    
//     int deposit(){
    
        
//         cout<<"enter the amount of deposit:";
//         cin>>amount;
//         cout<<"you can receive your from cash slot"<<endl;
//         currentbalance=previousbalance + amount;
//         cout<< "current balance:"<<currentbalance;
//     };
//     int withdraw(){
        
        
//         cout <<"entre the amount for withdraw money ";
//         cin >>amount;
//         cout <<"current account balance:"<<previousbalance-amount;


//     };



// };
// int main(){
//     account a;
   
//     int c;
//     cout<<"choose what you want to do\n";
//     cout<<"1.deposit   2.withdraw";
//     cin>>c;
//     switch (c)
//     {
//     case 1:
//         a.deposit();
//         break;
//     case 2:
//         a.withdraw();
            
    
//     default:
//         break;
//     }
    
//     return 0;
// }


// program 5: car + static


// class Car
// {
// public:
//     static int count;

//     // Constructor
//     Car()
//     {
//         count++;
//     }

//     // Display total objects
//     void display()
//     {
//         cout << "Total Car Objects Created = " << count << endl;
//     }
// };

// // Initialize static variable
// int Car::count = 0;

// int main()
// {
//     Car c1;
//     Car c2;
//     Car c3;

//     c3.display();

//     return 0;
// }

// program 6:box+this


// class Box
// {
// private:
//     float length;

// public:
//     void setLength(float length)
//     {
//         this->length = length;
//     }

//     void display()
//     {
//         cout << "Length = " << length << endl;
//     }
// };

// int main()
// {
//     Box b;

//     b.setLength(12.5);
//     b.display();

//     return 0;
// }