// {NAME: Khalid_Mahir ,TITLE: Software/Data Engineer ,DATE: July-2023}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const float PI = 3.14;

// problem #1,2    - - -- - - -- - -      Read and Print Name
string ReadName()
{
  string Name;
  cout << "Please enter your name? " << endl;
  getline(cin, Name);
  return Name;
};
void PrintName(string Name)
{
  cout << "your name is : " << Name << endl;
}

// problem #3      - - -- - - -- - -      Odd or Even
enum enNumType
{
  odd = 1,
  even = 2
};
int ReadNum()
{
  int num;
  cout << "please enter a number " << endl;
  cin >> num;
  return num;
};
enNumType CheckNumType(int num)
{
  int result = num % 2;
  if (result == 0)
    return enNumType::even;
  else
    return enNumType::odd;
};
void PrintNumberType(enNumType numberType)
{
  if (numberType == enNumType::even)
    cout << "\n number is even \n";
  else
    cout << "\n number is odd \n";
};

// problem #4,5    - - -- - - -- - -      Hire A Driver Case 1,2
struct stInfo
{
  int age;
  bool hasDrivingLicence;
  bool hasRecommendation;
};
stInfo ReadInfo()
{
  stInfo info;
  cout << "please Enter your Age? " << endl;
  cin >> info.age;
  cout << "Do ou have driver licence? " << endl;
  cin >> info.hasDrivingLicence;
  cout << "Do ou have recommandations? " << endl;
  cin >> info.hasRecommendation;
  return info;
};
bool IsAccepted(stInfo info)
{
  if (info.hasRecommendation)
  {
    return true;
  }
  else
  {
    return (info.age > 21 && info.hasDrivingLicence);
  }
};
void PrintInfo(stInfo info)
{
  if (IsAccepted(info))
    cout << "\n Hired \n";
  else
    cout << "\n Rejected  \n";
};

// problem #6      - - -- - - -- - -      Full Name
struct stInfoName
{
  string firstName;
  string lastName;
};
stInfoName ReadInfoName()
{
  stInfoName infoName;
  cout << " Please enter your first name? " << endl;
  cin >> infoName.firstName;
  cout << " Please enter your last name? " << endl;
  cin >> infoName.lastName;
  return infoName;
};
string GetFullName(stInfoName info)
{
  string fullName = "";
  fullName = info.firstName + " " + info.lastName;
  return fullName;
};
void PrintFullName(string fullName)
{
  cout << "\n Your full name is: " << fullName << endl;
}

// problem #7      - - -- - - -- - -      Half Number
float CalculateHalfNumbers(int num)
{
  return (float)num / 2;
}
void PrintHalfNumberResult(int num)
{
  string result = "Half of " + to_string(num) + " is " + to_string(CalculateHalfNumbers(num)) + "\n";
  cout << endl
       << result;
};

// problem #8      - - -- - - -- - -      Mark Pass Fail
enum enPassFail1
{
  passed = 1,
  failed = 2
};
int readMark()
{
  int mark;
  cout << " Please enter your mark? " << endl;
  cin >> mark;
  return mark;
}
enPassFail1 CheckMark(int mark)
{

  if (mark >= 50)
    return enPassFail1::passed;
  else
    return enPassFail1::failed;
};
void PrintMark(int Mark)
{
  if (CheckMark(Mark) == enPassFail1::passed)
    cout << "\n You Passed" << endl;
  else
    cout << "\n You Failed" << endl;
};

// problem #9      - - -- - - -- - -      Sum Of 3 Numbers
void Read3Numbers(int &num1, int &num2, int &num3)
{
  cout << " Enter number 1?";
  cin >> num1;
  cout << " Enter number 2?";
  cin >> num2;
  cout << " Enter number 3?";
  cin >> num3;
};
int SumOf3Numbers(int num1, int num2, int num3)
{
  return num1 + num2 + num3;
};
int PrintSumRes(int total)
{
  return total;
};

// problem #10     - - -- - - -- - -      Average of 3 numbers
float calculateAvg(int mark1, int mark2, int mark3)
{
  return (float)SumOf3Numbers(mark1, mark2, mark3) / 3;
};

