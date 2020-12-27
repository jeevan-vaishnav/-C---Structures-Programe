
/*
Author : Jeevan Vaishnav
Date : 27/12/2020
Program name : Structure in C Language
*/


#include <stdio.h>

// no memory is consumed for definition of structure.
struct date{
  int d,m,y;  
};


void main()
{
  struct date today,d2;
  //value definition
  today.d=27;
  today.m=12;
  today.y=2020;
  // value initialization by me  
  printf("Value init by programer :%d/%d/%d\n",today.d,today.m,today.y);
  // data input from user 
  //like this 27/12/2020
  printf("Enter today's date:\n");  
  scanf("%d/%d/%d",&today.d,&today.m,&today.y);
  printf("%d/%d/%d",today.d,today.m,today.y);
    
 
 // value store from first oject 
 d2 = today;
 printf("\nD2 = %d/%d/%d",d2.d,d2.m,d2.y);
 
 
}
