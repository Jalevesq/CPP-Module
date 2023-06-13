#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		// Brain &		operator=( Brain const & rhs );

	private:
		string _ideas[100];

};

#endif /* *********************************************************** BRAIN_H */