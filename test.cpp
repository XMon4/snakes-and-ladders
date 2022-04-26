#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int player1=0, player2=0, player3=0, player4=0;	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
//**ENLARGE THE CONSOLE FOR FULL PICTURE**//
void banner(){

	SetConsoleTextAttribute(color,110);
cout<<"\n .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  \n| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |  \\\\____\\\n| |   _____      | || |      __      | || |  ________    | || |  ________    | || |  _________   | || |  _______     | || |    _______   | |   \\\\____\\\n| |  |_   _|     | || |     /  \\     | || | |_   ___ `.  | || | |_   ___ `.  | || | |_   ___  |  | || | |_   __ \\    | || |   /  ___  |  | |    \\\\____\\\n| |    | |       | || |    / /\\ \\    | || |   | |   `. \\ | || |   | |   `. \\ | || |   | |_  \\_|  | || |   | |__) |   | || |  |  (__ \\_|  | |     \\\\____\\\n| |    | |   _   | || |   / ____ \\   | || |   | |    | | | || |   | |    | | | || |   |  _|  _   | || |   |  __ /    | || |   '.___`-.   | |      \\\\____\\\n| |   _| |__/ |  | || | _/ /    \\ \\_ | || |  _| |___.' / | || |  _| |___.' / | || |  _| |___/ |  | || |  _| |  \\ \\_  | || |  |`\\____) |  | |       \\\\____\\\n| |  |________|  | || ||____|  |____|| || | |________.'  | || | |________.'  | || | |_________|  | || | |____| |___| | || |  |_______.'  | |        \\\\____\\\n| |              | || |              | || |              | || |              | || |              | || |              | || |              | |         \\\\____\\                &\n| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |          \\\\    \\\n";
   SetConsoleTextAttribute(color,174);
cout<<" '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  \n .----------------.   .----------------.  .-----------------. .----------------.  .----------------.  .----------------.  .----------------. \n| .--------------. | | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |      --..,_                     _,.--.\n| |    ___       | | | |    _______   | || | ____  _____  | || |      __      | || |  ___  ____   | || |  _________   | || |    _______   | |        `'.'.                .'`__ o  `;__.      \n| |  .' _ '.     | | | |   /  ___  |  | || ||_   \\|_   _| | || |     /  \\     | || | |_  ||_  _|  | || | |_   ___  |  | || |   /  ___  |  | |           '.'.            .'.'`  '---'`  `\n| |  | (_) '___  | | | |  |  (__ \\_|  | || |  |   \\ | |   | || |    / /\\ \\    | || |   | |_/ /    | || |   | |_  \\_|  | || |  |  (__ \\_|  | |              '.`'--....--'`.'\n| |  .`___'/ _/  | | | |   '.___`-.   | || |  | |\\ \\| |   | || |   / ____ \\   | || |   |  __'.    | || |   |  _|  _   | || |   '.___`-.   | |                 `'--....--'`\n| | | (___)  \\_  | | | |  |`\\____) |  | || | _| |_\\   |_  | || | _/ /    \\ \\_ | || |  _| |  \\ \\_  | || |  _| |___/ |  | || |  |`\\____) |  | |\n| | `._____.\\__| | | | |  |_______.'  | || ||_____|\\____| | || ||____|  |____|| || | |____||____| | || | |_________|  | || |  |_______.'  | |\n| |              | | | |              | || |              | || |              | || |              | || |              | || |              | |\n| '--------------' | | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n '----------------'   '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n";
SetConsoleTextAttribute(color,15);
cout<<endl;
cout<<"Note: Please use large window for better experience\n";
}
void board(){	
	char p1='1',p2='2',p3='3',p4='4';
	int tile=60;
	int c=1;
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color,14);
	cout<<"finish \n";
	SetConsoleTextAttribute(color,15);
	for(int h=0;h<=5;h++){
for(int w=0;w<=60;w++){
cout<<"=";}
cout<<endl;
for(int w=0;w<=10;w++)
cout<<"|     ";
cout<<endl;
cout<<"|";
for(int w=1;w<=10;w++){
if(player1==tile && player2==tile && player3==tile && player4==tile){
	SetConsoleTextAttribute(color,5);
	cout<<" "<<p1;
	SetConsoleTextAttribute(color,1);
	cout<<p2;
	SetConsoleTextAttribute(color,11);
	cout<<p3;
	SetConsoleTextAttribute(color,4);
	cout<<p4;
	SetConsoleTextAttribute(color,15);
}
else if(player1==tile && player2==tile && player3==tile){
	SetConsoleTextAttribute(color,5);
	cout<<" "<<p1;
	SetConsoleTextAttribute(color,1);
	cout<<p2;
	SetConsoleTextAttribute(color,11);
	cout<<p3<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player4==tile && player2==tile && player3==tile){
	SetConsoleTextAttribute(color,1);
	cout<<" "<<p2;
	SetConsoleTextAttribute(color,11);
	cout<<p3;
	SetConsoleTextAttribute(color,4);
	cout<<p4<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player1==tile && player2==tile && player4==tile){
	SetConsoleTextAttribute(color,5);
	cout<<" "<<p1;
	SetConsoleTextAttribute(color,1);
	cout<<p2;
	SetConsoleTextAttribute(color,4);
	cout<<p4<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player1==tile && player4==tile && player3==tile){
	SetConsoleTextAttribute(color,5);
	cout<<" "<<p1;
	SetConsoleTextAttribute(color,11);
	cout<<p3;
	SetConsoleTextAttribute(color,4);
	cout<<p4<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player1==tile && player2==tile){
	SetConsoleTextAttribute(color,5);
	cout<<"  "<<p1;
	SetConsoleTextAttribute(color,1);
	cout<<p2<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player1==tile && player3==tile){
	SetConsoleTextAttribute(color,5);
	cout<<"  "<<p1;
	SetConsoleTextAttribute(color,11);
	cout<<p3<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player1==tile && player4==tile){
	SetConsoleTextAttribute(color,5);
	cout<<"  "<<p1;
	SetConsoleTextAttribute(color,4);
	cout<<p4<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player2==tile && player3==tile){
	SetConsoleTextAttribute(color,1);
	cout<<"  "<<p2;
	SetConsoleTextAttribute(color,11);
	cout<<p3<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player2==tile && player4==tile){
	SetConsoleTextAttribute(color,1);
	cout<<"  "<<p2;
	SetConsoleTextAttribute(color,4);
	cout<<p4<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player3==tile && player4==tile){
	SetConsoleTextAttribute(color,11);
	cout<<"  "<<p3;
	SetConsoleTextAttribute(color,4);
	cout<<p4<<" ";
	SetConsoleTextAttribute(color,15);
}
else if(player1==tile){
	SetConsoleTextAttribute(color,5);
	cout<<"  "<<p1<<"  ";
	SetConsoleTextAttribute(color,15);}
else if(player2==tile){
	SetConsoleTextAttribute(color,1);
	cout<<"  "<<p2<<"  ";
	SetConsoleTextAttribute(color,15);}
else	if(player3==tile){
	SetConsoleTextAttribute(color,11);
	cout<<"  "<<p3<<"  ";
	SetConsoleTextAttribute(color,15);}
else	if(player4==tile){
	SetConsoleTextAttribute(color,4);
	cout<<"  "<<p4<<"  ";
	SetConsoleTextAttribute(color,15);}
	else cout<<"     ";
cout<<"|";	
tile--;
}
cout<<endl;
	for(int w=0;w<=10;w++)
cout<<"|     ";
cout<<endl;
}

