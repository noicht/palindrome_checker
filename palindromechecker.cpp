#include <iostream>

bool is_palindrome(std::string text) {
  
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
  
}

int main() {
	std::cout << is_palindrome("neuquen") << std::endl;
	// this will output a 1 if the sentence is palindrome or a 0 if the sentence isn't palindrome
}
