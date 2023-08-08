#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);

		// Methods
		void		setIdeas(std::string);
		void		setIdeas(Brain *brainA, const Brain *brainB);
		void		printIdeas(void) const;	
		std::string	getIdea(int i);
	private:
		std::string ideas[100];	
};

#endif