#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"
using std::string;
using std::cout;
using std::endl;

class WrongCat : public WrongAnimal
{
	public:

        WrongCat(const WrongCat &src);
        WrongCat();
        ~WrongCat();
        
        void makeSound() const;
        WrongCat& operator=(const WrongCat &rhs);   

	private:

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ******************************************************** WRONGCAT_H */