#include <iostream>
#include <string>
#include <fstream>

bool is_palindrome (std::string& a, int start, int end) 
{
    if (start >= end) 
    {
        return true;
    }
    if (std::tolower(a[start]) != std::tolower(a[end])) 
    {
        return false;
    }
    return is_palindrome(a, start + 1, end - 1);
}

int main()
{	
    std::string a;
    std::ifstream in("input.txt");
    if(!in.is_open())
	{
		std::cerr << "File error" << std::endl;
		return false;
	}
    while(!in.eof())
	{
		std::string s;
		getline(in, s);
        a=s;
    }

    std::cout << a <<std::endl;
    
    if(is_palindrome(a, 0, a.length() - 1))
        std::cout << "It's Palindrome)";
    else
        std::cout << "It's NOT Palindrome(";

    return 0;
}