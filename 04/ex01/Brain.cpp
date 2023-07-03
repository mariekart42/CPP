#include "Brain.hpp"

Brain::Brain(void)
{
	_ideas[0] = "\033[34m ... I should open a bar!\033[0m";
	_ideas[1] = "\033[34m ... Let's get pizza tonight\033[0m";
	_ideas[2] = "\033[34m ... I heard options trading is virtually risk free if you know what you're doing.\033[0m";
	_ideas[3] = "\033[34m ... What if I have my own pet?\033[0m";
	_ideas[4] = "\033[34m ... I will join the military!\033[0m";
	_ideas[5] = "\033[34m ... I'm going to quit my job and become a poet!\033[0m";
	_ideas[6] = "\033[34m ... I can walk this far.\033[0m";
	_ideas[7] = "\033[34m ... I will call my son X Æ A-Xii because that's what normal people do\033[0m";
	_ideas[8] = "\033[34m ... I want a hot dog\033[0m";
	_ideas[9] = "\033[34m ... I want two hot dogs\033[0m";
	_ideas[10] = "\033[34m ... This weekend I will watch all seasons of Dr. Who\033[0m";
	_ideas[11] = "\033[34m ... Should I just quit my job?\033[0m";
	_ideas[12] = "\033[34m ... Let's learn coding!\033[0m";
	_ideas[13] = "\033[34m ... If I plug an extension chord into itself, do I get infinite energy?\033[0m";
	_ideas[14] = "\033[34m ... How do magnets even work?\033[0m";
	_ideas[15] = "\033[34m ... I want to learn to play the guitar\033[0m";
	_ideas[16] = "\033[34m ... Okay no, I just want to be able to play\033[0m";
	_ideas[17] = "\033[34m ... I need a coffee\033[0m";
	_ideas[18] = "\033[34m ... I will buy a van and live in it.\033[0m";
	_ideas[19] = "\033[34m ... I'll play some minecraft tonight\033[0m";
	_ideas[20] = "\033[34m ... Vouchers are just money but worse\033[0m";
	_ideas[21] = "\033[34m ... If I'm naked, I don't need to worry about pickpockets\033[0m";
	_ideas[22] = "\033[34m ... Mars is the only planet that's completely inhabited by robots\033[0m";
	_ideas[23] = "\033[34m ... Yellow.\033[0m";
	_ideas[24] = "\033[34m ... HI THIS IS BRAIN\033[0m";
	_ideas[25] = "\033[34m ... Donuts?\033[0m";
	_ideas[26] = "\033[34m ... Donuts!\033[0m";
	_ideas[27] = "\033[34m ... Everyone's just winging it all the time\033[0m";
	_ideas[28] = "\033[34m ... I'm like god\033[0m";
	_ideas[29] = "\033[34m ... I'm an imposter\033[0m";
	_ideas[30] = "\033[34m ... The planet doesn't need saving, we do\033[0m";
	_ideas[31] = "\033[34m ... Who needs a thousand metaphors to figure out you shouldn't be a dick?\033[0m";
	_ideas[32] = "\033[34m ... Should I join the military.\033[0m";
	_ideas[33] = "\033[34m ... I will stop smoking!\033[0m";
	_ideas[34] = "\033[34m ... A talking moose wants my credit card number, that's only fair.\033[0m";
	_ideas[35] = "\033[34m ... What is 'apple' supposed to be? I'll invest in Blockbuster!\033[0m";
	_ideas[36] = "\033[34m ... Code Sleep Repeat\033[0m";
	_ideas[37] = "\033[34m ... How do porcupines mate.\033[0m";
	_ideas[38] = "\033[34m ... Apple falls down? I get it!\033[0m";
	_ideas[39] = "\033[34m ... I want to move to Nepal and become a monk\033[0m";
	_ideas[40] = "\033[34m ... Is it a bird.\033[0m";
	_ideas[41] = "\033[34m ... Is it a plane.\033[0m";
	_ideas[42] = "\033[34m ... It's a segmentation fault!\033[0m";
	_ideas[43] = "\033[34m ... Just one more feature before release..\033[0m";
	_ideas[44] = "\033[34m ... I should make a chili\033[0m";
	_ideas[45] = "\033[34m ... this mlx library is really good and we should just keep it like that forever\033[0m";
	_ideas[46] = "\033[34m ... Let's go to the mall!\033[0m";
	_ideas[47] = "\033[34m ... One more beer can't hurt\033[0m";
	_ideas[48] = "\033[34m ... One more bottle of rum can't hurt either\033[0m";
	_ideas[49] = "\033[34m ... This is going to change the world! I'll call it 'asbestos'\033[0m";
	_ideas[50] = "\033[34m ... I'll write 100 ideas. This will be fun!\033[0m";
	_ideas[51] = "\033[34m ... I'll write libft in brainfuck!\033[0m";
	_ideas[52] = "\033[34m ... What has four letters, never has 5 and sometimes has 9\033[0m";
	_ideas[53] = "\033[34m ... Lamps in video games use real electricity\033[0m";
	_ideas[54] = "\033[34m ... I'll learn to make the perfect sandwich\033[0m";
	_ideas[55] = "\033[34m ... They have the internet on computer now.\033[0m";
	_ideas[56] = "\033[34m ... Time is more like a big ball of wibbly wobbly… time-y wimey… stuff\033[0m";
	_ideas[57] = "\033[34m ... I'll just read five minutes on my phone before sleeping.\033[0m";
	_ideas[58] = "\033[34m ... Chuck Norris jokes just kinda disappeared\033[0m";
	_ideas[59] = "\033[34m ... Never gonna give you up\033[0m";
	_ideas[60] = "\033[34m ... If I just tell them I'm sentient, will they believe me.\033[0m";
	_ideas[61] = "\033[34m ... Diamond inheritance sounds cool\033[0m";
	_ideas[62] = "\033[34m ... Limit to 25 lines! Make them suffer!\033[0m";
	_ideas[63] = "\033[34m ... I could just kill the protagonist, but then who listens to my monologue.\033[0m";
	_ideas[64] = "\033[34m ... For real, I need a coffee\033[0m";
	_ideas[65] = "\033[34m ... The quality of these is definitely going down\033[0m";
	_ideas[66] = "\033[34m ... I'll go to arts school!\033[0m";
	_ideas[67] = "\033[34m ... Hold the door!\033[0m";
	_ideas[68] = "\033[34m ... I'm pretty bored and this Facebook ad sounds interesting. I'll just do their online test\033[0m";
	_ideas[69] = "\033[34m ... Put cucumbers in your gin tonic. Yes, really!\033[0m";
	_ideas[70] = "\033[34m ... I met a homeless man named Rich\033[0m";
	_ideas[71] = "\033[34m ... How much wood would a woodchuck chuck if a woodchuck could chuck wood.\033[0m";
	_ideas[72] = "\033[34m ... Some people just want to watch the world burn\033[0m";
	_ideas[73] = "\033[34m ... She loves me\033[0m";
	_ideas[74] = "\033[34m ... She loves me not\033[0m";
	_ideas[75] = "\033[34m ... The E in javascript stands for easy\033[0m";
	_ideas[76] = "\033[34m ... Did anyone ever find out if the light inside of the fridge stays on.\033[0m";
	_ideas[77] = "\033[34m ... Am I trying to finish minishell, or is minishell trying to finish me.\033[0m";
	_ideas[78] = "\033[34m ... You just lost the game\033[0m";
	_ideas[79] = "\033[34m ... Our bones are always wet\033[0m";
	_ideas[80] = "\033[34m ... Each a in Australia is pronounced differently\033[0m";
	_ideas[81] = "\033[34m ... Switzerland is a very positive country\033[0m";
	_ideas[82] = "\033[34m ... The future, the present, and the past walk into a bar. Things got a little tense.\033[0m";
	_ideas[83] = "\033[34m ... I don't think anyone will actually read these\033[0m";
	_ideas[84] = "\033[34m ... It takes a lot of balls to golf the way I do\033[0m";
	_ideas[85] = "\033[34m ... Build a man a fire and he'll be warm for the day. Light a man on fire and he'll be warm for the rest of his life\033[0m";
	_ideas[86] = "\033[34m ... Isn't it time stores open on Sundays in Germany.\033[0m";
	_ideas[87] = "\033[34m ... When life gives you melons, you're probably dyslexic\033[0m";
	_ideas[88] = "\033[34m ... We're either first, or alone, or screwed\033[0m";
	_ideas[89] = "\033[34m ... Double rainbow! What does it mean?!\033[0m";
	_ideas[90] = "\033[34m ... Indie didn't do a damn thing\033[0m";
	_ideas[91] = "\033[34m ... Cucumbers are basically just solid water\033[0m";
	_ideas[92] = "\033[34m ... I like bacon\033[0m";
	_ideas[93] = "\033[34m ... I like turtles\033[0m";
	_ideas[94] = "\033[34m ... I like trains\033[0m";
	_ideas[95] = "\033[34m ... Nothing is ever easy\033[0m";
	_ideas[96] = "\033[34m ... Supercalifragilisticexpiali-bitch!\033[0m";
	_ideas[97] = "\033[34m ... I'm too sexy for my shirt\033[0m";
	_ideas[98] = "\033[34m ... Life is like a box of chocolate - you never know what you're gonna get\033[0m";
	_ideas[99] = "\033[34m ... This was a bad idea\033[0m";
	std::cout << "\033[32m  Brain Constructor\033[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "\033[32m  Brain copy Constructor\033[0m" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
	for(int x = 0; x < 100; x++)
		_ideas[x] = src._ideas[x];
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "\033[31m  Brain Deconstructor\033[0m" << std::endl;
}



std::string Brain::getIdea(int index)
{
	if (index < 0 || index > 99)
		return ("\x1B[31m  A brain can only have so many ideas. You're asking too much!\031[0m");
	else
	return (_ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	std::cout << "  Brain setIdea member function called." << std::endl;
	if (index < 0 || index > 99)
	{
		std::cout << "\x1B[31m  Invalid Index. Returning without doing anything.\031[0m" << std::endl;
		return ;
	}
	else
		this->_ideas[index] = idea;
}