#include <iostream>
using namespace std;

// problem 1     ~~~~~~~~~~~~     Multiplication Table 1 to 10
void printHeader()
{
  cout << "\n\n\t\t\t multiplication Table 1 to 10 \n\n";
  cout << "\t";

  for (int i = 1; i <= 10; i++)
  {
    cout << i << "\t";
  }
  cout << "\n___________________________________________________________________________________\n";
}
string ColumSperator(int i)
{
  if (i < 10)
    return "    |";
  else
    return "   |";
};
void PrintMultilicationTable()
{
  printHeader();
  for (int i = 1; i <= 10; i++)
  {

    cout << " " << i << ColumSperator(i) << "\t";
    for (int j = 1; j <= 10; j++)
    {
      cout << i * j
           << "\t";
    }
    cout << endl;
  }
}

// problem 3     ~~~~~~~~~~~~     Perfect Number

// problem 4     ~~~~~~~~~~~~     Perfect Number from 1 to N
int ReadPositiveNumber(string Message)
{
  int Number;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number < 0);
  return Number;
}
bool isPerfectNum(int Number)
{
  int sum = 0;
  for (int i = 1; i < Number; i++)
  {
    if (Number % 2 == 0)
      sum += i;
  }
  return Number == sum;
}
void PrintResult(int Num)
{
  if (isPerfectNum(Num))
    cout << Num << ": Is Perfect Number\n";
  else
    cout << Num << ": Is not Perfect Number\n";
}
void PrintResultPerfectFrom1ToN(int Num)
{
  for (int i = 1; i <= Num; i++)
  {

    if (isPerfectNum(i))
      cout << i << endl;
  }
}

// problem 5     ~~~~~~~~~~~~     Print Difits in a Reversed Order
void PrintLastNum(int num)
{
  int Rem = 0;
  while (num > 0)
  {
    Rem = num % 10;
    num /= 10;
    cout << Rem << endl;
  }
}

// problem 6     ~~~~~~~~~~~~     Sum of Digits
int SumDigits(int num)
{
  int sum = 0;
  int Rem = 0;
  while (num > 0)
  {
    Rem = num % 10;
    num /= 10;
    sum = sum + Rem;
  }
  return sum;
}

// problem 7     ~~~~~~~~~~~~     Reverse Numbers
int ReverseNumber(int num)
{
  int Rem = 0, Rev = 0;
  while (num > 0)
  {
    Rem = num % 10;
    num /= 10;
    Rev = Rev * 10 + Rem;
  }
  return Rev;
}

// problem 8     ~~~~~~~~~~~~     Digit Frequency
int DigitFrequancy(short digit, int num)
{
  int count = 0, Rem = 0;
  while (num > 0)
  {
    Rem = num % 10;
    num /= 10;

    if (digit == num)
    {
      count++;
    };
    return count++;
  }
  // cout << "Digit " << digit << "Frequance is " << count << " Times(S)";
}

// problem 9     ~~~~~~~~~~~~     Digit Frequency 2
void printAllDigitsFrequeny(int num)
{
  cout << endl;
  for (int i = 0; i < 10; i++)
  {
    short digitFreq = 0;
    digitFreq = DigitFrequancy(i, num);

    if (digitFreq > 0)
    {
      cout << "Digit " << i << "Frequency is " << digitFreq << " Time(S)\n";
    }
  }
}

// problem 10    ~~~~~~~~~~~~     Print Digits In Order
// Will Reuse above functions
void PrintDigits(int Num)
{
  int Remainde;
  while (Num > 0)
  {
    Remainde = Num % 10;
    Num = Num / 10;
    cout << Remainde;
  }
}

int main()
{

  // problem 1     ~~~~~~~~~~~~     Multiplication Table 1 to 10
  // PrintMultilicationTable();

  // problem 2     ~~~~~~~~~~~~     Print All Prime Number 1 to N

  // problem 3-4   ~~~~~~~~~~~~     Perfect Number
  PrintResult(ReadPositiveNumber("Enter a positive Number"));
  PrintResultPerfectFrom1ToN(ReadPositiveNumber("Enter a positive Number"));

  // problem 5     ~~~~~~~~~~~~     Print Digits in a Reversed Order
  PrintLastNum(ReadPositiveNumber("Enter a num to print last digit\n"));

  // problem 6     ~~~~~~~~~~~~     Sum of Digits
  cout << SumDigits(ReadPositiveNumber("Enter a positive number please;")) << endl;

  // problem 7     ~~~~~~~~~~~~     Reverse Numbers
  cout << ReverseNumber(ReadPositiveNumber("Enter a positive number please;")) << endl;

  // problem 8     ~~~~~~~~~~~~     Digit Frequency
  int num = ReadPositiveNumber("Enter the main number");
  short digit = ReadPositiveNumber("Enter thr one digit to check");
  cout << DigitFrequancy(digit, num);

  // problem 9     ~~~~~~~~~~~~     Digit Frequency
  int num = ReadPositiveNumber("Enter the number");
  printAllDigitsFrequeny(num);

  // problem 10    ~~~~~~~~~~~~     Print Digits In Order
  PrintDigits(ReverseNumber(ReadPositiveNumber("Enter a number? ")));
}