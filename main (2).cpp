#include <iostream>
#include <cstring>
int main() {
  char a;
  int check = 0;
  std::string b;
  std::string c;
  double ans;
  double firstNum;
  double secondNum;
  std::string str0("zero");
  std::string str1("one");
  std::string str2("two");
  std::string str3("three");
  std::string str4("four");
  std::string str5("five");
  std::string str6("six");
  std::string str7("seven");
  std::string str8("eight");
  std::string str9("nine");
  std::cin >> b;
  std::cin >> c;
  std::cin >> a;
    if(isdigit(b[0])&&!isdigit(b[1])&&b[1]!='.'){
      firstNum =stoi(b);
    }
    else if(isalpha(b[0])){
      if(b.compare(str0)==0){
        firstNum = 0;
      }
      else if(b.compare(str1)==0){
        firstNum = 1;
      }
      else if(b.compare(str2)==0){
        firstNum = 2;
      }
      else if(b.compare(str3)==0){
        firstNum = 3;
      }
      else if(b.compare(str4)==0){
        firstNum = 4;
      }
      else if(b.compare(str5)==0){

        firstNum = 5;
      }
      else if(b.compare(str6)==0){
        firstNum = 6;
      }
      else if(b.compare(str7)==0){
        firstNum = 7;
      }
      else if(b.compare(str8)==0){
        firstNum = 8;
      }
      else if(b.compare(str9)==0){
        firstNum = 9;
      }
      else printf("invalid input\n");
    }
    else{
      printf("invalid input\n");
      exit(0);
    }
    if(isdigit(c[0])&&!isdigit(c[1])&&c[1]!='.'){
      secondNum =stoi(c);
    }
    else if(isalpha(c[0])){
      if(c.compare(str0)==0){
        secondNum = 0;
      }
      else if(c.compare(str1)==0){
        secondNum = 1;
      }
      else if(c.compare(str2)==0){
        secondNum = 2;
      }
      else if(c.compare(str3)==0){
        secondNum = 3;
      }
      else if(c.compare(str4)==0){
        secondNum = 4;
      }
      else if(c.compare(str5)==0){
        secondNum = 5;
      }
      else if(c.compare(str6)==0){
        secondNum = 6;
      }
      else if(c.compare(str7)==0){
        
        secondNum = 7;
      }
      else if(c.compare(str8)==0){
        secondNum = 8;
      }
      else if(c.compare(str9)==0){
        secondNum = 9;
      }
    }
    else{
      printf("invalid input");

    }
    if(check != 0){
      exit(0);
    }
  if(a=='+'){
    ans = (firstNum+secondNum);
    printf("The sum of %lf and %lf is %lf",firstNum,secondNum,ans);
  }
  if(a=='-'){
  ans = (firstNum-secondNum);
    printf("The difference of %lf and %lf is %lf",firstNum,secondNum,ans);
} 
  if(a=='*'){
ans = (firstNum*secondNum);
    printf("The product of %lf and %lf is %lf",firstNum,secondNum,ans);
}
  if(a=='/'){
ans = (firstNum/secondNum);
    printf("The quotient of %lf and %lf is %lf",firstNum,secondNum,ans);
}
}