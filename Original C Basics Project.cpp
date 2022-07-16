#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

void fun(void);
void funt(int,int);
int funct(void);
int function(int,int);
void swap1(int,int);
void swap2(int *,int *);
int fib(int);
struct products
{
	char name[15];
	int id;
	float price;
};


main()
{/*main*/
	printf("\t\t\t>>>>   Hello.This is a program that combines all the C lessons <<<<\n\t\t\t\t\t>>>>   What would you like to do? <<<<");
	
 	int a,b,c,choice,age,num,count,rem,sum,n,i,j,fact,temp,rev,x,max,min,mid,key,loc,beg,last,len,*p;
 	int array[50];
 	char repeat;
 
	 
	 	do{
	 		printf("\n\n\t\t\t\t\tPress\n\t\t\t\t\t1 --> Basics of C\n\t\t\t\t\t2 --> Control Structure\n\t\t\t\t\t3 --> Functions\n\t\t\t\t\t4 --> Arrays and Pointers\n\t\t\t\t\t5 --> Strings\n\t\t\t\t\t6 --> Structres and Unions");
	 		printf("\n\n\t\t\t\t\tEnter your choice:");
		 	float nums;
		 	char character,str[30];
			
		
			
				scanf("\n\t%d",&choice);
				switch(choice)
				{
				
				case 1:printf("\n\n\n1--> Introduction\n2 --> Phases of a program\n3 --> Flow Chart\n4 --> Identifiers\n5 --> Keywords\n6--> Data Types\n7 --> Operators");
						int ch16;
						printf("\nEnter your choice:");
						scanf("%d",&ch16);
						switch(ch16)
						{
							case 1:printf("\n//t/t/t/t***INTRODUCTION TO C***\n");
									printf("The C Language was developed by Dennis Ritche in 1972 as a programming language to write O.S.\nIt's features include low level access to memory, simple set of keywords which a make it suitable for system programming like Operating sysrem and compiler development.\n");
								break;
								
							case 2:printf("\n\t\tThese are the Phases of a program\n\n1)Editor - Program is created in editor and is stored in the disk.\n2)Preprocessor - It processes the code\n3)Compiler - It creates an object code and stores it on the disk.\n4)Linker - It links the object code with all the libraries.\n5)Loader - It loads the program into the memory.\n6)Disk\n7)CPU - It takes the input, processes it and gives us an output.");
								
								break;
								
							case 3:printf("\n--> Oval : It represents the start or an end of a program.\n--> Arrow : it indicates the direction of te logical flow.\n--> Parallelogram : Either an input or an input is denoted with it.\n--> Rectangle : It denotes a process.\n--> Rhombus : It is used for decision making");
								
								break;
								
							case 4:printf("\nThese are user defined words, they are the names given to the entities like variables, arrays, functions etc...\nexample : int a,float b,char c");
								
								break;
								
							case 5:printf("\nThese are the reserved words whose meaning has already been explained to the compiler.\nThere are 32 keywords in ANSI C");
								
								break;
								
						/*	case 6:
								
								break;
								
							case 7:
								
								break;*/
								
						}
						
						
						
						
						break;
						
				
				case 2:printf("\n1 --> Ladder if else\n2 --> Nested if else\n3 --> Switchcase\n4 --> Factorial\n5 --> Leap year\n6 --> Prime number\n7 --> Sum of digits of a number\n8 --> Sum of cubes of digits\n9 --> Amstrong\n10 --> Reverse of a number\n11 --> Palindrome\n12 --> For loop\n13 --> While loop");
						int ch1;
						printf("\n\t\t\tPlease enter your choice :");
						scanf("%d",&ch1);
						switch(ch1)
						{
								case 1:printf("\nThis is to check the greatest among the three numbers entered using 'Ladder If Else'.\nPlease enter three numbers:");
									scanf("%d %d %d",&a,&b,&c);
									if(a>b && a>c)
									printf("%d is the greatest",a);
									else if(b>a && b>c)
									printf("%d is the greatest",b);
									else
									printf("%d is the greatest",c);
									break;
								
								case 2:printf("\nThis is to check the age of a person\nPlease enter your age:");
									scanf("%d",&age);
									if(age>1 && age<18)
									printf("\nYou are a teenager.");
									else if(age>=18 && age<60)
									printf("\nYou are an adult.");
									else if(age>=60)
									printf("\nYou are an old person.");
									else
									printf("\nPlease enter correct age.");
								break;
								
								case 3:int ch2;
									printf("\nThis is to see the working of a switch case.\nA switch case to calculate the area's of some shapes");
									printf("\n1--> to calculate the area of a rectangle\n2--> to calculate the area of a circle\n3--> to calculate the area of a square\n4--> to calculate the area of a rectangle.");
									printf("\nEnter your choice:");
									scanf("%d",&ch2);
									switch(ch2)
										{
										case 1:int a,b,area;
										printf("\n\nenter the length and breath of the rectangle:");
										scanf("%d %d",&a,&b);
										area=a*b;
										printf("the area of the rectangle is %d",area);
										break;
										
										case 2:int r;
										printf("\n\nenter the radius of the circle:");
										scanf("%d",&r);
										area=3.14*r;
										printf("\nthe area of the circle is %d",area);
										break;
										
										case 3:int l;
										printf("\n\nEnter the length of the square:");
										scanf("%d",&l);
										area=l*l;
										printf("\nthe area of the square is %d",area);
										break;
										
										case 4:int base,height;
										printf("\n\nEnter the base and the height of the right triangle respectively:");
										scanf("%d %d",&base,&height);
										area=((base*height)/2);
										printf("\nthe area of the right triangle is %d ",area);		
										break;
										}
										break;
										
								case 4:printf("\nEnter the number to find it's factorial:");
										fact=1;
										scanf("%d",&n);
						   				for(i=1;i<=n;i++)
						   				{
						   					fact=fact*i;
										}
										printf("\nThe factorial of the number is %d",fact);
										break;
										
								case 5:printf("\nEnter a number to check if it is leap year or not:");
									int year;
									scanf("%d",&year);
									if(  ( year>1000 && year%4==0)||(year<1000 && year%100==0 && year%400==0)  )
						   			printf("\nThe year %d is leap year",year);
						   			else
						   			printf("\nIt is not a leap year.");
						   			break;
								
								case 6:printf("\nEnter a number to check if it is a prime number or not:");
									count=0;
									scanf("%d",&num);
									for(i=1;i<=num;i++)
									{
										if(num%i==0)
										count=count+1;
									}
									if(count==2)
									printf("\nThe number %d is prime",num);
									else
									printf("\nThe number is not prime.");
									break;
									
								case 7:printf("\nEnter a number to find the sum of it's digits:");
									scanf("%d",&num);
									sum=0;
									while(num>0)
									{
										rem=num%10;
										sum=sum+rem;
										num=num/10;
									}
									printf("\nThe sum of the numbers is %d",sum);
									break;
								
								case 8:printf("\nEnter a number to find the sum of cubes of digitits of the number:");
									scanf("%d",&num);
									sum=0;
									while(num>0)
									{
										rem=num%10;
										sum=sum+(rem*rem*rem);
										num=num/10;
									}
									printf("\nThe sum of the numbers is %d",sum);
									break;
								
								case 9:printf("\nEnter a number to check it it is amstrong or not:");
									scanf("%d",&num);
									sum=0;
									temp=num;
									while(num>0)
									{
										rem=num%10;
										sum=sum+(rem*rem*rem);
										num=num/10;
									}
									if(sum==temp)
									printf("\nThe number %d is amstrong",num);
									else
									printf("\nThe number is not amstrong");
									break;
									
								case 10:
									rev=0;
									printf("\nEnter a number to obtain the reverse of the number:");
									scanf("%d",&num);
									while(num>0)
									{
										rem=num%10;
										rev=rev*10+rem;
										num=num/10;
									}
									printf("\nThe reverse of the number is %d",rev);
									break;
									
								case 11:
									printf("\nThis is to check if the number is palindrome or not:");
									scanf("%d",&num);
									rev=0;
									temp=num;
									while(num>0)
									{
										rem=num%10;
										rev=rev*10+rem;
										num=num/10;
									}
									if(rev==temp)
									printf("\n%d is palindrome.",temp);
									else
									printf("\n%d is not palindrome.",temp);
									break;
									
								case 12: 
									printf("The for loop is used when the number of repetitions are known\n for example:\n\n"); 
									for(i=0;i<=100;i++)
									printf ("I love you  ");
									printf("\n\t\t\t This message is printed 100 times");
									break;
									
								case 13 : 
									printf("The while loop is used when the number of iterations are not known \nfor example:");
									printf("Please enter the number of times you want to repeat the loop");
									scanf("%d",&n);
									for(i=0;i<=n;i++)
									printf("I love you  ");
									printf("\n\t\t\t This message is printed %d times",n);
									break;
									
								default:printf("please select any case from 1-11 only.....");
								break;
					    }
				    	break;
				
				case 3:printf("\n1 --> Types of Functions\n2 --> Function Calling Methods\n3 --> Fibonacci Series\n4 --> ");
						int ch3;
						printf("\n\t\t\tPlease enter your choice:");
						scanf("%d",&ch3);
						switch(ch3)
						{
							case 1:printf("\nThese are the types of the functions.\nPlease select the type of funtion you want to choose");
							printf("\n\n1 --> functions without arguments and without return type\n2 --> Functions without arguments with return type\n3 --> Function with argument without return type\n4 -- >Function with argument with return type");
									printf("\nPlease enter your choice:");
									int ch4;
									scanf("%d",&ch4);
									switch(ch4)
									{
										case 1:printf("\n\n\nThis is a function without arguments and without return type.");
											fun();
											break;
											
										case 2:printf("\n\n\nThis is a function with arguments and without return type.");
											funt(a,b);
											break;
											
										case 3:printf("\n\n\nThis is a function with arguments and without return type.");
											x=funct();
											printf("\nThe sum of the numbers is %d",x);
											break;
									
										case 4:printf("\n\n\nThis is a function with arguments and with return type.");
											x=function(a,b);
											printf("\nThe sum of the numbers is %d",x);
											break;
											
									}	
								break;
								
							case 2:printf("\nThere are two types of calling methods which are call by value and call by reference");
								printf("\n\n\n1 --> Call by value\n2 --> Call by reference");
								int ch5;
								printf("\nPlease enter your choice:");
								scanf("%d",&ch5);
								switch(ch5)
								{
									case 1:printf("\nEnter the main values:");
									scanf("%d %d",&a,&b);
									printf("\nThe main values are \t%d\t%d",a,b);
									swap1(a,b);
									break;
									
									case 2:printf("\nEnter the main values:");
									scanf("%d %d",&a,&b);
									swap2(&a,&b);
									printf("\nThe main values are \t%d\t%d",a,b);
									break;
								}
								break;
								
								
							case 3:printf("\nFibonacci series using functions and without functions");
								printf("\n\n\n1 --> fibonacci series with functions(i.e with recursion)\n2 --> fibonacci series without functions(i.e without recursion)");
								int ch6;
								printf("\nEnter your choice");
								scanf("%d",&ch6);
								switch(ch6)
								{
									case 1:printf("\nEnter the number of terms in the series:");
									scanf("%d",&n);
									for(i=0;i<n;i++)
									{
										x=fib(i);
										printf("\n\n%d\t",x);
									}
							    	break;
										
									case 2:printf("\nEnter the number of terms in the series:");
									scanf("%d",&n);
									a=0;
									b=1;
									printf("\n\n%d\t%d",a,b);
									for(i=0;i<=n-2;i++)
									{
										c=a+b;
										a=b;
										b=c;
										printf("\t%d",c);
									}
									break;
								}
								break;
								
								
							case 4:printf("\n3");
								break;
								
							default:printf("Enter case 1-4 only");
								break;
						}
						break;
						
				case 4:printf("\n1 -->Arrays\n2 -->Pointers");
						int ch7;
						printf("\n\t\t\tPlease enter your choice:");
						scanf("%d",&ch7);
						switch(ch7)
						{
								case 1:printf("\n1 --> Addition of elements\n2 --> Adding elements(odd or even elements)\n3 --> Copying the elements\n4 --> Maximum or minimum element\n5 --> Searching an element(Linear or Binary)\n6 --> Modifying an array(Insertion or Deletion)\n7 --> Bubble sort");
									int ch8;
									printf("\nPlease enter your choice:");
									scanf("%d",&ch8);
									switch(ch8)
									{
										case 1:int arr[50];
												sum=0;
												printf("\n\nEnter the five array elements:");
												for(i=0;i<5;i++)
												scanf("%d",&arr[i]);
												for(i=0;i<5;i++)
												{
													sum=sum+arr[i];
												}
												printf("\nThe sum of the five elements is %d",sum);
												break;
												
										case 2:int ch9;
												printf("\n1 --> Adding odd elements\n2 --> Adding even elements");
												printf("\nWhat would you like to do?");
												scanf("%d",&ch9);
												switch(ch9)
												{
													case 1:int arr[100];
															sum=0;
															printf("\n\nEnter six array elements:");
															for(i=0;i<6;i++)
															scanf("%d",&arr[i]);
															for(i=0;i<6;i++)
															{
																if(arr[i]%2!=0)
																sum=sum+arr[i];
															}
															printf("\nThe sum of the odd elements is %d",sum);
															break;
													
													
													case 2:sum=0;
															printf("\n\nEnter six array elements:");
															for(i=0;i<6;i++)
															scanf("%d",&arr[i]);
															for(i=0;i<6;i++)
															{
																if(arr[i]%2==0)
																sum=sum+arr[i];
															}
															printf("\nThe sum of the even elements is %d",sum);
															break;
															
													default:printf("\nPlease enter case one or case two only.");
															break;
												}
												break;
												
												
										case 3:int brr[100];
												printf("\n\nEnter the five array elements so as to copy them to another array:");
												for(i=0;i<5;i++)
												scanf("%d",&arr[i]);
												for(i=0;i<5;i++)
												{
													brr[i]=arr[i];
												}
												printf("\nThe five elements of the copied array are:");
												for(i=0;i<5;i++)
												printf("%d",brr[i]);
												break;
												
										case 4:int ch10;
												printf("\n1 --> Maximum element\n2 --> Minimum element");
												printf("\nEnter your choice:");
												scanf("%d",&ch10);
												switch(ch10)
												{
													case 1:printf("\nEnter any 6 array elements to find the maximum among them:");
															for(i=0;i<6;i++)
															scanf("%d",&arr[i]);
															max=arr[0];
															for(i=0;i<6;i++)
															{
																if(arr[i]>max)
																max=arr[i];
															}
															printf("\nThe maximum value of element among them is %d",max);
															break;
														
													case 2:printf("\nEnter any 6 array elements to find the maximum among them:");
															for(i=0;i<6;i++)
															scanf("%d",&arr[i]);
															min=arr[0];
															for(i=0;i<6;i++)
															{
																if(arr[i]<min)
																min=arr[i];
															}
															printf("\nThe minimum value of element among them is %d",min);
															break;
												}
												break;
												
										case 5:int ch11;
												printf("\n1 --> Linear Search\n2 --> Binary Search");
												printf("\nEnter your choice:");
												scanf("%d",&ch11);
												switch(ch11)
												{
													case 1:printf("\nEnter any 6 array elements");
															for(i=0;i<6;i++)
															scanf("%d",&arr[i]);
															printf("\nEnter the elemet to search:");
															scanf("%d",&key);
															loc=0;
															for(i=0;i<6;i++)
															{
																if(arr[i]==key)
																{
																	
																	loc=i+1;
																}
															}
															if(loc!=0)
															printf("\nThe element %d found at location %d",key,loc);
															else
															printf("\nThe element %d not found");
															break;
														
													case 2:loc=-1,beg=0,last=9; 
															printf("\nEnter any 10 array elements in ASCENDING order:");
															for(i=0;i<10;i++)
															scanf("%d",&arr[i]);
															printf("\nEnter the element to search:");
															scanf("%d",&key);
															while(beg<=last)
															{
																mid=(beg+last)/2;
																if(arr[mid]==key)
																	{
																		loc=mid;
																		break;
																	}
																else if(arr[mid]>key)
																	{
																		last=mid-1;
																	}
																else if(arr[mid]<key)
																	{
																		beg=mid+1;
																	}
															}
																if(loc!=-1)
																printf("\nThe element found at location %d",loc+1);													
																else
																printf("\nElement not found.");
															break;
												}
												break;
												
										case 6:printf("\n1--> Deletion\n2 --> Insertion");
															int ch12;
															printf("\nEnter you choice");
															scanf("%d",&ch12);
															switch(ch12)
															{
																case 1:printf("\nEnter any 6 array elements");
																		for(i=0;i<6;i++)
																		scanf("%d",&arr[i]);
																		printf("\nEnter the location where you want to delete the element:");
																		scanf("%d",&loc);
																		for(i=loc-1;i<5;i++)
																		arr[i]=arr[i+1];
																		printf("\nThe resultant array is:");
																		for(i=0;i<5;i++)
																		printf("\t%d",arr[i]);
																		
																		break;
																		
																case 2:printf("\nenter the 6 array elements:");
																		for(i=0;i<6;i++)
																		scanf("%d",&arr[i]);
																		printf("\nEnter the location where you want to insert the element:");
																		scanf("%d",&loc);
																		printf("\nEnter the element that you want to insert:");
																		scanf("%d",&key);
																		for(i=5;i>=loc-1;i--)
																		{
																			arr[i+1]=arr[i];
																		}
																		arr[loc-1]=key;
																		printf("\nThe resultant array is:");
																		for(i=0;i<=6;i++)
																		printf("\t%d",arr[i]);
																		break;
															}
															break;
											
										case 7:printf("\nEnter the 5 array elements to sort the in ascending order");
															for(i=0;i<5;i++)
															scanf("%d",&arr[i]);
															printf("\nThe array elements are:");
															for(i=0;i<5;i++)
															printf("\t%d",arr[i]);
															for(i=0;i<5;i++)
															{
																for(j=0;j<4;j++)
																{
																	if(arr[j]>arr[j+1])
																	{
																		temp=arr[j];
																		arr[j]=arr[j+1];
																		arr[j+1]=temp;
																	}
																}
															}
															printf("\nThe sorted array is:\n");
															for(i=0;i<5;i++)
															printf("\t%d",arr[i]);
															break;	
											
											
											
											
											
											
											
											
											default:printf("\nPlease enter case 1-7 only");
													break;
											
									}
									break;
									
								case 2:printf("\n1 -->Null Pointer\n2 --> Wild Pointer\n3 --> Dangling Pointer\n4 --> Void Pointer\n5 --> Type casting\n6 --> Addition using pointers\n7 --> Example program on pointers");
									printf("\n\nEnter your choice:");
									int ch15;
									scanf("%d",&ch15);
									switch(ch15)
									{
										case 1:printf("\nA null pointer is a pointer which does not point to any address.\nWe initialize the null pointer as: int *p , p=NULL.\nThen p takes the value of 0");
											break;
											
										case 2:printf("\nWild pointers or uninitialized pointers point to any random value.\nWe initialize wild pointers as: int *p , printf(%d,p)");
											break;
											
										case 3:printf("\nThe dangling pointer point to a value/an address\neven when the variable is deleted from the scope,the pointer still points the value.\nTo resolve this issue we need to use null pointer.");
												a=23;
												{
													a=13;
													
													p=&a;
												}
												printf("\nThe value of p is %d",*p);
											break;
											
										case 4:printf("\nVoid pointers are unintialized pointers which do not have any constant value\nThey cannot be declared as memory is not allocated to them.");
											break;
											
										case 5:a=23;
											nums=23.23;
											character='!';
											printf("\nTypecasting is used so that a single pointer is used to hold different values.");
											void *pointer;
											pointer=&a;
											printf("\nThe value of a is %d",*(int *)pointer);
											pointer=&nums;
											printf("\nThe float value of b is %f",*(float *)pointer);
											pointer=&character;
											printf("\nThe character value of c is %c",*(char *)pointer);
											break;
											
										case 6:int *point[50];
												printf("\nEnter the 5 array elements:");
												for(i=0;i<5;i++)
												scanf("%d",&array[i]);
												printf("\nThe elements are:\n");
												for(i=0;i<5;i++)
												{
														point[i]=&array[i];
														printf("%d\t",*point[i]);
												}
												sum=0;
												printf("\nThe sum of these elements is:");
												for(i=0;i<5;i++)
												{
													sum=sum+*point[i];
												}
												printf("\t%d",sum);
												
												
												
												break;
												
										case 7:int *pt1,*pt2,*pt3,*pt4,x,y,z,m,n,val,def;
												i=10,j=2;
												a=10;
												b=3;
												pt3=&a;
												pt4=&b;
												pt1=&i,pt2=&j;
												m=pt4-pt3;//subtraction of these addresses help us know how far they are
												printf("\nAddress pointer subtraction is %d",m);
												def=*pt4-*pt3;//subtraction of these pointers helps us know the difference of their values
												printf("\nValue pointer subtraction is %d",def);
												printf("\nThe value of pt1 is %d",*pt1);
												printf("\nThe value of pt2 is %d",*pt2);
												printf("\nThe value of pt3 is %d",*pt3);
												printf("\nThe value of pt4 is %d",*pt4);
												val=*pt3+2;
												pt3=pt3+2;//addition of 2 to the base address of pointer pt3
												printf("\nThe value of the pointer after adding 2 to it is = %d",val);
												printf("\nThe base address of pointer pt3 is = %d",pt3);
												printf("\nThe value present at pt3 is = %d",*pt3);
												if(pt1>pt2)
												printf("\n%d\n%d\n%d",m,def,val);
												else if(pt1<pt2)
												printf("n%u\n%u\n%u",pt1,pt2,pt3);
												else if(pt1==pt2)
												printf("\n\t\t\t\tHELLO !!!");
											break;
													
										
										
										default:printf("\nEnter any case from 1-7");
											break;
									}
								break;
						}
						break;
						
				case 5:printf("\n1 --> String Length\n2 --> String copy\n3 --> String coying(n)\n4 --> String comparision\n5 --> String comparision(n)\n6 --> String comparision case insensitive\n7 --> String concatination\n8 --> String concatination(n)\n9 --> String reversing\n10 --> String uppercase\n11 --> String lowercase");
						int ch12;
						printf("\nEnter your choice: ");
						scanf("%d",&ch12);
						switch(ch12)
						{
						case 1:printf("\nEnter the string:");
											len=0;
											fflush(stdin);
											scanf("%s",str);
											/*
											while(str[i]!='\0')
											{
												fflush(stdin);
												scanf("%c",str[i]);
											}*/
											while(str[i]!='\0')
											{
												i++;
												len++;
											}
											printf("\nThe string is");
											puts(str);
											printf("\nThe length of the string is %d",len);
											break;
					}
						break;
				
				case 6:printf("\n1 --> Structures\n2 -->Unions");
						printf("\nEnter your choice:");
						int ch14;
						scanf("%d",&ch14);
						switch(ch14)
						{
						case 1:printf("\nThis is a structure to show the details of three products");
								struct products p[3];
								printf("\nEnter the name,id,price for three products\n");
									for(i=0;i<3;i++)
									{
										printf("\n");
										scanf("%s",&p[i].name);
										scanf("%d",&p[i].id);
										scanf("%f",&p[i].price);
									}
								printf("\nAvailable products are:");
									for(i=0;i<3;i++)
									{
										printf("\n\nProduct %d",i+1);
										printf("\nName = %s",p[i].name);
										printf("\nI.D = %d",p[i].id);
										printf("\nPrice = %f",p[i].price);
									}
							//	break;
							case 2:printf("\nUnions is under process")	;
								break;
								
							default:printf("\nEnter case 1-2 only");
								break;
								
					}	
						break;
					
					
				default:printf("\nPlease enter any case from one to six only");
						break;
				
				
				
			}/*choice*/
			printf("\n\nDo you want to search for another topic (y/n) : ");
			scanf("%s",&repeat);
			if(repeat=='y')
			system("CLS");
		  }while(repeat=='y');
			
			
			

		
		
		
}/*main*/


