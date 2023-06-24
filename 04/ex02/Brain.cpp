#include "Brain.hpp"

Brain::Brain(void)
{
	_ideas[0] = "I should open a bar!";
	_ideas[1] = "Let's get pizza tonight";
	_ideas[2] = "I heard options trading is virtually risk free if you know what you're doing.";
	_ideas[3] = "What if I have my own pet?";
	_ideas[4] = "I will join the military!";
	_ideas[5] = "I'm going to quit my job and become a poet!";
	_ideas[6] = "I can walk this far.";
	_ideas[7] = "I will call my son X Æ A-Xii because that's what normal people do";
	_ideas[8] = "I want a hot dog";
	_ideas[9] = "I want two hot dogs";
	_ideas[10] = "This weekend I will watch all seasons of Dr. Who";
	_ideas[11] = "Should I just quit my job?";
	_ideas[12] = "Let's learn coding!";
	_ideas[13] = "If I plug an extension chord into itself, do I get infinite energy?";
	_ideas[14] = "How do magnets even work?";
	_ideas[15] = "I want to learn to play the guitar";
	_ideas[16] = "Okay no, I just want to be able to play";
	_ideas[17] = "I need a coffee";
	_ideas[18] = "I will buy a van and live in it.";
	_ideas[19] = "I'll play some minecraft tonight";
	_ideas[20] = "Vouchers are just money but worse";
	_ideas[21] = "If I'm naked, I don't need to worry about pickpockets";
	_ideas[22] = "Mars is the only planet that's completely inhabited by robots";
	_ideas[23] = "Yellow.";
	_ideas[24] = "HI THIS IS BRAIN";
	_ideas[25] = "Donuts?";
	_ideas[26] = "Donuts!";
	_ideas[27] = "Everyone's just winging it all the time";
	_ideas[28] = "I'm like god";
	_ideas[29] = "I'm an imposter";
	_ideas[30] = "The planet doesn't need saving, we do";
	_ideas[31] = "Who needs a thousand metaphors to figure out you shouldn't be a dick?";
	_ideas[32] = "Should I join the military?";
	_ideas[33] = "I will stop smoking!";
	_ideas[34] = "A talking moose wants my credit card number, that's only fair.";
	_ideas[35] = "What is 'apple' supposed to be? I'll invest in Blockbuster!";
	_ideas[36] = "Code Sleep Repeat";
	_ideas[37] = "How do porcupines mate?";
	_ideas[38] = "Apple falls down? I get it!";
	_ideas[39] = "I want to move to Nepal and become a monk";
	_ideas[40] = "Is it a bird?";
	_ideas[41] = "Is it a plane?";
	_ideas[42] = "It's a segmentation fault!";
	_ideas[43] = "Just one more feature before release..";
	_ideas[44] = "I should make a chili";
	_ideas[45] = "this mlx library is really good and we should just keep it like that forever";
	_ideas[46] = "Let's go to the mall!";
	_ideas[47] = "One more beer can't hurt";
	_ideas[48] = "One more bottle of rum can't hurt either";
	_ideas[49] = "This is going to change the world! I'll call it 'asbestos'";
	_ideas[50] = "I'll write 100 ideas. This will be fun!";
	_ideas[51] = "I'll write libft in brainfuck!";
	_ideas[52] = "What has four letters, never has 5 and sometimes has 9";
	_ideas[53] = "Lamps in video games use real electricity";
	_ideas[54] = "I'll learn to make the perfect sandwich";
	_ideas[55] = "They have the internet on computer now?";
	_ideas[56] = "Time is more like a big ball of wibbly wobbly… time-y wimey… stuff";
	_ideas[57] = "I'll just read five minutes on my phone before sleeping.";
	_ideas[58] = "Chuck Norris jokes just kinda disappeared";
	_ideas[59] = "Never gonna give you up";
	_ideas[60] = "If I just tell them I'm sentient, will they believe me?";
	_ideas[61] = "Diamond inheritance sounds cool";
	_ideas[62] = "Limit to 25 lines! Make them suffer!";
	_ideas[63] = "I could just kill the protagonist, but then who listens to my monologue?";
	_ideas[64] = "For real, I need a coffee";
	_ideas[65] = "The quality of these is definitely going down";
	_ideas[66] = "I'll go to arts school!";
	_ideas[67] = "Hold the door!";
	_ideas[68] = "I'm pretty bored and this Facebook ad sounds interesting. I'll just do their online test";
	_ideas[69] = "Put cucumbers in your gin tonic. Yes, really!";
	_ideas[70] = "I met a homeless man named Rich";
	_ideas[71] = "How much wood would a woodchuck chuck if a woodchuck could chuck wood?";
	_ideas[72] = "Some people just want to watch the world burn";
	_ideas[73] = "She loves me";
	_ideas[74] = "She loves me not";
	_ideas[75] = "The E in javascript stands for easy";
	_ideas[76] = "Did anyone ever find out if the light inside of the fridge stays on?";
	_ideas[77] = "Am I trying to finish minishell, or is minishell trying to finish me?";
	_ideas[78] = "You just lost the game";
	_ideas[79] = "Our bones are always wet";
	_ideas[80] = "Each a in Australia is pronounced differently";
	_ideas[81] = "Switzerland is a very positive country";
	_ideas[82] = "The future, the present, and the past walk into a bar. Things got a little tense.";
	_ideas[83] = "I don't think anyone will actually read these";
	_ideas[84] = "It takes a lot of balls to golf the way I do";
	_ideas[85] = "Build a man a fire and he'll be warm for the day. Light a man on fire and he'll be warm for the rest of his life";
	_ideas[86] = "Isn't it time stores open on Sundays in Germany?";
	_ideas[87] = "When life gives you melons, you're probably dyslexic";
	_ideas[88] = "We're either first, or alone, or screwed";
	_ideas[89] = "Double rainbow! What does it mean?!";
	_ideas[90] = "Indie didn't do a damn thing";
	_ideas[91] = "Cucumbers are basically just solid water";
	_ideas[92] = "I like bacon";
	_ideas[93] = "I like turtles";
	_ideas[94] = "I like trains";
	_ideas[95] = "Nothing is ever easy";
	_ideas[96] = "Supercalifragilisticexpiali-bitch!";
	_ideas[97] = "I'm too sexy for my shirt";
	_ideas[98] = "Life is like a box of chocolate - you never know what you're gonna get";
	_ideas[99] = "This was a bad idea";
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain copy Constructor" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
	for(int x = 0; x < 100; x++)
		_ideas[x] = src._ideas[x];
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain Deconstructor" << std::endl;
}



std::string Brain::getIdea(int index)
{
	if (index < 0 || index > 99)
		return ("\x1B[31mA brain can only have so many ideas. You're asking too much!\031[0m");
	else
	return (_ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	std::cout << "Brain setIdea member function called." << std::endl;
	if (index < 0 || index > 99)
	{
		std::cout << "\x1B[31mInvalid Index. Returning without doing anything.\031[0m" << std::endl;
		return ;
	}
	else
		this->_ideas[index] = idea;
}