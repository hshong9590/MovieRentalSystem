
/**-----------------------------------------------------------------------* 
 * 	@file main.cpp
 *	@author Team Angry Nerds
 *			- Joel Sherman : Customer
 *			- Michael Taylor : Movie
 *			- Hyeon Seok Hong : Transaction
 *			- Jason Stark : Inventory
 *
 *  creates a store object, processes three provided files and ouputs results.
 *
--------------------------------------------------------------------------*/


#include "store.h"

using namespace std;
//----------------------------------------------------------------------------
// Main
// Runs the program
//
int main(){

	RentalStore manager("MOVIE: Buy My Stuff");
	ifstream infilePatron("data4customers.txt");
	ifstream infileMovies("data4movies.txt");
	ifstream infileTransactions("data4commands.txt");


	if ((!infilePatron) || (!infileMovies) || (!infileTransactions)){
		cout << "File Could Not be Opened!" << endl;
		getchar();
		return 1;
	}
	
	manager.createCustomers(infilePatron);
	manager.createInventory(infileMovies);
	manager.processTransactions(infileTransactions);

	return 0;

}//end main



