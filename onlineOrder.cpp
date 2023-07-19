
#include<stdint.h>
#include<iostream>
#include <string>
using namespace std;

int main() // main function
{

	cout << "-----------------------------" << endl;
	cout << "Welcome to online Order Program!" << endl;
	cout << "-----------------------------" << endl;

	cout << "1. Hamburger " << endl;
	cout << "2. Pizza " << endl;
	cout << "3. Noodle " << endl;
	cout << "4. Salad " << endl; 
	cout << "5. Sandwich " << endl;
	cout << "6. Exit " << endl;
	cout << "-----------------------------" << endl;

	// float variables (price) for each choice 
	float amount = 0.0;
	float totalCost = 0.0;
	float priceWithoutMeat = 7.5;
	float priceWithBeef = 25.5;
	float priceWithPork = 17.5;
	float currentBuy = 0.0;

	int choice;
	
	string type = "";
	string option = "";
	string input = "";

	bool orderComplete = true;

	while (orderComplete) // run loop as long as user wants
	{
		cout << "\nPlease Enter your choice (1-6): "; // asking user for choice
		cin >> choice;
		
		
		if (choice < 1 || choice > 6)
		{
			cout << "\nThis is wrong input. Please try again!"<<endl;
			while (choice < 1 || choice > 6)
			{
				cout << "\nPlease Enter your choice (1-6): " << endl; // asking user for choice
				cin >> choice;
			}
		}
		
		switch (choice)
		{
			case 1: // second case
				cout << "\nYour choice is : Hamburger ." << endl; // printing user input 
				cout << "\nWould you like too have some meat on your Hamburger? "; // asking if they would like meat on input
				cin >> type; // reading user input 
				
				if (type == "Yes"|| type =="yes") { // if input yes 
					cout << "\nBeef or Pork ? "; // asking for choice of meat 
					 // string variable
					cin >> option; //storing user input in option 
					if (option == "beef" || option == "Beef") // if option is beef 
					{
						currentBuy = priceWithBeef; // price with beef as input
					}
					else if (option == "pork" || option =="Pork") { // if option is pork
						currentBuy = priceWithPork; // price with pork as input 
					}
					else
						currentBuy = priceWithoutMeat;// totalCost is totalCost plus currentBuy

				}
				else { //if there is no choice of meat 
					currentBuy = priceWithoutMeat; // totalCost is totalCost plus priceWithoutMeat
				}
				break;
			case 2: // first case 
				cout << "\nYour choice is : Pizza ." << endl; //printing user input 
				cout << "\nWould you like too have some meat on your Pizza? "; // asking user if they would like meat on input
				cin>>type; // reading user input
				if (type == "Yes" || type == "yes") { // if input yes 
					cout << "\nBeef or Pork ? "; // asking for choice of meat 
					 // string variable
					cin >> option; //storing user input in option 
					if (option == "beef" || option == "Beef") // if option is beef 
					{
						currentBuy = priceWithBeef; // price with beef as input
					}
					else if (option == "pork" || option =="Pork") { // if option is pork
						currentBuy = priceWithPork; // price with pork as input 
					}
					else
						currentBuy = priceWithoutMeat;// totalCost is totalCost plus currentBuy

				}
				else { //if there is no choice of meat 
					currentBuy = priceWithoutMeat; // totalCost is totalCost plus priceWithoutMeat
				}
				break;
		
			case 3: // third case
				cout << "\nYour choice is : Noodle ." << endl; // printing user input

				cout << "\nWould you like too have some meat on your Noodle? "; // asking if they would meat on input 
				cin>>type; // storing user input in type
				if (type == "Yes" || type == "yes") { // if input yes 
					cout << "\nBeef or Pork ? "; // asking for choice of meat 
					 // string variable
					cin >> option; //storing user input in option 
					if (option == "beef" || option == "Beef") // if option is beef 
					{
						currentBuy = priceWithBeef; // price with beef as input
					}
					else if (option == "pork" || option =="Pork") { // if option is pork
						currentBuy = priceWithPork; // price with pork as input 
					}
					else
						currentBuy = priceWithoutMeat;// totalCost is totalCost plus currentBuy

				}
				else { //if there is no choice of meat 
					currentBuy = priceWithoutMeat; // totalCost is totalCost plus priceWithoutMeat
				}
				break;
			case 4: // fourth case 
				cout << "\nYour choice is : Salad ." << endl; // printing user input 
				cout << "\nWould you like too have some meat on your Salad? "; // asking if they would like meat on input 
				cin>>type; // storing user input in type
				if (type == "Yes" || type == "yes") { // if input yes 
					cout << "\nBeef or Pork ? "; // asking for choice of meat 
					 // string variable
					cin >> option; //storing user input in option 
					if (option == "beef" || option == "Beef") // if option is beef 
					{
						currentBuy = priceWithBeef; // price with beef as input
					}
					else if (option == "pork" || option =="Pork") { // if option is pork
						currentBuy = priceWithPork; // price with pork as input 
					}
					else
						currentBuy = priceWithoutMeat;// totalCost is totalCost plus currentBuy

				}
				else { //if there is no choice of meat 
					currentBuy = priceWithoutMeat; // totalCost is totalCost plus priceWithoutMeat
				}
				break;

			case 5: // fifth case 
				cout << "\nYour choice is : Sandwich ." << endl; // printing user input
				cout << "\nWould you like too have some meat on your Sandwich? "; // asking if they would like meat on input
				cin>>type; // storing user intput in type
				if (type == "Yes" || type == "yes") { // if input yes 
					cout << "\nBeef or Pork ? "; // asking for choice of meat 
					 // string variable
					cin >> option; //storing user input in option 
					if (option == "beef" || option == "Beef") // if option is beef 
					{
						currentBuy = priceWithBeef; // price with beef as input
					}
					else if (option == "pork" || option =="Pork") { // if option is pork
						currentBuy = priceWithPork; // price with pork as input 
					}
					else
						currentBuy = priceWithoutMeat;// totalCost is totalCost plus currentBuy

				}
				else { //if there is no choice of meat 
					currentBuy = priceWithoutMeat; // totalCost is totalCost plus priceWithoutMeat
				}
				break;
			case 6: // sixth case 
				cout << "\nYour choice is : Finish the order!" << endl;
			
				break;

		default:
			break;
		}

		totalCost += currentBuy;
		if (choice != 6) {
			cout << "\nWould you like to have more food? "; // asking if user wants more food 
			 // string variable
			cin >> input; // storing input in input 
		}
		if (input == "Yes"|| input=="yes") 
		{
			orderComplete = true;
			
		} // if input is yes  
		else
		{
			if (choice != 6) {
				orderComplete = false;
				if (totalCost >= 50.0) // if totalCost is greater than 50.0 
				{
					cout << "\nNo need to pay delivery fee" << endl; //  // printing message that there's no delivery fee
				}

				else {
					cout << "\nThe total price is less than $50. You need to pay delivery fee of $5" << endl;
					totalCost += 5.0; // totalCost  

				}

				cout << "\nWould you like to pay some tips? Please enter amount: "; // asking if user wants to pay tip
				 // float variable
				cin >> amount; // store variable in amount 
				totalCost += amount; // totalCost is totalCost plus amount 

				cout << endl;
				cout << "\nThe Total Price is $" << totalCost << endl; //printing  totalCost 
				cout << "\nThank you for using Online Order Program!"; // closing message

			}
			else {
				cout << "\nNo need to pay delivery fee" << endl;
				cout << "\nThe Total Price is $" << totalCost << endl; //printing  totalCost 
				cout << "\nThank you for using Online Order Program!"; // closing message
			}
		}

		
	}
	system("pause");
	return 0;
}