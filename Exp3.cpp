// NAME - Pranjal Panwar 
// PRN - 23070123164
// EXPERIMENT -3  
#include<iostream> 
using namespace std; 
int main()  
{ 
int a, b, sum, diff, prod, div, mod, c, d=50, x, y, z; 
cout<<"Enter a number: ";                               // OUTPUT - Enter a number: 2
cin>>a; 
cout<<"Enter another number: ";                         // Enter another number: 28
cin>>b; 
sum=a+b;   
cout<<"Sum is: "<<sum<<"\n";                            // Sum is: 30
diff=a-b;   
cout<<"Difference is: "<<diff<<"\n";                    // Difference is: -26
prod=a*b;   
cout<<"Product of the numbers is: "<<prod<<"\n";        // Product of the numbers is: 56
div=a/b;   
cout<<"Quotient is: "<<div<<"\n";                       // Quotient is: 0
mod=a%b;  
cout<<"Modulus of the numbers is: "<<mod<<"\n";         // Modulus of the numbers is: 2
cout<<"Enter any number: ";                             // Enter any number: 7
cin>>c; 
cout<<"New increment value of c is:  "<<++c<<"\n";      // New increment value of c is:  8
cout<<"New decrement value of c is: "<<-- c<<"\n";      // New decrement value of c is: 7
cout<<"If the numbers are equal."<<(x=a==b)<<"\n";      // If the numbers are equal.0
cout<<"a is greater than b."<<(y=a>b)<<"\n";            // a is greater than b.0
cout<<"a is smaller than b."<<(z=a<b)<<"\n";            // a is smaller than b.1
cout<<"Logical AND operator: "<<(a&&b)<<"\n";           // Logical AND operator: 1
cout<<"Logical OR operator: "<<(a||b)<<"\n";            // Logical OR operator: 1 
cout<<"Logical NOT operator: "<<!(a>b)<<"\n";           // Logical NOT operator: 1
return 0; 
}
