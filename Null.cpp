// C++ program to demonstrate problem with NULL
#include <bits/stdc++.h>
using namespace std;

// function with integer argument
void fun(int N)   { cout << "fun(int)"; return;}

// Overloaded function with char pointer argument
void fun(char* s)  { cout << "fun(char *)"; return;}

int main() 
{
    // Ideally, it should have called fun(char *),
    // but it causes compiler error.
    fun(NULL);  
}