// problem #11     - - -- - - -- - -      Average Pass/Fail
enum enPassFail2
{
  pass = 1,
  fail = 2
};
enPassFail2 checkAvg(float avg)
{
  if (avg >= 50)
    return enPassFail2::pass;
  else
    return enPassFail2::fail;
}
void printResults(float average)
{
  cout << "Your Average is " << average;

  if (checkAvg(average) == enPassFail2::pass)
    cout << "you passed" << endl;
  else
    cout << " You failed" << endl;
}

// problem #12     - - -- - - -- - -      Max of Two Numbers
void Read2Numbers(int &num1, int &num2)
{
  cout << "num1?";
  cin >> num1;
  cout << "num2?";
  cin >> num2;
}
int MAxOf2Numbers(int num1, int num2)
{
  if (num1 > num2)
    return num1;
  else
    return num2;
}
void PrintRes(int Max)
{
  cout << "THe Maximum Numbers is: [ " << Max << " ]" << endl;
};

// problem #13     - - -- - - -- - -      Max of Three Numbers
int MAxOf3Numbers(int num1, int num2, int num3)
{
  if (num1 > num2)
  {
    if (num1 > num3)
      return num1;
  }
  else if (num2 > num3)
  {
    return num2;
  }
  else
  {
    return num3;
  };
}

// problem #14     - - -- - - -- - -      Swap Two Numbers
void Swap(int &A, int &B)
{
  int swap;
  swap = A;
  A = B;
  B = swap;
};
void PrintSwapNumbers(int num1, int num2)
{
  cout << "\n Number1 = [" << num1 << "]";
  cout << "\n Number2 = [" << num2 << "]" << endl;
};

// problem #15     - - -- - - -- - -      Rectangle Area
void Read2Numbersfloat(float &num1, float &num2)
{
  cout << "num1?";
  cin >> num1;
  cout << "num2?";
  cin >> num2;
}
float calcualteRectangleArea(float A, float B)
{
  return A * B;
}
void printResultofRectangleArea(float Area)
{
  cout << "Rectangle area = " << Area << endl;
}

// problem #16     - - -- - - -- - -      Rectangle Area by Diagonal and Side
float calcualteRectangleAreaByDiagonal(float a, float d)
{
  return a * (sqrt(pow(d, 2) - pow(a, 2)));
}
void printcalcualteRectangleAreaByDiagonal(float area)
{
  cout << " Rectangle area by diagonal = [ " << area << " ]" << endl;
}

// problem #17     - - -- - - -- - -      Triangle Area
float triangleArea(float Base, float hight)
{
  return (Base / 2) * hight;
};
void printTriangleArea(float area)
{
  cout << "Triangle Area = [" << area << "]" << endl;
};

// problem #18     - - -- - - -- - -      Circle Area
float readRadious(float &radios)
{
  cout << "please enter radios R ?";
  cin >> radios;
  return radios;
}
float circleArea(float PI, float r)
{
  return PI * pow(r, 2);
}
void PrintcircleArea(float Area)
{
  cout << "Circle Area Equals: [" << Area << "]" << endl;
}

// problem #19     - - -- - - -- - -      Circle Area by Diameter
float ReadDiameterForCirArea(float &Diameter)
{
  cout << "Enter the Dimeter? ";
  cin >> Diameter;
  return Diameter;
};
float circleAreaDiameter(float Diameter)
{
  return (PI * (pow(Diameter, 2)) / (4));
}
void printcircleAreaDiameter(float Area)
{
  cout << "Circle Area Through Diameter :" << Area;
}

// problem #20     - - -- - - -- - -      Circle Area Inscribed in a Square
float ReadCirAreaInscribedSquare(float A)
{
  cout << "Please Enter Square side A";
  cin >> A;
  return A;
}
float CirAreaInscribesSquare(float A)
{
  return (pow(A / 2, 2)) * PI;
};
void PrintCirAreaInscribedSquare(float Area)
{
  cout << "Circle Area Inscribed a Square =" << Area << endl;
}

