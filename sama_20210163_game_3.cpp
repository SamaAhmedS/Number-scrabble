/*
#include <vector>
#include<iostream>
#include <algorithm>
#include <set>
#include <cstring>
//stringncopy , stringncat

using namespace std;
int main() {
	int n;
	cuot << "enter the len"
		cin >> n;
	vector <string> name;
	cout << "enter";
	cin.getline(name);
	for (string i : name) {
		if (i == ' ') {

		}

	}

}


////////////
#include <iostream>
#include <vector>
using namespace std;
vector<int> numbers_of_the_game = { 1,2,3,4,5,6,7,8,9 };
vector<int> Selected_numbers_0f_player1 = {};
vector<int> Selected_numbers_0f_player2 = {};

bool can_choose_num(int x, vector<int> &arr)
{// check if the numbers are in the determined list
	if (find(begin(arr), end(arr), x) != end(arr))
	{
		return true;
	}
return false;
}
void play_turn(vector<int>& player_list, string player_name) {
	// take the choosen numbers from the player
	int choosen_num;
	cout << player_name << "  chose a number from 1 to 9 and not repeated ";
	cin >> choosen_num;
	//check if the numbers are from 1 to 9 and not repeated
	while (!can_choose_num(choosen_num, numbers_of_the_game) )
	{
		cout << player_name << "  chose a number from 1 to 9 and not repeated ";
		cin >> choosen_num;
	}
	player_list.push_back(choosen_num);
	remove(numbers_of_the_game.begin(), numbers_of_the_game.end(), choosen_num);
}
bool is_winner(vector<int> &player_list) {
	if (player_list.size() == 3)
		return player_list[0] + player_list[1] + player_list[2] == 15;

	else if (player_list.size() == 4) {
		return player_list[0] + player_list[1] + player_list[2] == 15 || 
			player_list[0] + player_list[1] + player_list[3] == 15 ||
			player_list[0] + player_list[2] + player_list[3] == 15 || 
			player_list[1] + player_list[2] + player_list[3] == 15;
	}
	else if (player_list.size() == 5) {
		return player_list[0] + player_list[1] + player_list[2] == 15 ||
			player_list[0] + player_list[1] + player_list[3] == 15 ||
			player_list[0] + player_list[2] + player_list[3] == 15 || 
			player_list[1] + player_list[2] + player_list[3] == 15 ||
			player_list[0] + player_list[1] + player_list[4] == 15 ||
			player_list[1] + player_list[2] + player_list[4] == 15 ||
			player_list[2] + player_list[3] + player_list[4] == 15 ||
			player_list[0] + player_list[3] + player_list[4] == 15 ||
			player_list[0] + player_list[2] + player_list[4] == 15 || 
			player_list[1] + player_list[3] + player_list[4] == 15;
	}
	return false;
}
int main()
{
	while (true)
	{
		play_turn(Selected_numbers_0f_player1, "player1");
		if (is_winner(Selected_numbers_0f_player1))
		{
			cout << "the winner is player1";
			break;
		}
		if (Selected_numbers_0f_player1.size() == 5)
			break;
		play_turn(Selected_numbers_0f_player2, "player2");
		if (is_winner(Selected_numbers_0f_player2))
		{
			cout << "the winner is player2";
			break;
		}
	}
	if (is_winner(Selected_numbers_0f_player1) == false && is_winner(Selected_numbers_0f_player2) == false)
		cout << "the game is draw";
}
*/