//functions beyoud the main
void fun(void)
			{
				int a,b,c;
				printf("\nEnter two numbers to add them using functions:");
				scanf("%d %d",&a,&b);
				c=a+b;
			printf("\nThe sum of the numbers is %d",c);
			}
			
			void funt(int p,int q)
			{
				int m;
				printf("\nPlease enter two numbers to add them.");
				scanf("%d %d",&p,&q);
				m=p+q;
				printf("\nThe sum of the numbers is %d",m);
			}
			
			int funct(void)
			{
				int a,b,c;
				printf("\nEnter the two numbers to add them");
				scanf("%d %d",&a,&b);
				c=a+b;
				return c;
			}
			
			int function (int x,int y)
			{
				int z;
				printf("\nEnter the two numbers to add them");
				scanf("%d %d",&x,&y);
				z=x+y;
				return z;
			}
			
			void swap1(int x,int y)
			{
				int z;
				z=x;
				x=y;
				y=z;
				printf("\nThe changed values are \t%d\t%d",x,y);
			}
			
			void swap2(int *x,int *y)
			{
				int z;
				z=*x;
				*x=*y;
				*y=z;
				printf("\nThe changed values are \t%d\t%d",*x,*y);
			}
			
			int fib(int p)
			{
				if(  (p==0) || (p==1) )
				return p;
				else
				return (fib(p-1)+fib(p-2));
			}
	

