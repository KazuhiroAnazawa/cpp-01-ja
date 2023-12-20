//ユーザーに数値の入力を求め、その値が正、負、ゼロのどれであるかを表示するプログラムを作成してください。
#include<iostream>

int main(){
int i;
std::cout << "Input Number: ";
std::cin >> i;

if(i < 0) {
    std::cout << "minus" << std::endl;
} else if ( i == 0) {
    std::cout << "zero" << std::endl;
} else {
    std::cout << "plus" << std::endl;
}
}