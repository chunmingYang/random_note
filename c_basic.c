/*
  basic variables initialization and function call out format
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
  basic pointer usage 01
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

/*
  basic pointer usage 02 reference from "basic pointer 01" can use to return array[i]
*/

void function_returnArray(double *var[0], double *var_2)
{
  // return array instead of return a single var
  // return var;
  
}

int main()
{
  double var[3];
  function_returnArray(&var[0], &var[1], &var[2]);
  
}
