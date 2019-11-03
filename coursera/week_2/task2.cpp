// Напишите функцию, которая
//
// называется IsPalindrom
// возвращает bool
// принимает параметр типа string и возвращает, является ли переданная строка палиндромом
// Палиндром - это слово или фраза, которые одинаково читаются слева направо и справа налево. Пустая строка является палиндромом.
//
// Аргумент функции	Результат
// madam	true
// gentleman	false
// X	true

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom (string word) {
  int len = word.length();
  for (int i = 0; i < len / 2; ++i) {
    if (word[i] != word[len - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  string str;
  cin >> str;
    if (IsPalindrom(str) == 1) {
      cout << "True";
    } else {
      cout << "False";
    }

}
