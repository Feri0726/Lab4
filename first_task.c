/* Task description:

Write functions that receive a real number parameter, and return:

    cube() – its third power,
    absolute() – its absolute value (there is a fabs() library function but do not use it this time)! 

Write a program that tabulates the values of a, a3, |a| and sin(a) using 4 decimal digits after the decimal point from a = −1 to +1, stepping by 0.1! Include math.h to use sin.

*/
#include <stdio.h>
#include <math.h>

double cube(double a)//<-- Function header, input parameters and output type in this form oType NAME(iType1 iName1,iType2 iName2,...)
{//here starts what to do
  double al = 1.0;
  for (int i = 0; i < 3;i++){
    al = al * a;
  }
  return al;
}
//reurn with the result of the funcion (if any)//that closes the function

/*Write the other functions here:*/
double absolute(double a)
{
  
  if (a >= 0){
    double abs = a;
  return abs;}
  else{
    double abs = -a;
    return abs;
  }

}
double sinu(double a)
{
  double val = sin(a);
  return val;
}

int main() //main is a function!
{
  printf("Give");
  double a;
  scanf("%lf", &a);
  printf("The cube of %f is %f, The absolute value of %f is %f\n", a, cube(a), a, absolute(a));
  double n = -1;
  while (n <= 1){
    printf("%.4f\n", sinu(n));
    n += 0.1;
  }

//call the functions in a loop to print the results in the required manner

  return 0; //it returns an integer (as promised in the header) which is 0 for now!
}
