#include <stdio.h>

// TODO : int to string converter
// TODO : making custom sprintf function

void ToString(int n,char data[],int len)
{
  // Writing Integer type to FILE named 'temp.t'
  FILE *fp;
  fp = fopen("temp.t","w");
  fprintf(fp,"%d",n);
  fclose(fp);

  // Opening the file 'temp.t' and reading data and putting in 'data'
  FILE *r;
  r = fopen("temp.t","r");
  fgets(data,len+1,r);
  fclose(r);

  // Removing the trace that any external files has been opened during
  // the execution of the function
  remove("temp.t");
}

int main(int argc, char** argv)
{
  char mynumber[3];
  ToString(952,mynumber,3);
  printf("%s",mynumber);
  
  return 0;
}







