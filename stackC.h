/* write a program to perform following operations on an array of integers using sub-program. 
   But we put certain restrictions to the problem.
   2. printStack() ---> do not pass number of element to print elements of the array
   3. push(int x) ---> should add elements in the first avaulable place
   4. int pop() ---> delete the last element and return the deleted element
*/

#include<stdio.h>
char  stack[20];
int tos=0; //tos top of stack
void push(char x); /* . */
char  pop(); /* . */
int empty();
void push(char x)
   {
       stack[tos]=x;  
       tos=tos+1;
   }//end of 
char pop()
  {
    char x=stack[tos];
    tos=tos-1;
    return(x);
  }//end   
int empty()
  {
    if (tos==0) 
      return 1;
    else
      return 0;        
  }
  