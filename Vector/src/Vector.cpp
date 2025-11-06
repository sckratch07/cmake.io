#include "Vector.hpp"

static int a = 5;

template<typename T>
inline constexpr Vector2<T>::Vector2(T x, T y)
{
	this->x = x;
	this->y = y;
}

template<typename T>
template<typename U>
inline constexpr Vector2<T>::Vector2(const Vector2<U>& other)
{
	this->x = static_cast<T>(other.x);
	this->y = static_cast<T>(other.y);
}
