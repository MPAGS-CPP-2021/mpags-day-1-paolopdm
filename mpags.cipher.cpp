#include <iostream>
#include <string>
int main ()
{
    // this is a comment
    /* this is a multiline    
    comment*/

    std:: cout << "Hello World!\n" ;

    // Ex. 2
    // create integer variable
    int a{1}; 

    // modify integer variable
    a = 3;

    // output integer variable
    std:: cout << a << std::endl;

    // create a double variable
    double b{2.3};

    // output double variable
    std:: cout <<b<< std::endl;

    // initialise another integer from this double
    b=2;

    // note that the output from the compiler for 'b' is still 2.3

    // Ex.3
    // Create const double and output this
    const double c {1.2};
    std:: cout <<c<< std::endl;

    // create integer variable then modify it (then make  variable const and try to compile)
    //const int d{4};
    int d {4};
    d=5;

    // error message appeared : 'variable 'd' declared constant

    // create, initialise and output a string variable
    std:: string text {"Paolo"};
    std:: cout <<text<< "\n";
    //return 0;


    // Ex.4
    // create double and integer variables, output product
    double x {1.2};
    int y {2};
    int w {3};

    std:: cout <<x*y<< std::endl;

    // divide a double and an int and then two ints
    std:: cout <<x/y<< std::endl;
    std:: cout <<y/w<< std::endl;

    // note that the output for the division of the two ints is '0'

    // create a string variable
    std:: string text2 {"abcdefg"};

    // create a char variable, assign one of the letters in string and output
    char letter {text2[3]};
    std:: cout <<letter<< std::endl;

    // note that arrays start with number 0
}