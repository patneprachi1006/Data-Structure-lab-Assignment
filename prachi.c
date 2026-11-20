// Roll NO. CO2115
#include<stdio.h>
int main()
{
 int  roll_no[30],i, j, n, k, temp, insert, choice, del; 
 do
 {
   printf("\n=============MENU===============\n");
   printf("\n 1. Insert No. Students \n 2. Sort In Ascending order and Display intermediate passes \n 3. Display Roll No\n 4. Exit \n");
   printf("Enter your choice:- ");
   scanf("%d",&choice);
  
   switch(choice)
   {
    case 1: //Insert elements
      printf("Enter the size of the Student:- ");
      scanf("%d",&n);
      printf("Enter the Roll No: ");
      for(i = 0 ; i <n ; i++)
       {
        scanf("%d",&roll_no[i]);
       }
      break;
      
      case 2: // Bubble Sort and print intermediate passes
      printf("Intermediate Passes");
      for(i=0;i<n-1;i++)
       {
          for(j = 0 ;j <n-i-1; j++)
             {
               if(roll_no[j]>roll_no[j+1])
               { 
                 temp=roll_no[j];
                 roll_no[j]=roll_no[j+1];
                 roll_no[j+1]=temp;
               }
            }
            printf("\nPass %d : ",i+1);
            for(k=0;k<n;k++)
            {
            printf("\t%d",roll_no[k]);
          
            }
       }
      break;
    case 3:   //display sorted roll numbers
        printf("\nRoll Numbers are : \n");
        for(i=0;i<n;i++)
        {
            printf("\t%d",roll_no[i]);
        }
    break;
    
    case 4:-//Exit
    printf("\nExiting the program...\n");
    break;
    
    default:
    printf("\nInvalid Choice\n");
   }
   
   }while( choice != 4);
   return 0;
}
    
/*  =================OUTPUT===========
Practicle No.2
Name: Prachi Dinesh Patne
Div: B     Batch: B3
Roll No:CO2115

student@TCOERCL-VI-24:~$ cc prachi.c
student@TCOERCL-VI-24:~$ ./a.out

=============MENU===============

 1. Insert No. Students 
 2. Sort In Ascending order and Display intermediate passes 
 3. Display Roll No
 4. Exit 
Enter your choice:- 1
Enter the size of the Student:- 6
Enter the Roll No: 30
21
15
62
45
26

=============MENU===============

 1. Insert No. Students 
 2. Sort In Ascending order and Display intermediate passes 
 3. Display Roll No
 4. Exit 
Enter your choice:- 3

Roll Numbers are : 
	30	21	15	62	45	26
=============MENU===============

 1. Insert No. Students 
 2. Sort In Ascending order and Display intermediate passes 
 3. Display Roll No
 4. Exit 
Enter your choice:- 2
Intermediate Passes
Pass 1 : 	21	15	30	45	26	62
Pass 2 : 	15	21	30	26	45	62
Pass 3 : 	15	21	26	30	45	62
Pass 4 : 	15	21	26	30	45	62
Pass 5 : 	15	21	26	30	45	62
=============MENU===============

 1. Insert No. Students 
 2. Sort In Ascending order and Display intermediate passes 
 3. Display Roll No
 4. Exit 
Enter your choice:- 3

Roll Numbers are : 
	15	21	26	30	45	62
=============MENU===============

 1. Insert No. Students 
 2. Sort In Ascending order and Display intermediate passes 
 3. Display Roll No
 4. Exit 
Enter your choice:- 4

*/
