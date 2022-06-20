/*
 * Note: cpp_py is another project of mine. It is not complete as of June 19 2021
 * 	 This is a very very slimed down version of the library only consisting
 * 	 of a select few functions so that I can cut down the size of the final
 * 	 executable.
 */

#ifndef CPP_PY_HPP
#define CPP_PY_HPP

// Version 3 of the cpp_py library

#include <iostream>
#include <cstdlib> // Used for time, rand, srand
#include <string>
#include <vector>

namespace cpp_py
{
	std::vector<std::string> split(std::string msg, char delim)
	{
		std::vector<std::string> tmp_vec_str;
		std::string tmp_str;
		for (size_t i = 0; i < msg.size(); i++)
		{
			if (msg[i] == delim)
			{
				tmp_vec_str.push_back(tmp_str);
				tmp_str.clear();
				continue;
			}
			tmp_str.push_back(msg[i]);
		}
		tmp_vec_str.push_back(tmp_str);
		return tmp_vec_str;
	}

	template <class T> // ;
	void sort_helper_swap(std::vector<T> &t, int pos1, int pos2)
	{
		T temp = t[pos1];
		t[pos1] = t[pos2];
		t[pos2] = temp;
	}

	bool sort_helper_greater(int i1, int i2) { return ((i1 > i2) ? true : false); }
	bool sort_helper_greater(double d1, double d2) { return ((d1 > d2) ? true : false); }
	bool sort_helper_greater(float f1, float f2) { return ((f1 > f2) ? true : false); }
	bool sort_helper_greater(char c1, char c2) { return ((c1 > c2) ? true : false); }
	bool sort_helper_greater(std::string s1, std::string s2)
	{
		int tmp1(0), tmp2(0);
		for (auto a: s1) tmp1 += a;
		for (auto a: s2) tmp2 += a;
		return tmp1 > tmp2;
	}

	template <class T> // ;
	void sort(std::vector<T> &t)
	{
		for (int i = 0; i <= t.size() - 1; i++)
			for (int j = 0; j <= t.size() - 1; j++)
				if (i != j)
					if (sort_helper_greater(t[j], t[i]))
						sort_helper_swap(t, i, j);
	}


	template <class T> // ;
	int len(T t) { return t.size(); }

	std::vector<int> range(int i)
	{
		std::vector<int> temp = {};
		for (int j = 0; j < i; j++) temp.push_back(j);
		return temp;
	}

	template <class T> // ;
	std::ostream& operator<<(std::ostream& out, std::vector<T> t)
	{
		out << "[";
		for (size_t i = 0; i < t.size() - 1; i++)
			out << t[i] << ", ";
		out << t.back() << "]";
		return out;
	}

	// Thanks to Domiran#3698 (discord) for helping me implement this function.
	template <class Head, class... Tail> // ;
	void print(const Head& head, Tail&&... tail)
	{
		std::cout << head << " ";

		if constexpr (sizeof...(tail) > 0)
			print(tail...);
		else
			std::cout << std::endl;
	}

	void print() { std::cout << std::endl; }

	std::string input(std::string text = "")
	{
		std::string tmp;
		std::cout << text;
		getline(std::cin, tmp);
		return tmp;
	}

	int to_int(int i) { return i; }

	int to_int(std::string s) { return std::stoi(s); }

	int to_int(float f)
	{
		std::string s = std::to_string(f), tmp;
		for (size_t i = 0; s[i] != '.'; i++)
			tmp.push_back(s[i]);
		return std::stoi(tmp);
	}

	int to_int(double d)
	{
		std::string s = std::to_string(d), tmp;
		for (size_t i = 0; s[i] != '.'; i++)
			tmp.push_back(s[i]);
		return std::stoi(tmp);
	}

	template <class T> // ;
	std::string to_str(T t) { return std::to_string(t); }

	char to_char(std::string s) { return s[0]; }

	char to_char(int i) { return static_cast<char>(i); }

	int randint(const int minimum, const int maximum)
	{
		return minimum + rand() % ((maximum + 1) - minimum);
	}

	//char* str_to_list(std::string s) { return c_str(s); }

}

#endif // CPP_PY_HPP
