#include <iostream>
#include <ctdlib>
using namespace std;

enum enQuestionLevel { easyLevel = 1 , medLevel = 2, hardLevel =3 , mix =4};
enum enOperationType { add = 1 , sub = 2, mult =3 ,div =4, mixOp=5};

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
	
	enOperationType opType;
	enQuestionLevel quesLevel;
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

int randomNumber(int from, int to) {
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
enOperationType getRandomOpType() {
	int op = randomNumber (1,4);
	return (enOperationType)op;
}

int simpleCalculator(int num1, int num2, enOperationType opType) {
	switch (opType)
	{
	case enOperationType::add:
		return num1 + num2;
	case enOperationType::sub:
		return num1 - num2;
	case enOperationType::mult:
		return num1 * num2;
	case enOperationType::div:
		return num1 / num2;
	case enOperationType::mixOp:
	default:
		return num1 + num2;
		
	}
}
stQuestion generateQuestion(enQuestionLevel quesLevel, enOperationType opType) {
	stQuestion question;
	if (quesLevel == enQuestionLevel::mix)
	{
		quesLevel = (enQuestionLevel) randomNumber(1, 3);
	}
	if (opType == enOperationType::mixOp)
	{
		opType = getRandomOpType();
	}
	question.opType = opType;

	switch (quesLevel)
	{
	case enQuestionLevel::easyLevel:
		question.num1 = randomNumber(1, 10);
		question.num2 = randomNumber(1, 10);
		question.correctAnswer = simpleCalculator(question.num1, question.num2, question.opType);
		question.quesLevel = quesLevel;
		return question;
	case enQuestionLevel::medLevel:
		question.num1 = randomNumber(35, 85);
		question.num2 = randomNumber(10, 30);
		question.correctAnswer = simpleCalculator(question.num1, question.num2, question.opType);
		question.quesLevel = quesLevel;
		return question;
	case enQuestionLevel::hardLevel:
		question.num1 = randomNumber(70, 100);
		question.num2 = randomNumber(40,69);
		question.correctAnswer = simpleCalculator(question.num1, question.num2, question.opType);
		question.quesLevel = quesLevel;
		return question;
	}
	return question;

}

int readQuestionAnswer() {
	int answer;
	cin >> answer;
	return answer;
}
void printTheQuestion(stQuizz& quizz, short questionNumber) {
	cout << endl;
	cout << "Question [" << questionNumber + 1 << "/" << quizz.numberOfQues << "]" << "\n\n";
	cout << quizz.quesList[questionNumber].num1 << endl;
	cout << quizz.quesList[questionNumber].num2 << " ";
};
void correctTheQuestionAnswer(stQuizz& quizz, short questionNumber)
{
	if (quizz.quesList[questionNumber].playerAnswer != quizz.quesList[questionNumber].correctAnswer) {
		quizz.quesList[questionNumber].answerResult = false;
		quizz.noOfWrongAnswers++;
	}

}
void askCorrectQuestionListAnswers(stQuizz& quizz) {
	for (short i = 0; i < quizz.numberOfQues; i++)
	{
		printTheQuestion(quizz, i);
		quizz.quesList[i].playerAnswer = readQuestionAnswer();
		correctTheQuestionAnswer(quizz, i);
	}
	quizz.isPass = (quizz.noOFRightAnswers>= quizz.noOfWrongAnswers)
}

void generateQuizzQuestion (stQuizz & quizz){
	for (short  question  = 0; question  < quizz.numberOfQues ; question ++)
	{
		quizz.quesList[question] = generateQuestion(quizz.quesLevel, quizz.opType);
	}
}

void playMathGame() {
	stQuizz quizz;

	quizz.numberOfQues = readHowManyQuestions();
	quizz.quesLevel = readQustionLevel();
	quizz.opType = readOperationType();
	generateQuizzQuestion(quizz);
	


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
		cout << endl << "Do You want to play Again y/n";
	} while (playAgain == 'Y'|| playAgain =='y');
}
int main()
{
	srand((unsigned)time(NULL));

}
