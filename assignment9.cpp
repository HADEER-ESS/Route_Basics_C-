#include <iostream>
#include <exception>
using namespace std;




//Q1
//Create function take 2 params of any type then return the max (Template)

/*
template <typename Ty>

Ty get_max(Ty num1 , Ty num2){

    if(num1 > num2) return num1;
    return num2 ;
}

int main(){

    cout << get_max(1,9) << endl;

    cout << get_max(7.3 , 3.7) << endl;

    cout << get_max("Ali" , "3lwan") << endl;
}
*/

///////////////////////////////////////////////////////////////////////////////////////////////

//Q2
//Create function take 2 params of any type then swap them and pass data by
//parameters (Template)

/*
template <typename Ty>

void swap_fun(Ty& param1 , Ty& param2){
    Ty temp = param1;

    param1 = param2;

    param2 = temp;
}

int main(){

    int x = 7 , y = 9;

    double a = 4.5 , b = 1.4;

    string s = "ali" , z = "3lwan";

    swap_fun(x,y);
     swap_fun(a,b);
      swap_fun(s,z);

    
    cout << "New : " << endl
        << "x " << x << "\t y " << y <<endl
        << "a " << a << "\t b " << b <<endl
        << "s " << s << "\t z " << z <<endl;
}

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Q3
/*
Create Calculator class contains 2 data members with the same template data
type and contains 4 static methods add(), subtract(), multiply() and divide().
*/
/*
template <class Ty1>

class Calculator{

private:
    Ty1 first, second;
        
public:
    
    static Ty1 add(Ty1 first , Ty1 second){
        return first + second;
    }

    static Ty1 subtract(Ty1 first , Ty1 second){
        return first - second;
    }

    static Ty1 multiply(Ty1 first , Ty1 second){
        return first - second;
    }

    static Ty1 divide(Ty1 first , Ty1 second){
        if(second == 0){
            cout << "Can not divide by 0\n" ;
            return 0;
        }
        else{
            return first / second ;
        }
    }
};


int main(){
    
    cout << "Add :\t " << Calculator<int>::add(7,5) << endl;

    cout << "subtract :\t " << Calculator<int>::subtract(7,5) << endl;

    cout << "multiply :\t " << Calculator<int>::multiply(7,5) << endl;

    cout << "divide :\t " << Calculator<double>::divide(7,5) << endl;
    
}

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Q4
/*
Create divide function which take (int x, int y) and return y/x
Then solve the case of (y=0) by throw your defined exception,
And also solve the case of (y<0) by throw another defined exception.
*/
/*
class EqualZero :public exception{

    public:

    char const*
    what() const throw()
    { return "Can not divide by zero";  }


};

class NegativeDivide :public exception{

    public:

        char const*
    what() const throw()
    { return "Can not divide by negative value";  }


};

int divide_fun(int x , int y ){
    return x / y;
}

int main(){

    int x, y;

    cin >> x >> y;

    try
    {
        if(y == 0){
            throw EqualZero();
        }
        else if(y < 0){
            throw NegativeDivide();
        }
        else{
            cout << x / y << endl;
        }
    }
    catch(const exception& e)
    {
        cout << e.what() << '\n';
    }
    

}
*/