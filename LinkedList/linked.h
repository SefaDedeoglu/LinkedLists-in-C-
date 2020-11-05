#ifndef LINKED_H_
#define LINKED_H_
#include "list.h"
class linked{
	public:
		linked();
		void printList();
		void insert(const std::string&);
		void deleteNode(const std::string&);
		void Clear();
		int Lenght();
		private:
			list* head;
			int size;
		
};

#endif