for(int w=0;w<=60;w++){
cout<<"=";}
SetConsoleTextAttribute(color,14);
cout<<"\n                                                        start\n";
SetConsoleTextAttribute(color,15);}

void turn(int &dice){
		for(int d=1;d<=2;d++){
board();
	SetConsoleTextAttribute(color,8);
	cout<<"  ___________________\n |                 ||\n |      _____      ||\n |     /     \\     ||\n |     \\     /     ||\n |      \\___/      ||\n |                 ||\n |_________________||\n  ------------------/\n";
Sleep(50);
system("cls");
board();
	SetConsoleTextAttribute(color,8);
		cout<<"  ___________________\n |   _             ||\n |  / \\            ||\n |  \\_/            ||\n |            _    ||\n |           / \\   ||\n |           \\_/   ||\n |_________________||\n  ------------------/\n";
Sleep(50);
system("cls");
board();
	SetConsoleTextAttribute(color,8);
		cout<<"  ___________________\n |    _       _    ||\n |   / \\     / \\   ||\n |   \\_/     \\_/   ||\n |        _        ||\n |       / \\       ||\n |       \\_/       ||\n |_________________||\n  ------------------/\n";
Sleep(50);
system("cls");
board();	SetConsoleTextAttribute(color,8);
		cout<<"  ___________________\n |   _          _   ||\n |  / \\        / \\  ||\n |  \\_/        \\_/  ||\n |   _          _   ||\n |  / \\        / \\  ||\n |  \\_/        \\_/  ||\n |__________________||\n  -------------------/\n";
Sleep(50);
system("cls");
board();
	SetConsoleTextAttribute(color,8);
		cout<<"  ___________________\n |   _          _   ||\n |  / \\  ____  / \\  ||\n |  \\_/ /    \\ \\_/  ||\n |   _  \\    /  _   ||\n |  / \\  \\__/  / \\  ||\n |  \\_/        \\_/  ||\n |__________________||\n  -------------------/\n";
Sleep(50);
system("cls");
board();
	SetConsoleTextAttribute(color,8);
		cout<<"  ___________________\n |   _    _     _   ||\n |  / \\  / \\   / \\  ||\n |  \\_/  \\_/   \\_/  ||\n |   _     _    _   ||\n |  / \\   / \\  / \\  ||\n |  \\_/   \\_/  \\_/  ||\n |__________________||\n  -------------------/\n";
Sleep(50);
system("cls");
	}
	srand((unsigned)time(0));
  dice = 1 + (rand() % 6);
}

