#include <iostream>
using namespace std;

int main()

{

	string option_1;
	string option_2;
	string option_3;
	string option_4;
	string option_5;


	cout << "[OPTION 1]" << endl;
	cout << "pick a companion to venture with you, either the friendly PITBULL or the wise PARROT..." << endl;
	cin >> option_1;

	if (option_1 == "PITBULL") {
		cout << "the dog walks towards you curiously wagging its tail, seemly friendly." << endl;
	}
	else if (option_1 == "PARROT") {
		cout << "The parrot lands on your shoulder and begins repeating the word left" << endl;
	}
	else {
		cout << "incorrect input LEARN OR PERISH" << endl;
	}



	cout << "[OPTION 2]" << endl;
	cout << "The valley splits in two, you can either venture up the LEFT path leading into a dense forest or continue on STRAIGHT the bridge" << endl;
	cin >> option_1;

	if (option_1 == "LEFT"){
		cout << "You climb the dirt track higher, the trees look less menacing now." << endl;
	}
	else if (option_1 == "STRAIGHT"){
	
		cout << "As you walk under the bridge, you start to make out wierd symbols painted onto the walls, it seems almost too fresh..." << endl;
	}
	else
		cout << "incorrect input LEARN OR PERISH" << endl;


	cout << "[OPTION 3]" << endl;
	cout << "The wind starts howling through the trees, and you notice a shelterd bench nearby. You can either WALK past or SIT down and take a rest..." << endl;
	cin >> option_3;
	if (option_3 == "WALK") {
		cout << "You push through the weather, following the dirt path you set on." << endl;
	}
	else if (option_3 == "SIT") {
		cout << "You take a seat on the bench and eat some food, surely that was the right call." << endl;
	}
	else {
		cout << "incorrect input LEARN OR PERISH" << endl;
	}


	cout << "[OPTION 4]" << endl;
	cout << "You notice your phone begins to ring, unknown caller... do you ANSWER the call or DECLINE and forget about it" << endl;
	cin >> option_4;
	if (option_4 == "ANSWER")
		cout << "A distorted scream comes through the speakerphone and you drop it in shock, and the screen flashes black" << endl;
	else if (option_4 == "DECLINE")
		cout << "You let the phone ring out, hopefully whoever was calling doesnt take it personal" << endl;
	else
		cout << "incorrect input LEARN OR PERISH" << endl;


	cout << "[OPTION 5]" << endl;
	cout << "....." << endl;
	if (option_1 == "PITBULL")
		cout << "Something was lurking around you, but your pitbull noticed and chased it away before you ever got a glance" << endl;
	else if (option_1 == "PARROT")
		cout << "The parrot on your shoulder suddently shouts out behind, you instincitvley twist away but not before getting cut on your leg" << endl;


	string option_6;
	cout << "[OPTION 6]" << endl;
	cout << "Somethings behind you, lets hope you ran far enough away..." << endl;
	if (option_3 == "WALK")
		cout << "luckily you travveled far enough away for now. Lets keep it this way" << endl;
	else if (option_3 == "SIT")
		cout << "Footsteps and panting get louder and louder until it feels like its beside you, yet you see nothing." << endl;
	else
		cout << "incorrect input LEARN OR PERISH" << endl;



	return 0;
}