// problem #21     - - -- - - -- - -      Circle Area Along the circumference
float readCircleAreaAlongCircumference(float &L)
{
  cout << "Enter L";
  cin >> L;
  return L;
}
float CircleAreaByCircumference(float L)
{
  return (pow(L, 2) / (4 * PI));
};
void printCircleAreaByCircumference(float Arae)
{
  cout << " Circle Area By Circumference= [" << Arae << "]" << endl;
};

// problem #22     - - -- - - -- - -      Circle Area Inscribed in an Isosceles Triangle
void ReadCirAreaTriangleData(float &A, float &B)
{
  cout << "Entertriangle side A?";
  cin >> A;
  cout << "Entertriangle side B?";
  cin >> B;
};
float CirAreaTriangleData(float A, float B)
{
  return PI * (pow(B, 2) / 4) * (2 * (A - B) / (2 * (A + B)));
}
void PrintCirAreaTriangleData(float Area)
{
  cout << " Cir Area Triangle Data" << Area << endl;
}

// problem #23     - - -- - - -- - -      Circle Area Described Around an Arbitary Triangle.
float ReadCirAreaDescribedArbitary(float &a, float &b, float &c)
{
  cout << "Enter side a? ";
  cin >> a;
  cout << "Enter side b? ";
  cin >> b;
  cout << "Enter side c? ";
  cin >> c;
}
float CircleAreaDescribedArbitary(float aSide, float bSide, float cSide)
{
  float P = (aSide + bSide + cSide) / 2;
  float Area;
  Area = PI * pow((aSide * bSide * cSide) / (4 * sqrt(P * (P - aSide) * (P - bSide) * (P - cSide))), 2);
  return Area;
};
void PrintCircleAreaDescribedArbitary(float Area)
{
  cout << "Circle Area Describes on Arbitary= " << Area << endl;
};

// problem #24     - - -- - - -- - -      Validate Age
int ReadAge(int &age)
{

  cout << "Enter Your Age";
  cin >> age;
  return age;
}
bool CheckNumberRang(int number, int from, int to)
{
  return (number >= from && number <= to);
};
void PrintValidateNumbers(int Age)
{
  if (CheckNumberRang(Age, 18, 45))
    cout << "[ " << Age << " ] Is a valid age";
  else
    cout << "[ " << Age << " ] Is invalid age";
};

// problem #25     - - -- - - -- - -      Read Until Age Between 18 and 45
int ReadUntilAgeBetween(int from, int to)
{
  int age = 0;
  do
  {
    age = ReadAge(age);
  }
  // "Not" notation, to excit the loop when it becomes true;
  while (!CheckNumberRang(age, from, to));
}

// problem #26     - - -- - - -- - -      Print Numbers from 1 to N
int ReadANumber()
{
  int num;
  cout << "Enter A number:\n";
  cin >> num;
  return num;
}
void PrintRangeFrom1ToN(int n)
{
  cout << "Range Printerd Using For Statement: \n";
  for (int Counter = 1; Counter <= n; Counter++)
  {
    cout << Counter << endl;
  };
}

// problem #27     - - -- - - -- - -      Print Numbers from N to 1
void PringRangeFromNto1(int n)
{
  int counter = n + 1;
  cout << "RANGE IS: \n";
  do
  {
    counter--;
    cout << counter << endl;
  } while (counter > 1);
}

// problem #28     - - -- - - -- - -      Print Sum Odd Numbers from 1 to N
// problem #29     - - -- - - -- - -      Print Sum Even Numbers from 1 to N
enum enOddEven
{
  odd = 1,
  even = 2
};
enOddEven ChecKOddOrEven(int Num)
{
  if (Num % 2 != 0)
    return enOddEven::odd;
  else
    return enOddEven::even;
}
int PrintSumOdd(int n)
{
  for (int counter = 1; counter <= n; counter++)
  {
    int sum = 0;

    if (ChecKOddOrEven(counter) == enOddEven::odd)
    {
      sum += counter;
      return sum;
    }

    else if (ChecKOddOrEven(counter) == enOddEven::even)
    {
      sum += counter;
      return sum;
    }
  }
};

