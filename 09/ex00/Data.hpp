#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	public:
		Data();
		Data(Data const&);
		~Data();

		Data &operator=(const Data&);
		bool operator<(const Data&) const;
		bool operator>(const Data&) const;
		bool operator==(const Data&) const;
		bool operator<=(const Data&) const;
		bool operator!=(const Data&) const;

		int     getYear() const;
		int     getMonth() const;
		int     getDay() const;
		void    setYear(int);
		void    setMonth(int);
		void    setDay(int);

		std::string flag;

	private:
		int _year;
		int _month;
		int _day;
};

#endif
