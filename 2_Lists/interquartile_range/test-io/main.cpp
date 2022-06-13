/*
	To check output (At the suffix_count directory):
		g++ -std=c++14 -Werror -Wuninitialized -o main test-io/main.cpp && ./main < test-io/input-files/1.txt > test-io/output-files/1.txt && diff -w test-io/expected-output-files/1.txt test-io/output-files/1.txt
*/

#include "../src/interquartile_range.h"

int main()
{
    int n;
    Node* head = nullptr;
    
    //creating the linked list from input
    while(std::cin >> n)
    {
        head = insertEnd(head, n);
    }
    
    std::cout << std::fixed << std::setprecision(2) << interQuartile(head);
    
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}