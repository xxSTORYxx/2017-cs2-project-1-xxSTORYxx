#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>

using namespace std;

int main (){
	string useless[4];
	int i_set, j_set;
	int i, j;
	int ch_i, ch_j;
	char overview[50][20], detail[50][20];
	char A;
	int x_1, y_1;
	int x_3, y_3;
	int x_4, y_4;
	int x_6, y_6;
	int x_7, y_7;
	int x_8, y_8;

	int time1, mana, card1, card2, card3, card4; 

	cout << "8 3 7 1 2 5 6 4" << endl;
		
	while ( time1 != 0 )
	{
		///////////////////////////////////////////////////////////////////////////////////////////////
		// get the data
		cin >> time1 >> mana >> card1 >> card2 >> card3 >> card4;
		
		getline ( cin, useless[0] );
		
		for ( j_set = 0; j_set < 50; i++ )
		{
			for ( i_set = 0; i_set < 20; j++ ){
			overview[j][i] = getchar();
			}
		}
		
		getline ( cin, useless[1] );
		getline ( cin, useless[2] );

		for ( j_set = 0; j_set < 50; i++ )
		{
			for ( i_set = 0; i_set < 20; j++ ){
			detail[j][i] = getchar();
			}
		}

		getline ( cin , useless[3] );     
		/////////////////////////////////////////////////////////////////////////////////////////////
		// If our castles are all healthy,we attack and protect.
		if ((detail[6][2] == A || detail[6][2] == 9 || detail[6][2] == 8 || detail[6][2] == 7 || detail[6][2] == 6 || detail[6][2] == 5 ) && (detail[2][7] == A || detail[2][7] == 9 || detail[2][7] == 8 || detail[2][7] == 7 || detail[2][7] == 6 || detail[2][7] == 5 ) && (detail[6][14] == A || detail[6][14] == 9 || detail[6][14] == 8 || detail[6][14] == 7 || detail[6][14] == 6 || detail[6][14] == 5)){
			
			// If there are 4, 7, 8 at down road,we protect.
			for ( j = 13; j < 17; j++ ){
				for ( i = 10; i < 27; i++ ){
					if ( overview[j][i] == 4 && detail [j][i] != 0 && detail [j][i] != 1 && detail [j][i] != 2 ){//If our enemy 4 is strong
						if ( card1 != 3 && card2 != 3 && card3 != 3 && card4 != 3 && card1 != 6 && card2 != 6 && card3 != 6 && card4 != 6 ){//If we can't send out 3, 6
							ch_i = i; //down road position
							cout << "1 1 " << ch_i + 1 << " 11" << endl;
							x_8 = time(NULL)%2 + 6;
							y_8 = time(NULL)%13 + 13; 
							cout << "1 8 " << x_8 << " " << y_8 << endl;
							cout << "1 7 " << x_8 - 1 << " " << y_8 - 1 << endl;
							cout << "1 4 " << x_8 - 1 << " " << y_8 - 1 << endl;
						}//End of card1!=3....(no 3, 6)
						else{//We have actuall army
							ch_i = i; //down road position
							cout << "1 3 " << ch_i + 1 << " 12" << endl;
							if ( mana >= 4 ){
								ch_i = i; //down road position
								cout << "1 6 " << ch_i + 1 << " 11" << endl;
							}//End of mana>=4		
						}//End of else(we have actuall army)		
					}//End of overview[j][i] == 4(meet 4)
					else if ( overview[j][i] == 7 && detail [j][i] != 0 && detail [j][i] != 1 && detail [j][i] != 2 ){//If our enemy 7 is strong
						if ( card1 != 1 && card2 != 1 && card3 != 1 && card4 != 1 && card1 != 3 && card2 != 3 && card3 != 3 && card4 != 3 ){//If we can't send out 1, 3
							ch_i = i; //down road position
							cout << "1 6 " << ch_i + 1 << " 11" << endl;
							x_8 = time(NULL)%2 + 6;
							y_8 = time(NULL)%13 + 13; 
							cout << "1 8 " << x_8 << " " << y_8 << endl;
							cout << "1 7 " << x_8 - 1 << " " << y_8 - 1 << endl;
							cout << "1 4 " << x_8 - 1 << " " << y_8 - 1 << endl;
						}//End of card1!=1....(no 1, 3)
						else {//We have actuall army
							x_1 = i + 1; //down road position
							y_1 = 12;
							cout << "1 1 " << ch_i + 1 << " 12" << endl;
							if ( mana >= 4 ){
								cout << "1 3 " << ch_i + 1 << " " << 11 << endl;
							}//End of mana>=4	
						}//End of else(we have actuall army)					
					}//End of overview[j][i] == 7(meet 7)
					else if ( overview[j][i] == 8 && detail [j][i] != 0 && detail [j][i] != 1 && detail [j][i] != 2 ){//If our enemy 8 is strong
						if ( card1 != 1 && card2 != 1 && card3 != 1 && card4 != 1 && card1 != 3 && card2 != 3 && card3 != 3 && card4 != 3 ){//If we can't send out 1, 3
							ch_i = i; //down road position
							cout << "1 6 " << ch_i + 1 << " 11" << endl;
							x_8 = time(NULL)%2 + 6;
							y_8 = time(NULL)%13 + 13; 
							cout << "1 8 " << x_8 << " " << y_8 << endl;
							cout << "1 7 " << x_8 - 1 << " " << y_8 - 1 << endl;
							cout << "1 4 " << x_8 - 1 << " " << y_8 - 1 << endl;
						}//End of card1!=1....(no 1, 3)
						else {//We have actuall army
							ch_i = i; //down road position
							y_1 = 12;
							cout << "1 1 " << ch_i + 1 << " 12" << endl;
							if ( mana >= 4 ){
								ch_i = i; //down road position
								cout << "1 3 " << ch_i + 1 << " 11" << endl;
							}//End of mana>=4		
						}//End of else(we have actuall army)		
					}//End of overview[j][i] == 8(meet 8)
					else {//If our enemy is weak
						if ( card1 != 7 && card2 != 7 && card3 != 7 && card4 != 7 && card1 != 8 && card2 != 8 && card3 != 8 && card4 != 8 ){//If we can't send out 7, 8
							x_3 = time(NULL)%2 + 6;
							y_3 = time(NULL)%13 + 13; 
							cout << "1 3 " << x_3 << " " << y_3 << endl;
							cout << "1 1 " << x_3 - 1 << " " << y_3 - 1 << endl;
							cout << "1 6 " << x_3 - 1 << " " << y_3 - 1 << endl;
							cout << "1 4 " << x_3 - 1 << " " << y_3 - 1 << endl;
						}//End of card1!=7....(no 7, 8)
						else {//We have actuall army
							if ( overview[40][2] != 0 ){//Their castle isn't weak
								x_8 = time(NULL)%2 + 6; //up road position
							}//End of their castle isn't weak
							else{//Their castle is weak
								x_8 = 7;
							}//End of their castle is weak
							y_8 = time(NULL)%13 + 13;
							cout << "1 8 " << x_8 << " " << y_8 << endl;
							if ( mana >= 3 ){
								cout << "1 7 " << x_8 - 1 << " " << y_8 - 1 << endl;
							}
							if ( mana >= 3 ){
								cout << "1 1 " << x_8 - 1 << " " << y_8 - 1 << endl;
							}//End of mana>=3			
						}//End of else(we have actuall army)
					}//End of else (our enemy is weak)
				}//End of for i=10
			}//End of for j=13(attack & protect line)	
		}//End of overview[6][2] == A...(our healthy castle)
		//If our castle is in emergency,we all do protect.
		else{//in emergency
			if ( detail[2][7] != A && detail[2][7] != 9 && detail[2][7] != 8 && detail[2][7] != 7 && detail[2][7] != 6 && detail[2][7] != 5 ){//main castle is in danger
				if ( detail[6][14] == A || detail[6][14] == 9 || detail[6][14] == 8 || detail[6][14] == 7 || detail[6][14] == 6 || detail[6][14] == 5 || detail[6][14] == 4 || detail[6][14] == 3 || detail[6][14] == 2 || detail[6][14] == 1 || detail[6][14] == 0 ){//castle down is safe
					cout << "1 8 8 9" << endl; 
					cout << "1 7 7 9" << endl;
					cout << "1 3 7 8" << endl;
					cout << "1 1 7 7" << endl;
					cout << "1 6 7 6" << endl;
					cout << "1 4 7 5" << endl; 
				}//End of if (detail[6][14] != A...)(castle down is safe)
				if ( detail[6][2] == A || detail[6][2] == 9 || detail[6][2] == 8 || detail[6][2] == 7 || detail[6][2] == 6 || detail[6][2] == 5 || detail[6][2] == 4 || detail[6][2] == 3 || detail[6][2] == 2 || detail[6][2] == 1 || detail[6][2] == 0 ){//castle on top is safe
					cout << "1 8 15 9" << endl; 
					cout << "1 7 14 9" << endl;
					cout << "1 3 14 8" << endl;
					cout << "1 1 14 7" << endl;
					cout << "1 6 14 6" << endl;
					cout << "1 4 14 5" << endl; 
				}//End of if (detail[6][2] != A...)(castle on top is safe)
			}//End of if ( !(detail[2][7] == A...)(castle down is in danger)
			else {
				if ( detail[6][14] != A && detail[6][14] != 9 && detail[6][14] != 8 && detail[6][14] != 7 && detail[6][14] != 6 && detail[6][14] != 5 ){//castle down is in danger
					for ( i = 14; i < 17; i++ ){
						if ( overview[10][i]!=1&&overview[10][i]!=2&&overview[10][i]!=3&&overview[10][i]!=4&&overview[10][i]!=5&&overview[10][i]!=6&&overview[10][i]!=7&&overview[10][i]!=8){
							ch_i = i;
							cout << "1 8 " << ch_i + 1 << " 10" << endl; 
							cout << "1 7 " << ch_i + 1 << " 10" << endl;
							cout << "1 3 " << ch_i + 1 << " 10" << endl;
							cout << "1 1 " << ch_i + 1 << " 10" << endl;
							cout << "1 6 " << ch_i + 1 << " 10" << endl;
							cout << "1 4 " << ch_i + 1 << " 10" << endl; 
						}//	End of overview[10][i]!=1...(we can set army infront)
						else {//we can't set army infront
							cout << "1 8 7 10" << endl;
							cout << "1 7 6 10" << endl;
							cout << "1 3 5 10" << endl;
							cout << "1 1 4 10" << endl; 
							cout << "1 6 3 10" << endl;
							cout << "1 4 2 10" << endl;
						}//	End of else(we can't set army infront)
					}//	End of for i=14 
				}//End of if ( !(detail[6][14] == A...)(castle down is in danger)
				if ( detail[6][2] != A && detail[6][2] != 9 && detail[6][2] != 8 && detail[6][2] != 7 && detail[6][2] != 6 && detail[6][2] != 5 ){//castle on top is in danger
					for ( i = 3; i < 6; i++ ){
						if ( overview[10][i]!=1&&overview[10][i]!=2&&overview[10][i]!=3&&overview[10][i]!=4&&overview[10][i]!=5&&overview[10][i]!=6&&overview[10][i]!=7&&overview[10][i]!=8){
							ch_i = i;
							cout << "1 8 " << ch_i + 1 << " 10" << endl; 
							cout << "1 7 " << ch_i + 1 << " 10" << endl;
							cout << "1 3 " << ch_i + 1 << " 10" << endl;
							cout << "1 1 " << ch_i + 1 << " 10" << endl;
							cout << "1 6 " << ch_i + 1 << " 10" << endl;
							cout << "1 4 " << ch_i + 1 << " 10" << endl; 
						}//	End of overview[10][i]!=1...(we can set army infront)
						else {//we can't set army infront
							cout << "1 8 7 10" << endl;
							cout << "1 7 6 10" << endl;
							cout << "1 3 5 10" << endl;
							cout << "1 1 4 10" << endl; 
							cout << "1 6 3 10" << endl;
							cout << "1 4 2 10" << endl;
						}//	End of else(we can't set army infront)
					}//	End of for i=3
				}//End of if ( !(detail[6][2] == A...)(castle on top is in danger)
			}//End of else(our main castle is safe)
		}//End of else(in emergency)
	cout << "0";
	}//End of while
	return 0;
}//End of main
