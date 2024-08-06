# To study and implement Operators in C++

Aim -> To study and implement Operators in C++

Theory -> Opeartors in C++ are the symbols that are used two perform some mathematocalor logical operations on the variables.
They are classified into 6 types: 1. Arithematic Operators (+, -, *, /, ++, --)
2. Assignment Operators (=, +=, -=, *=, /=)
3. Logical Operators (&&, ||, !)
4. Relational Operators (==, >, >=, <=, <, !=)
5. Ternary or Conditional Operators
6. Bitwise Operators (&, |, ^, <<, >>, ~)
Code:
```
// NAME - SHIVENDRA DWIVEDI
// PRN - 23070123122
// EXPERIMENT -3  

#include<iostream> 
using namespace std; 
int main()  
{ 
int a, b, sum, diff, prod, div, mod, c, d=50, x, y, z; 
cout<<"Enter a number: ";                               
cin>>a; 
cout<<"Enter another number: ";                         
cin>>b; 
sum=a+b;   
cout<<"Sum is: "<<sum<<"\n";                           
diff=a-b;   
cout<<"Difference is: "<<diff<<"\n";                    
prod=a*b;   
cout<<"Product of the numbers is: "<<prod<<"\n";     
div=a/b;   
cout<<"Quotient is: "<<div<<"\n";                      
mod=a%b;  
cout<<"Modulus of the numbers is: "<<mod<<"\n";         
cout<<"Enter any number: ";                             
cin>>c; 
cout<<"New increment value of c is:  "<<++c<<"\n";     
cout<<"New decrement value of c is: "<<-- c<<"\n";      
cout<<"If the numbers are equal."<<(x=a==b)<<"\n";      
cout<<"a is greater than b."<<(y=a>b)<<"\n";            
cout<<"a is smaller than b."<<(z=a<b)<<"\n";           
cout<<"Logical AND operator: "<<(a&&b)<<"\n";          
cout<<"Logical OR operator: "<<(a||b)<<"\n";            
cout<<"Logical NOT operator: "<<!(a>b)<<"\n";          
return 0; 
}
```
Output:
![image](https://github.com/user-attachments/assets/19223a7a-7c02-48ec-a1e0-d3166e62f2c4)


Conclusion -> I learnt about using perators in C++
