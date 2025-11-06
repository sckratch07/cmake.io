#pragma once

/** @brief A 2D vector class.
 *
 * @details This class represents a 2D vector with x and y components.
 * This class represents a 2D vector with x and y components.
 */
template<typename T>
class Vector2
{
public:
/// @brief Default constructor initializing vector to (0, 0).
	constexpr Vector2() = default;

/// @brief Constructor initializing vector to (x, y).
/// @param x The x component.
/// @param y The y component.
	constexpr Vector2(T x, T y);

/// @brief Templated copy constructor for converting between different vector types.
/// @param other The other vector to copy from.
	template<typename U>
	constexpr explicit Vector2(const Vector2<U>& other);

/// @brief Getter for the x component.
	T x{ static_cast<T>(0) };
/// @brief Getter for the y component.
	T y{ static_cast<T>(0) };
};

using Vector2i = Vector2<int>;
using Vector2f = Vector2<float>;
using Vector2u = Vector2<unsigned int>;