// problem #30     - - -- - - -- - -      Read Print Factorial Numbers.
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
int Factorial(int N)
{
  int F = 1;
  for (int Counter = N; Counter >= 1; Counter--)
  {
    F = F * Counter;
  }
  return F;
}

// problem #31     - - -- - - -- - -      Power of 2,3,4.
void PowerOf_2_3_4(int Number)
{
  cout << "Power of 2 is [" << pow(Number, 2) << "]" << endl;
  cout << "Power of 3 is [" << pow(Number, 3) << "]" << endl;
  cout << "Power of 4 is [" << pow(Number, 4) << "]" << endl;
};

// problem #32     - - -- - - -- - -      Power of M.
int ReadPower()
{
  int M;
  cout << "Please Enter M of the power";
  cin >> M;
  return M;
}
int PowerOfM(int num, int M)
{
  if (M == 0)
  {
    return 1;
  }
  int P = 1;
  for (int i = 1; i <= M; i++)
  {
    P = P * num;
  }
  return P;
}

// problem #33     - - -- - - -- - -      A,B,C,D,E,F
int ReadNumInRange(int From, int To)
{
  int Grade;
  do
  {
    cout << "Please enter a  grade between 0 and 100" << endl;
    cin >> Grade;
  } while (Grade < From || Grade > To);
  return Grade;
}
char GetGradeLetter(int Grade)
{
  if (Grade >= 90)
    return 'A';
  else if (Grade >= 80)
    return 'B';
  else if (Grade >= 70)
    return 'C';
  else if (Grade >= 60)
    return 'D';
  else if (Grade >= 50)
    return 'E';
  else
    return 'F';
}

// problem #34     - - -- - - -- - -      Commision Percentage
int ReadTotalSales()
{
  int totalSales;
  cout << "ENTER the total of sales";
  cin >> totalSales;
};
float GetCommisionPercentage(float TotalSales)
{
  if (TotalSales >= 1000000)
    return 0.01;
  else if (TotalSales >= 500000)
    return 0.02;
  else if (TotalSales >= 100000)
    return 0.03;
  else if (TotalSales >= 50000)
    return 0.05;
  else
    return 0.000;
}
float calcTotalCommission(float TotalSales)
{
  return GetCommisionPercentage(TotalSales) * TotalSales;
}

// problem #35     - - -- - - -- - -      Piggy Bank Calculator
struct stPiggyBankCalculator
{
  int Pennies, Nickels, Dimes, Quarters, Dollars;
} stPiggyBankCalculator readPiggyBankContents()
{
  stPiggyBankCalculator piggyBankContent;
  cout << "Enter total numbers of Pennies ? ";
  cin >> piggyBankContent.Pennies;
  cout << "Enter total numbers of Nickels? ";
  cin >> piggyBankContent.Nickels;
  cout << "Enter total numbers of Dimes? ";
  cin >> piggyBankContent.Dimes;
  cout << "Enter total numbers of Quarter ? ";
  cin >> piggyBankContent.Quarters;
  cout << "Enter total numbers of Dollars? ";
  cin >> piggyBankContent.Dollars;
}
int CalcTotalPennies(stPiggyBankCalculator PiggyBankContet)
{
  int totalPennies = 0;

  totalPennies = PiggyBankContet.Pennies * 1 + PiggyBankContet.Nickels * 5 + PiggyBankContet.Dimes * 10 + PiggyBankContet.Quarters * 25 + PiggyBankContet.Dollars * 100;
  return totalPennies;
}

// problem #36     - - -- - - -- - -      Simple Calculator
enum enOperationType
{
  Add = '+',
  Subtract = '-',
  Multiply = '*',
  Divide = '/'
};
float ReadNumberforOpType(string message)
{
  float Number = 0;
  cout << message;
  cin >> Number;
  return Number;
};
enOperationType ReadOpType()
{
  char optype = '+';
  cout << "Please Enter Operation type: + , - , *, /";
  cin >> optype;
  return (enOperationType)optype;
};
float CalcOpType(float num1, float num2, enOperationType optype)
{
  switch (optype)
  {
  case enOperationType::Add:
    return num1 + num2;
  case enOperationType::Subtract:
    return num1 - num2;
  case enOperationType::Multiply:
    return num1 * num2;
  case enOperationType::Divide:
    return num1 / num2;

  default:
    return 0;
  }
}

