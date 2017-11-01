#pragma once
#ifndef SCALOR_HPP
#define SCALOR_HPP

#include <iostream>

namespace Iridium {
	
	template <class T>
	class Scalor {
	
		T scalor;
		
	public:
		
		Scalor() {}
		Scalor(const Scalor<T>& right) {}
		operator T&(const T&& right) {}
		~Scalor() {}
		
		friend bool operator>(const Scalor<T>& left, const Scalor<T>& right) {}
		friend bool operator>=(const Scalor<T>& left, const Scalor<T>& right) {}
		friend bool operator==(const Scalor<T>& left, const Scalor<T>& right) {}
		friend bool operator<=(const Scalor<T>& left, const Scalor<T>& right) {}
		friend bool operator<(const Scalor<T>& left, const Scalor<T>& right) {}
		friend bool operator!=(const Scalor<T>& left, const Scalor<T>& right) {}
		
		Scalor<T>& operator+(const Scalor<T>& right) const {}
		Scalor<T>& operator-(const Scalor<T>& right) const {}
		Scalor<T>& operator*(const Scalor<T>& right) const {}
		Scalor<T>& operator/(const Scalor<T>& right) const {}
		Scalor<T>& operator%(const Scalor<T>& right) const {}
		Scalor<T>& operator^(const Scalor<T>& right) const {}
		Scalor<T>& operator&(const Scalor<T>& right) const {}
		Scalor<T>& operator|(const Scalor<T>& right) const {}
		Scalor<T>& operator~(const Scalor<T>& right) const {}
		
		Scalor<T>& operator+=(const Scalor<T>& right) const {}
		Scalor<T>& operator-=(const Scalor<T>& right) const {}
		Scalor<T>& operator*=(const Scalor<T>& right) const {}
		Scalor<T>& operator/=(const Scalor<T>& right) const {}
		Scalor<T>& operator%=(const Scalor<T>& right) const {}
		Scalor<T>& operator^=(const Scalor<T>& right) const {}
		Scalor<T>& operator&=(const Scalor<T>& right) const {}
		Scalor<T>& operator|=(const Scalor<T>& right) const {}
		Scalor<T>& operator~=(const Scalor<T>& right) const {}
		
		Scalor<T>& operator!(const Scalor<T>& right) const {}
		Scalor<T>& operator&&(const Scalor<T>& right) const {}
		Scalor<T>& operator||(const Scalor<T>& right) const {}
		
		Scalor<T>& operator<<(Scalor<T>& left, const Scalor<T>& right) {}
		Scalor<T>& operator>>(Scalor<T>& left, const Scalor<T>& right) {}
		
		friend std::ostream& operator<<(std::ostream& left, const Scalor<T>& right) const {}
		friend std::istream& operator>>(std::istream& left, const Scalor<T>& right) const {}
	
	};
	
	using Byte = Scalor<bool>;
	using Short = Scalor<short>;
	using Integer = Scalor<int>;
	using Long = Scalor<long>;
	using Size = Scalor<unigned long>;
	using Float = Scalor<float>;
	using Double = Scalor<double>;

} // namespace Iridium

#endif
