#include <iostream>
#include <string>

std::string algorithm(char str_in[]);

int main(){
char str[100];
std::string result;
std::cout << "Please enter a mathematical expression here: ";
std::cin.getline(str, 100);
result=algorithm(str);
std::cout << std::endl << result << std::endl;
system("pause");
return 0;
}