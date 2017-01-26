#include <iostream>
#include <stdio.h>
#include <string.h>
#include "VendingMachine.h"

void PutLines(int n) 
{
int i;
for (i=1;i<n;i++) 
	std::cout<<std::endl;
}

void clearscreen()
{
PutLines(40);
}


void cont()
{
char key;
std::cout<<" "<<std::endl;
std::cout<<"PLEASE TYPE ANY CHARACTER AND PRESS ENTER TO CONTINUE......"<<std::endl;
std::cin>>key;
}


int main() 
{
int  temp;
int l,s,pr;
int ch;
clearscreen();
std::cout << "***************************************************************" <<std::endl;
std::cout << "          CS 589 PROJECT Fall 2016" <<std::endl;
std::cout << "***************************************************************" <<std::endl;
PutLines(3);
cont();

VendingMachine VM;
do
	{
	  
       clearscreen();
	  std::cout << "***************************************************************" <<std::endl;
	  std::cout<<"TEST DRIVER FOR Vending Machine"<<std::endl;
          std::cout << "***************************************************************" <<std::endl;
	  std::cout<<" "<<std::endl;
	  std::cout<<"1.  coin()"<<std::endl;
          std::cout<<"2.  small_cup()"<<std::endl;
	  std::cout<<"3.  large_cup()"<<std::endl;
	  std::cout<<"4.  sugar()"<<std::endl;
	  std::cout<<"5.  tea()"<<std::endl;
	  std::cout<<"6.  insert_large_cups(int n)"<<std::endl;
	  std::cout<<"7.  insert_small_cups(int n)"<<std::endl;
	  std::cout<<"8.  set_price(int n)"<<std::endl;
	  std::cout<<"9.  cancel()"<<std::endl;
	  std::cout<<"10.  dispose()"<<std::endl;
	   std::cout<<" "<<std::endl;
	  std::cout<<"Testing Related Methods"<<std::endl;
	  std::cout<<"11. displayState()"<<std::endl;
	  std::cout<<"12. displayPrice()"<<std::endl;
	  std::cout<<"13. displayTotalSmallCups()"<<std::endl;
	  std::cout<<"14. displayTotalLargeCups()"<<std::endl;
	  std::cout<<"15. displaySelection()"<<std::endl;
	  std::cout<<""<<std::endl;
	  std::cout<<"16. Quit Vending Machine Class Driver"<<std::endl;
          PutLines(5);
	  std::cout<<"Select a choice : "<<std::endl;
	  std::cin>>ch;
	
	switch(ch)
		{

		case 1 : clearscreen();
			 std::cout<<"coin() Method"<<std::endl;
		         std::cout<<" "<<std::endl;
			 temp=VM.coin();
			 std::cout<<" "<<std::endl;			 
			 std::cout<<"Returned value is : "<<temp<<std::endl; 
			 cont();
			 break;

		case 2 : clearscreen();
			 std::cout<<"small_cup() Method"<<std::endl;
			 temp=VM.small_cup();
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is : "<<temp<<std::endl; 
			 cont();
			 break;

		case 3 : clearscreen();
			 std::cout<<"large_cup() Method"<<std::endl;
			 temp=VM.large_cup();
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl; 
			 cont();
			 break;

		case 4 : clearscreen();
			 std::cout<<"sugar() Method"<<std::endl;
			 temp=VM.sugar();
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl; 
			 cont();
			 break;

		case 5 : clearscreen();
			 std::cout<<"tea() Method"<<std::endl;
			 temp=VM.tea();
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl;
			 cont();
			 break;
			 
		case 6 : clearscreen();
			 std::cout<<"insert_large_cups(int n) Method"<<std::endl;
			std::cout<<"Enter the number of large cups to be inserted"<<std::endl;
			 std::cin>>l;
	                 std::cout<<" "<<std::endl;
			temp=VM.insert_large_cups(l);
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl;
			 cont();
			 break;

		case 7 : clearscreen();
			 std::cout<<"insert_small_cups(int n) Method"<<std::endl;
			 std::cout<<"Enter the number of small cups to be inserted"<<std::endl;
			 std::cin>>s;
	                 std::cout<<" "<<std::endl;
			temp=VM.insert_small_cups(s);
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl;
			 cont();
			 break;

		case 8 : clearscreen();
			 std::cout<<"set_price(int n) Method"<<std::endl;
			 std::cout<<"Enter the price"<<std::endl;
			 std::cin>>pr;
	                 std::cout<<" "<<std::endl;
					 temp=VM.set_price(pr);
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl;
			 cont();
			 break;

		case 9 : clearscreen();
			 std::cout<<"cancel() Method"<<std::endl;
			 temp=VM.cancel();
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl;			 
			 cont();
			 break;

		case 10 : clearscreen();
			 std::cout<<"dispose() Method"<<std::endl;
			 temp=VM.dispose();
	                 std::cout<<" "<<std::endl;
			 std::cout<<"Returned value is :  "<<temp<<std::endl;
			 cont();
			 break;

		case 11 : clearscreen();
			  std::cout<<"displayState() Method"<<std::endl;
			  VM.displayState();
	          cont();
			  break;

		case 12 : clearscreen();
			  std::cout<<"displayPrice() Method"<<std::endl;
			  VM.displayPrice();
	          cont();
			  break;

		case 13 : clearscreen();
			  std::cout<<"displayTotalSmallCups() Method"<<std::endl;
			  VM.displayTotalSmallCups();
	          cont();
			  break;

		case 14 : clearscreen();
			  std::cout<<"displayTotalLargeCups() Method"<<std::endl;
			  VM.displayTotalLargeCups();
	          cont();
			  break;

		case 15 : clearscreen();
			  std::cout<<"displaySelection() Method"<<std::endl;
			   VM.displaySelection();
	          cont();
			  break;

		case 16 : clearscreen();
			   std::cout<<"VENDING MACHINE TEST DRIVER IS QUITTING !!!"<<std::endl;
	                   std::cout<<" "<<std::endl;
			   break;
			  

		default : std::cout<<"PLEASE SELECT A CORRECT CHOICE FROM MENU !!! "<<std::endl;
			  std::cout<<" "<<std::endl;
                          cont();    			
			  break;
		}

	}while(ch!=16);	

return 0;
}
