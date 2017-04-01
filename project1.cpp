#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main (){
	string useless[42];
	int count;
	int time1, mana, card1, card2, card3, card4; 

	cout << "8 7 2 5 1 3 6 4" << endl;
		
	while ( time1 >= 0 )
	{
		cin >> time1 >> mana >> card1 >> card2 >> card3 >> card4;
		
		for ( count = 0; count < 42; count++ ){
			getline ( cin, useless[count] );
		}
		cout << "1 8 4 11" << endl;
		cout << "1 7 5 11" << endl;
		cout << "1 1 6 11" << endl;
		cout << "1 3 15 11" << endl;
		cout << "1 4 16 11" << endl;
		cout << "1 6 17 11" << endl;
		cout << "0" << endl;
	}//End of while
	return 0;
}//End of main