void DICE(int &dice){
	SetConsoleTextAttribute(color,8);

	switch (dice){
	case 1:
			cout<<"  ___________________\n |                 ||\n |      _____      ||\n |     /     \\     ||\n |     \\     /     ||\n |      \\___/      ||\n |                 ||\n |_________________||\n  ------------------/\n";
	break;
	case 2:
		cout<<"  ___________________\n |   _             ||\n |  / \\            ||\n |  \\_/            ||\n |            _    ||\n |           / \\   ||\n |           \\_/   ||\n |_________________||\n  ------------------/\n";
	break;
	case 3:
		cout<<"  ___________________\n |    _       _    ||\n |   / \\     / \\   ||\n |   \\_/     \\_/   ||\n |        _        ||\n |       / \\       ||\n |       \\_/       ||\n |_________________||\n  ------------------/\n";
	break;
	case 4:
		cout<<"  ___________________\n |   _          _   ||\n |  / \\        / \\  ||\n |  \\_/        \\_/  ||\n |   _          _   ||\n |  / \\        / \\  ||\n |  \\_/        \\_/  ||\n |__________________||\n  -------------------/\n";
	break;
	case 5:
		cout<<"  ___________________\n |   _          _   ||\n |  / \\  ____  / \\  ||\n |  \\_/ /    \\ \\_/  ||\n |   _  \\    /  _   ||\n |  / \\  \\__/  / \\  ||\n |  \\_/        \\_/  ||\n |__________________||\n  -------------------/\n";
	break;
	case 6:
		cout<<"  ___________________\n |   _    _     _   ||\n |  / \\  / \\   / \\  ||\n |  \\_/  \\_/   \\_/  ||\n |   _     _    _   ||\n |  / \\   / \\  / \\  ||\n |  \\_/   \\_/  \\_/  ||\n |__________________||\n  -------------------/\n";
	break;
	default:
	cout<<"Error! Dice dropped X_X";}
	SetConsoleTextAttribute(color,15);

}
void ladder(){
	if(player1==7){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");		
		SetConsoleTextAttribute(color,15);
		system("cls");
			player1=player1+23;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 23 points\n";
		SetConsoleTextAttribute(color,15);}
	if(player2==7){
				SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
	system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player2=player2+23;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\nYou move up 23 points\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		SetConsoleTextAttribute(color,15);
	}
	if(player3==7){
				SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
			system("pause");	
			SetConsoleTextAttribute(color,15);
		system("cls");
			player3=player3+23;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 23 points\n";
	SetConsoleTextAttribute(color,15);}
	if(player4==7){
				SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");	
			SetConsoleTextAttribute(color,15);
		system("cls");
			player4=player4+23;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 23 points\n";
	SetConsoleTextAttribute(color,15);}
	if(player1==13){
				SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player1=player1+34;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 34 points\n";
	SetConsoleTextAttribute(color,15);}
	if(player2==13){
				SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");	
			SetConsoleTextAttribute(color,15);
		system("cls");
			player2=player2+34;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 34 points\n";
	SetConsoleTextAttribute(color,15);}
	if(player3==13){
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");	
			SetConsoleTextAttribute(color,15);
		system("cls");
			player3=player3+34;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 34 points\n";
		SetConsoleTextAttribute(color,15);}
		if(player4==13){
				SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player4=player4+34;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 34 points\n";
		SetConsoleTextAttribute(color,15);}
if(player1==36){
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player1=player1+7;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 7 points\n";
		SetConsoleTextAttribute(color,15);}
if(player2==36){
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player2=player2+7;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 7 points\n";
		SetConsoleTextAttribute(color,15);}
if(player3==36){
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player3=player3+7;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 7 points\n";
		SetConsoleTextAttribute(color,15);}
	if(player4==36){
				SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n  \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player4=player4+7;
			board();
			SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 7 points\n";
	SetConsoleTextAttribute(color,15);}
	if(player1==15){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n ";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player1=player1-7;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 7 points\n";
		SetConsoleTextAttribute(color,15);}
			if(player2==15){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n ";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player2=player2-7;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 7 points\n";
		SetConsoleTextAttribute(color,15);}
			if(player3==15){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n ";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player3=player3-7;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 7 points\n";
	SetConsoleTextAttribute(color,15);}
		if(player4==15){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n ";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player4=player4-7;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 7 points\n";
	SetConsoleTextAttribute(color,15);}
		if(player1==27){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n ";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player1=player1-22;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player2==27){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n ";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player2=player2-22;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player3==27){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n     --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player3=player3-22;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player4==27){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n     --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player4=player4-22;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player1==56){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n     --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player1=player1-36;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 36 points\n";
	SetConsoleTextAttribute(color,15);}
				if(player2==56){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n     --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player2=player2-36;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 36 points\n";
	SetConsoleTextAttribute(color,15);}
				if(player3==56){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n     --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player3=player3-36;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 36 points\n";
	SetConsoleTextAttribute(color,15);}
				if(player4==56){
				SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n     --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
			player4=player4-36;
			board();
			SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 36 points\n";
	SetConsoleTextAttribute(color,15);}
	if(player1==21){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player1=player1+30;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 30 points\n";
	SetConsoleTextAttribute(color,15);}
		if(player2==21){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player2=player2+30;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 30 points\n";
	SetConsoleTextAttribute(color,15);}
		if(player3==21){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player3=player3+30;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 30 points\n";
	SetConsoleTextAttribute(color,15);}
		if(player4==21){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player4=player4+30;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 30 points\n";
	SetConsoleTextAttribute(color,15);}
		if(player1==45){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player1=player1+8;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 8 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player2==45){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player2=player2+8;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 8 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player3==45){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player3=player3+8;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 8 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player4==45){
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player4=player4+8;
		board();
		SetConsoleTextAttribute(color,6);
		cout<<"You triggered a ladder!\n \n\\\\____\\\n \\\\____\\\n  \\\\____\\\n   \\\\____\\\n    \\\\____\\\n     \\\\____\\\n      \\\\____\\\n       \\\\____\\\n        \\\\    \\\nYou move up 8 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player1==37){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player1=player1-15;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 15 points\n";
	SetConsoleTextAttribute(color,15);}
				if(player2==37){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player2=player2-15;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 15 points\n";
	SetConsoleTextAttribute(color,15);}
				if(player3==37){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player3=player3-15;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 15 points\n";
	SetConsoleTextAttribute(color,15);}
				if(player4==37){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player4=player4-15;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 15 points\n";
	SetConsoleTextAttribute(color,15);}
				if(player1==50){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player1=player1-22;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
			if(player2==50){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player2=player2-22;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
					if(player3==50){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,2);
		system("cls");
		player3=player3-22;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
					if(player3==50){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player3=player3-22;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
					if(player4==50){
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\n";
		system("pause");
		SetConsoleTextAttribute(color,15);
		system("cls");
		player4=player4-22;
		board();
		SetConsoleTextAttribute(color,2);
		cout<<"You triggered a snake!\n    --..,_                     _,.--.\n       `'.'.                .'`__ o  `;__.      \n          '.'.            .'.'`  '---'`  `\n            '.`'--....--'`.'\n              `'--....--'`\nYou move down 22 points\n";
	SetConsoleTextAttribute(color,15);}
}


int main(int argc, char** argv) {
	bool gameover=true;
	int dice,mode;
	int s1,s2,s3,s4;
	ofstream score;
	ifstream display;
	string S;

	banner();
cout<<endl<<"Choose number of players (1-4): ";
cin>>mode;

		while(gameover!=false){
			if(mode>4){
				cout<<"Sorry, 4 is the max amount of players :/\n";
				break;}
				
system("cls");
board();
SetConsoleTextAttribute(color,5);
cout<<"Player 1 roll the dice...";
system("pause");
system("cls");
turn(dice);
player1=player1+dice;
board();
DICE(dice);
SetConsoleTextAttribute(color,5);
cout<<"You rolled "<<dice<<"!\n";
ladder();
system("pause");

if(player1>60){
	gameover!=false;
	break;}
	if(mode>=2){
		system("cls");
board();
		SetConsoleTextAttribute(color,1);
	cout<<"Player 2 roll the dice...";
	system("pause");
	system("cls");
	turn(dice);
	player2=player2+dice;
	board();
	DICE(dice);
	SetConsoleTextAttribute(color,1);
	cout<<"You rolled "<<dice<<"!\n";
	ladder();
	system("pause");
	if(player2>60){
		gameover=false;
		break;}}
	{if(mode>=3){
		system("cls");
board();
		SetConsoleTextAttribute(color,11);
			cout<<"Player 3 roll the dice...";
	system("pause");
	system("cls");
	turn(dice);
	player3=player3+dice;
	board();
	DICE(dice);
	SetConsoleTextAttribute(color,11);
	cout<<"You rolled "<<dice<<"!\n";
	ladder();
	system("pause");
	if(player3>60){
		gameover=false;
		break;}
	}
	}
	if(mode==4){
		system("cls");
board();
		SetConsoleTextAttribute(color,4);
			cout<<"Player 4 roll the dice...";
	system("pause");
	system("cls");
	turn(dice);
	player4=player4+dice;
	board();
	DICE(dice);
	SetConsoleTextAttribute(color,4);
	cout<<"You rolled "<<dice<<"!\n";
	ladder();
	system("pause");
	if(player4>60){
		gameover=false;
		break;}
	}
	}	
if(player1>60){
s1++;
for(int t=1;t<=5;t++){
 for(int c=2;c<=6;c++){
			SetConsoleTextAttribute(color,c);
	cout<<"                                   .''.       \n       .''.      .        *''*    :_\\/_:     . \n      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.\n  .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-\n :_\\/_:'.:::.    ' *''*    * '.\\'/.' _\\(/_'.':'.'\n : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *\n  '..'  ':::'     * /\\ *     .'/.\\'.   '\n      *            *..*         :\n        *\n        *";
SetConsoleTextAttribute(color,5);
cout<<"Player 1 Wins!!";
Sleep(600);
system("cls");
}}
}
if(player2>60){
s2++;
for(int t=1;t<=5;t++){
 for(int c=2;c<=6;c++){
			SetConsoleTextAttribute(color,c);
	cout<<"                                   .''.       \n       .''.      .        *''*    :_\\/_:     . \n      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.\n  .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-\n :_\\/_:'.:::.    ' *''*    * '.\\'/.' _\\(/_'.':'.'\n : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *\n  '..'  ':::'     * /\\ *     .'/.\\'.   '\n      *            *..*         :\n        *\n        *";
SetConsoleTextAttribute(color,1);
cout<<"Player 2 Wins!!";
Sleep(600);
system("cls");
}}
}
if(player3>60){
	s3++;
for(int t=1;t<=5;t++){
 for(int c=2;c<=6;c++){
			SetConsoleTextAttribute(color,c);
	cout<<"                                   .''.       \n       .''.      .        *''*    :_\\/_:     . \n      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.\n  .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-\n :_\\/_:'.:::.    ' *''*    * '.\\'/.' _\\(/_'.':'.'\n : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *\n  '..'  ':::'     * /\\ *     .'/.\\'.   '\n      *            *..*         :\n        *\n        *";
SetConsoleTextAttribute(color,11);
cout<<"Player 2 Wins!!";
Sleep(600);
system("cls");
}}
}
if(player4>60){
	s4++;
for(int t=1;t<=5;t++){
 for(int c=2;c<=6;c++){
			SetConsoleTextAttribute(color,c);
	cout<<"                                   .''.       \n       .''.      .        *''*    :_\\/_:     . \n      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.\n  .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-\n :_\\/_:'.:::.    ' *''*    * '.\\'/.' _\\(/_'.':'.'\n : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *\n  '..'  ':::'     * /\\ *     .'/.\\'.   '\n      *            *..*         :\n        *\n        *";
SetConsoleTextAttribute(color,4);
cout<<"Player 2 Wins!!";
Sleep(600);
system("cls");
}}
}
{

	score.open("score.txt");
score<<"Player 1 score is: "<<s1<<"  Player 2 score is: "<<s2<<"  Player 3 score is: "<<s3<<"  Player 4 score is: "<<s4;
	score.close();
}

char yesno;
SetConsoleTextAttribute(color,15);
cout<<"Game Over!\nPlay again?(y/n)\n(Display score 's')\n";
cin>>yesno;
switch(yesno){
	case 'y':
		player1=0,player2=0,player3=0,player4=0;
		system("cls");
	return	main(argc, argv);
	case 'n':
		cout<<"Thanks for Playing ^_^";
		break;
		case 's':
			display.open("score.txt");
			while(getline(display,S)){
				cout<<S;
			}
		default:
		break;
}
return 0;}

