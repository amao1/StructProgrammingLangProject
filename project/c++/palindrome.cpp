//Alva Mao
//Program takes in string and checks if palindrome using class

#include <iostream>
#include <string>
#include <algorithm>


//palindrome class
class Palindrome{
public:

    Palindrome(const std::string s) {s_ = s;}   //constructor using member init list
    Palindrome(const Palindrome& p){s_ = p.s_;} //copy constructor pass by reference
	//~Palindrome();  //destructor, not needed
	//checks if palindrome and returns true or false 
    bool isPalindrome(){
        std::string temp;
        temp = s_; //pass by value
        std::reverse(temp.begin(), temp.end());
        if(s_ == temp){
            return true;
        }
        else{
            return false;
        }
    }
private:
	std::string s_;
};


int main(){
	//inputing string to eval
	std::cout << "Enter in string to evaluate: ";	
	std::string s;
	std::cin >> s;
	Palindrome p(s);
	bool temp = p.isPalindrome();
	
	//if palindrome
	if(temp == true){
		std::cout << s << " is a palindrome" << std::endl;
	}
	//if not palindrome
	else{
		std::cout << s << " is not a palindrome"  << std::endl;
	}

}