// problem #37     - - -- - - -- - -      Sum Until -99
float SumNumberss()
{
  int Sum = 0, Number = 0, Counterr = 1;
  do
  {
    Number = ReadNumberforOpType("Please Enter a number " + to_string(Counterr));
    if (Number == -99)
    {
      break;
    }
    Sum += Number;
    Counterr++;
  } while (Number != -99);
}

// problem #38     - - -- - - -- - -      Prime Numbers
enum enprime
{
  Prime = 1,
  NotPrime = 2
};
float ReadPositiveNumberforPrime(string Message)
{
  float Num = 0;
  do
  {
    cout << Message << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
};
enprime CheckPrime(int Number)
{
  int M = round(Number / 2);
  for (int counter = 2; counter <= M; counter++)

  {
    if (Number % counter == 0)
      return enprime::NotPrime;
  }
  return enprime::Prime;
}
void PrintNumberType(int Num)
{
  switch (CheckPrime(Num))
  {
  case enprime::Prime:
    cout << "THE number is prime ";
    break;
  case enprime::NotPrime:
    cout << "the number is not prime";
    break;
  }
}

// problem #39     - - -- - - -- - -      Pay Remainder
float CalculateRemainder(float RoralBill, float TotalCashPAid)
{
  return TotalCashPAid - totalBill;
}

// problem #40     - - -- - - -- - -      Servive Fee and Sales Tax.
float TotalBillAfterServiceAndTax(float TotalBill)
{
  TotalBill *= 1.1;
  TotalBill *= 1.16;
  return TotalBill;
}

// problem #41     - - -- - - -- - -      Weeks and Days
float HoursToDays(float NumberOfHours)
{
  return (float)NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
  return (float)NumberOfHours / 24 / 7;
}
float DaysToWeeks(float NumberOFDays)
{
  return (float)NumberOFDays / 7;
}

// problem #42     - - -- - - -- - -      Task Duration In Second.
struct srtTaskDuration
{
  int NumOfDays, NumOfHours, NumOfMinutes, NumOfSeconds
};
srtTaskDuration ReadTaskDuration()
{
  srtTaskDuration TaskDuration;
  TaskDuration.NumOfDays = ReadPositiveNumber("Enter Number of DAys");
  TaskDuration.NumOfHours = ReadPositiveNumber("Enter Number of Hours");
  TaskDuration.NumOfMinutes = ReadPositiveNumber("Enter Number of Minutes");
  TaskDuration.NumOfSeconds = ReadPositiveNumber("Enter Number of Seconds");
  return TaskDuration;
}
int TaskDurationInSeconds(srtTaskDuration TaskDuration)
{
  int DurationInSeconds = 0;
  DurationInSeconds = TaskDuration.NumOfDays * 24 * 60 * 60;
  DurationInSeconds += TaskDuration.NumOfHours * 60 * 60;
  DurationInSeconds += TaskDuration.NumOfMinutes * 60;
  DurationInSeconds += TaskDuration.NumOfSeconds;
  return DurationInSeconds;
}

// problem #46     - - -- - - -- - -      Letters from A to Z
void PrintLetterAToZ()
{
  for (int i = 65; i <= 90; i++)
  {
    cout << char(i) << endl;
  }
}

// problem #47     - - -- - - -- - -      Loan Amount
float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
  return (float)LoanAmount / MonthlyInstallment;
}

// problem #48     - - -- - - -- - -      Loa Installment Months
float MonthlyInstallment(float LoanAmount, float NumOfMonths)
{
  return (float)LoanAmount / NumOfMonths;
}

// problem #49,50  - - -- - - -- - -      ATM PIN
string ReadPinCode()
{
  string PinCOde;
  cout << "Enter PIN COde";
  cin >> PinCOde;
  return PinCOde;
}
bool Login()

{

  string PinCode;
  int Counter = 3;
  do
  {
    Counter--;
    PinCode = ReadPinCode();
    if (PinCode == "1234")
    {
      return 1;
    }
    else
      system("coloar 4F");
    cout << "Wrong PIN,, you have " << Counter << "More try" << endl;
    {
    }
  } while (Counter >= 1 && PinCode != "1234");
  return 0;
}

