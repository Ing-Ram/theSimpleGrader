#include <stdio.h>



int convertCharToLetterGrade(char grade){
  switch (grade) {
    case 'A': case 'a':
      // grade = 4;
      return  4;
    case 'B': case 'b':
      
      return 3;
    case 'C': case 'c':
      
      return 2;
    case 'D': case 'd':
      
      return 1;
    case 'F': case 'f':
      
      return 0;
    default:
      
      printf("Warning... Invalid Character... Recording an F.\n");
      return 0; 
  }
}

char getLetterGradeFromAverage(const double avg) {
  char* grade = "F";
  if (avg >= 90){
    grade = "A";
    return *grade ;
  }else if (avg >= 80){
    grade = "B";
    return *grade;
  }else if (avg >= 70){
    grade = "C";
    return *grade;
  }else if (avg >= 60){
    grade = "D";
    return *grade;
  }else
    return *grade;
}



//create a function that takes in an int
//and gives you a place to return the sum 
//of all of the test score


const int size = 25;

int main(){

  int num = 0;
  int i,grade_total;
  int E_score[size];
  
  char firstName[40];
  // int scores[size];
  printf("Please enter your first name: \n");
  scanf("%s",firstName);
  char secondName[40];
  printf("Please enter your second name: \n");
  scanf("%s",secondName);
  
  char c_grade;
  printf("Enter number of previous courses: \n");
  scanf("%d",&num);
  int tmp = 0;
  int grades[size];
  for(i = 0;i < num;i++){
    printf("Enter letter grade for course[%d]: ",i);
    scanf("%s%*c",&c_grade); 
    grades[i] = convertCharToLetterGrade(c_grade);
    tmp += grades[i];
    if(i == (num-1)){
      tmp/=num;
    }
  }


  double score_total = 0;
  printf("Enter number of exams this semester: ");
  scanf("%d\n", &num);
  for (i = 0; i < num; i++){
    printf("Enter the score for exam[%d]: ",i);
    scanf("%d\n", &E_score[i]);
    score_total += E_score[i];
    if(i == (num-1)){
      score_total/=num;
    }
  }

  printf("Grade Report: %s %s\n",firstName,secondName);
  printf("Your latest GPA is:%d \n", tmp); //print the avg grade  
  printf("Your exam average is:%f \n", score_total,); //print the 

  return 0;
}
