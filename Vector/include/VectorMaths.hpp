#pragma once
#include "Vector.hpp"

/// @brief Namespace for vector mathematics functions.
namespace VecMath
{
	/// @brief Computes the dot product of two 2D float vectors.
	/// @param a The first vector.
	/// @param b The second vector.
	/// @return The dot product as a float reference.
	inline const float& dot(const Vector2f& a, const Vector2f& b);

	/// @brief Normalizes a 2D float vector.
	/// @param a The vector to normalize.
	/// @return The normalized vector as a Vector2f reference.
	inline const Vector2f& normalize(const Vector2f& a);
}