int main()
{

  // problem #1,2   -- - - --     read and print name
  PrintName(ReadName());

  // problem #3     -- - - --     odd or Even
  PrintNumberType(CheckNumType(ReadNum()));

  // problem #4,5   -- - - --     hire a driver case 1.2
  PrintInfo(ReadInfo());

  // problem #6     -- - - --     full name
  PrintFullName(GetFullName(ReadInfoName()));

  // problem #7     -- - - --     half number
  PrintHalfNumberResult(ReadNum());

  // problem #8     -- - - --     mark pass fail
  PrintMark(readMark());

  // problem #9     -- - - --     sum of 3 numbers
  int num1, num2, num3;
  Read3Numbers(num1, num2, num3);
  PrintSumRes(SumOf3Numbers(num1, num2, num3));

  // problem #10    -- - - --     sum of 3 numbers
  PrintSumRes(calculateAvg(num1, num2, num3));

  // problem #11    -- - - --     average pass/fail
  printResults(calculateAvg(num1, num2, num3));

  // problem #12    -- - - --     max of 2 numbers
  Read2Numbers(num1, num2);
  PrintRes(MAxOf2Numbers(num1, num2));

  // problem #13    -- - - --     max of 3 numbers
  Read3Numbers(num1, num2, num3);
  PrintRes(MAxOf3Numbers(num1, num2, num3));

  // problem #14    -- - - --     swap two numbers
  Read2Numbers(num1, num2);
  cout << "Before Swapping ";
  PrintSwapNumbers(num1, num2);
  Swap(num1, num2);
  cout << "After Swapping" << endl;
  PrintSwapNumbers(num1, num2);

  //
  float A, B, C, Diagonal, Base, Hight, Radios, Diameter, L, aSide, bSide, cSide;
  int Num, age, from, to;
  //

  // problem #15    -- - - --     Rectangle Area
  Read2Numbersfloat(A, B);
  printResultofRectangleArea(calcualteRectangleArea(A, B));

  // problem #16    -- - - --     Rectangle Area By Diagonal & Side;
  Read2Numbersfloat(A, Diagonal);
  printcalcualteRectangleAreaByDiagonal(calcualteRectangleArea(A, Diagonal));

  // problem #17    -- - - --     Triangle Area
  Read2Numbersfloat(Base, Hight);
  printTriangleArea(triangleArea(Base, Hight));

  // problem #18    -- - - --     Circle Area
  readRadious(Radios);
  PrintcircleArea(circleArea(PI, Radios));

  // problem #19    -- - - --     Circle Area by Diameter
  ReadDiameterForCirArea(Diameter);
  printcircleAreaDiameter(circleAreaDiameter(Diameter));

  // problem #20    -- - - --     CircleArea Inscribed in a Square.
  ReadCirAreaInscribedSquare(A);
  PrintCirAreaInscribedSquare(CirAreaInscribesSquare(A));

  // problem #21    -- - - --     CircleArea by Circumference
  readCircleAreaAlongCircumference(L);
  PrintCirAreaInscribedSquare(CircleAreaByCircumference(L));

  // problem #22    -- - - --     Circle Area Inscribed in an Isosceles Triangle
  ReadCirAreaTriangleData(A, B);
  PrintCirAreaTriangleData(CirAreaTriangleData(A, B));

  // problem #23    -- - - --     Circle Area Described Around an Arbitary.
  ReadCirAreaDescribedArbitary(aSide, bSide, cSide);
  PrintCircleAreaDescribedArbitary(CircleAreaDescribedArbitary(aSide, bSide, cSide));

  // problem #24    -- - - --     Validate Age
  ReadAge(age);
  PrintValidateNumbers(CheckNumberRang(age, from, to));

  // problem #25    -- - - --     Read Until Age Between 18 and 45
  PrintValidateNumbers(ReadUntilAgeBetween(from, to));

  // problem #26    -- - - --     Print Numbers from 1 to N
  Num = ReadANumber();
  PrintRangeFrom1ToN(Num);

  // problem #27    -- - - --     Print Numbers from N to 1
  Num = ReadANumber();
  PringRangeFromNto1(Num);

  // problem #28    -- - - --     Print Sum Odd Numbers from 1 to N
  Num = ReadANumber();
  PrintSumOdd(Num);

  // problem #29    -- - - --     Print Sum Even Numbers from 1 to N
  Num = ReadANumber();
  PrintSumOdd(Num);

  // problem #30    -- - - --     Factorial Of N
  cout << Factorial(ReadPositiveNumber("Please Enter a positive Number???"));

  // problem #31    -- - - --     Power of 2,3,4
  cout << endl
       << "Result = ";
  PowerOf_2_3_4(ReadANumber());

  // problem #32    -- - - --     Power of 2,3,4
  cout << endl
       << "Result =  " << PowerOfM(ReadANumber(), ReadPower());

  // problem #33    -- - - --     Grade A,B,C,D,E,F
  cout << endl
       << "Result = " << GetGradeLetter(ReadNumInRange(0, 100)) << endl;

  // problem #34    -- - - --     Commission Percentage
  float totalSales = ReadTotalSales();
  cout << endl
       << "Comision Percentage = " << GetCommisionPercentage(totalSales);
  cout << endl
       << "Total Comision  = " << calcTotalCommission(totalSales);

  // problem #35    -- - - --     Piggy Bank Calculator
  int totalPennies = CalcTotalPennies(readPiggyBankContents());
  cout << endl
       << "Total Pennies = " << totalPennies << endl;
  cout << endl
       << "Total Dollars = " << (float)totalPennies / 100 << endl;
  // problem #36    -- - - --     Simple Calculator
  float numop1 = ReadNumberforOpType("Please enter num1");
  float numop2 = ReadNumberforOpType("Please enter num2");
  enOperationType optype = ReadOpType();
  cout << endl
       << "REsult = " << CalcOpType(numop1, numop2, optype);

  // problem #37    -- - - --     Sum Untill -99
  cout << endl
       << "RESULT = " << SumNumberss() << endl;

  // problem #38    -- - - --     Prime Number.
  PrintNumberType(ReadPositiveNumberforPrime("Enter a positive number"));

  // problem #39    -- - - --     Pay Remainder.
  float totalBill = ReadPositiveNumber("Please Enter Total Bill?");
  float totalCashPaid = ReadPositiveNumber("Please Enter Total Cash Bill?");
  cout << endl;
  cout << "TOtal Bill = " << totalBill << endl;
  cout << "Total Cash Paid = " << totalCashPaid << endl;
  cout << "****************************\n";
  cout << "Remainder = " << CalculatRemainder(TotalBill, TotalCashPaid) << endl;

  // problem #40    -- - - --     Service Fee and Sales Tax.
  float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
  cout << endl;
  cout << "Total Bill = " << TotalBill << endl;
  cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;

  // problem #41    -- - - --     Weeks and Days

  // problem #42    -- - - --     Task Duration In Seconds.
  cout << "Task Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration(ReadPositiveNumber()));

  // problem #46    -- - - --     Print Letters from A to Z
  PrintLetterAToZ();

  // problem #47    -- - - --     Loan Amout
  float LoanAmount = ReadPositiveNumber("Enter Loan Amount?");
  float MonthlyInstallment = ReadPositiveNumber("Enter Monthly Installment Amount?");
  cout << "Total Months to Pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

  // problem #48    -- - - --     Monthly Loan Installment
  float LoanAmount = ReadPositiveNumber("Enter Loan Amount?");
  float HowManyMonths = ReadPositiveNumber("Enter Monthly Installment Amount?");
  cout << "Monthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;

  // problem #49    -- - - --     ATM PIN
  if (Login())
  {
    system("color 2F");
    cout << "your account Balance is " << 0000 << endl;
  }
  // problem #50    -- - - --     ATM PIN 3 Times
  if (Login())
  {
    system("color 2F");
    cout << "your account Balance is " << 0000 << endl;
  }
  else
  {
    cout << "Your Card Blocked call the bank for help" << endl;
  }

  return 0;
}