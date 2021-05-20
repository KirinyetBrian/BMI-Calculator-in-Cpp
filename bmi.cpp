#include <iostream>
#include <cmath>
using namespace std;

//functions for fetching weigh and height
int fetch()
{

double bmi;
double w,h;
cout<< "insert weight in Kilograms" <<endl;

cin >>w;

cout <<"insert height in inches" <<endl;
cin >>h;



// dispaly weight and height
cout<<"------------------------------------------------------------------------------" <<endl;
cout<< "WEIGHT = " << w <<"Kgs" <<endl;
cout<< "HEIGHT = " << h <<"inches" <<endl;


//convert height from inches to metres
h=h*0.025;


//calculating  BMI
 bmi = w/(h*h);

cout<<"------------------------------------------------------------------------------" <<endl;

cout<<"The BMI IS:" <<bmi <<endl;


cout<<"------------------------------------------------------------------------------" <<endl;
//if statement for decision making

if(bmi >=18.5 && bmi <=25)
{
cout<< "YOU HAVE OPTIMAL WEIGHT" ;

}
if (bmi<18.5)
{
cout<< "YOU ARE UNDER WEIGHT" ;

}
else if (bmi>25)
{
cout<< "YOU ARE OVERWEIGHT" ;

}
}

int main ()
{

fetch();
return 0;


}
