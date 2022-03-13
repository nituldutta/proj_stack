/* write a program to perform following operations on an array of integers using sub-program. 
   But we put certain restrictions to the problem.
   2. printStack() ---> do not pass number of element to print elements of the array
   3. push(int x) ---> should add elements in the first avaulable place
   4. int pop() ---> delete the last element and return the deleted element
*/

#include<stdio.h>
//int  a[20];
int  stack[20];
//int n=0;
int tos=0; //tos top of stack
//void addElement(int x); /* . */
void push(int x); /* . */
//int  delElement(); /* . */
int  popde(); /* . */
//void printElement();       /* function to print elements of the array */
void printStack();       /* function to print elements of the array */


void printStack()
  {
      for(int i=tos-1;i>=0;i--)
        {
        printf(" %d \n",stack[i]); 
        }  
      printf("\n");  
  }//end printElement()   
void push(int x)
   {
       stack[tos]=x;  
       tos=tos+1;
   }//end of 
int pop()
  {
    int x=stack[tos];
    tos=tos-1;
    return(x);
  }//end delElement()   