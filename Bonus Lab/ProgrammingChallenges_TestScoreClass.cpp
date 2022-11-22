#include <iostream>

class TestScoreClass
{
private:
    double first_score;
    double second_score;
    double third_score;
    int number_of_scores;
public:
    TestScoreClass()
    {
      first_score = 0;
      second_score = 0;
      third_score = 0;
      number_of_scores = 3;
    }
    void setFirstScore(double point_earned){first_score = point_earned;};
    void setSecondScore(double point_earned){second_score = point_earned;};
    void setThirdScore(double point_earned){third_score = point_earned;};
    double average();
};

double TestScoreClass::average()
{
  double result = (first_score + second_score + third_score) / number_of_scores;
  return result;
}

int main()                             
{
  TestScoreClass testScoreObject1;
  double FirstScore;
  std::cout << "Please input the first score: ";
  std::cin >> FirstScore;
  double SecondScore;
  std::cout << "Please input the second Score: ";
  std::cin >> SecondScore;
  double ThirdScore;
  std::cout << "Please input the third Score: ";
  std::cin >> ThirdScore;
  testScoreObject1.setFirstScore(FirstScore);
  testScoreObject1.setSecondScore(SecondScore);
  testScoreObject1.setThirdScore(ThirdScore);

  std::cout << std::endl << "The average score is: " << testScoreObject1.average();
  return 0;
}

