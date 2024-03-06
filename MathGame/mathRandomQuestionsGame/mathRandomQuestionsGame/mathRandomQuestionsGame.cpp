#include <iostream>
using namespace std;
enum enQuestionLevel { easyLevel = 1 , medLevel = 2, hardLevel =3 , mix =4};
enum enOperationType { add = 1 , sub = 2, mult =2 ,div =4, mixOp=5};

short readHowManyQuestions() {
	short num = 0;
	do {
		cout << endl << "how many questions do you want to answer? (1 to 10)\n";
		cin >> num;
		
	} while (num < 1 || num > 10);
	return num;
}

enQuestionLevel readQustionLevel(){
	short quesLEvel = 0;
	do {
		cout << "Enter question level [1] easy, [2] med, [3] hard, [4] mix  ? ";
		cin >> quesLEvel;
	} while (quesLEvel < 1 || quesLEvel>4);
	return (enQuestionLevel)quesLEvel;
}
enOperationType readOperationType(){
	short opType = 0;
	do {
		cout << "Enter Operation Type [1] add , [2] sub, [3] nul , [4] div, [5] mix ? ";
		cin >> opType;
	} while (opType< 1 || opType>5);
	return (enOperationType) opType;
}
struct stQuestion {
	int num1 = 0;
	int num2 = 0;
	

	int correctAnswer = 0;
	int playerAnswer = 0;
	bool answerResult = false;
};
struct stQuizz {
	stQuestion quesList[100];
	short numberOfQues = 0;
	enQuestionLevel quesLevel;
	enOperationType opType;
	short noOfWrongAnswers=0;
	short noOFRightAnswers = 0;
	bool isPass = false;


};

void playMathGame() {
	stQuizz quizz;

	quizz.numberOfQues = readHowManyQuestions();
	quizz.quesLevel = readQustionLevel();
	quizz.opType = readOperationType();


}

void resetScreen() {
	system("cls");
	system("color 0F");
}

void stratGame() {
	char playAgain = 'Y';

	do
	{
		resetScreen();
		playMathGame();
		cout <<endl <<"Do You want to play Again y/n;"
	} while (playAgain == 'Y'|| playAgain =='y');
}
int main()
{
	srand((unsigned)time(NULL));

}
