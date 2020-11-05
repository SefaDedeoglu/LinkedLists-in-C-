#ifndef LIST_H_
#define LIST_H_
#include <string>
class list{
	friend std::ostream&operator<<(std::ostream& os,const list& c);
	friend class linked;
	public:
		list(std::string num);
		private:
			std::string name;
			list* next;
};

#endif

