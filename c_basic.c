/*
  how to pass variables within functions
*/

double variable_1; // what is the difference between here and variables initialized inside "int main()"?
double variable_2;

double myfunction(double variable_1, double variable_2)
{
  double variable_3 = variable_1 + variable_2;
  return variable_array[3] = {variable_1, variable_2, variable_3}; // how to return array?
}

int main()
{
  double variable_1; // what is the difference here compare with the first definition?
  double variable_2;
  result[3] = myfunction(variable_1, variable_2);
    
}



/*
  basic pointer usage
*/
#include <stdio.h>

void myfunction(double *variable)
{
    *variable = 3;
}

int main()
{
    double variable = 1;
    myfunction(&variable);
    printf("%f\n", variable);
}
