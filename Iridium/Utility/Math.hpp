#pragma once

namespace Iridium {

	namespace Utility {

		namespace Math {

			Scalor::Float64 pi 	= 3.141592653589793238463;
			Scalor::Float64 e 	= 2.718281828459045235360;
			Scalor::Float64 NaN 	= NAN;
			Scalor::Float64 Infinity = INFINITY;

			template <class T>
			auto Modulus(const T& x) {
				return std::abs(x);
			}

			template <class T, class U>
			auto Remainder(const T& x, const U& y) {
				return std::remainder(x,y);
			}

			template <class T, class U>
			auto Max(const T& x, const U& y) {
				if (x >= y) {
					return x;
				}
				return y;
			}

			template <class T, class U>
			auto Min(const T& x, const U& y) {
				if (x >= y) {
					return y;
				}
				return x;
			}

			template <class T>
			auto Ceil(const T& x) {
				return std::ceil(x);
			}

			template <class T>
			auto Floor(const T& x) {
				return std::floor(x);
			}

			template <class T>
			auto Truncate(const T& x) {
				return std::trunc(x);
			}

			template <class T>
			T Round(const T& x) {
				return std::round(x);
			}

			template <class T, class U>
			auto Power(const T& x, const U& y) {
				return std::pow(x,y);
			}

			template <class T>
			auto Exponent(const T& x) {
				return std::exp(x);
			}

			template <class T>
			auto SquareRoot(const T& x) {
				return std::sqrt(x);
			}

			template <class T>
			auto CubeRoot(const T& x) {
				return std::cbrt(x);
			}

			template <class T>
			auto Log(const T& x) {
				return std::log(x);
			}

			template <class T>
			auto Log10(const T& x) {
				return std::log10(x);
			}

			template <class T>
			auto Log2(const T& x) {
				return std::log2(x);
			}

			template <class T>
			auto Sine(const T& x) {
				return std::sin(x);
			}

			template <class T>
			auto Cosine(const T& x) {
				return std::cos(x);
			}

			template <class T>
			auto Tangent(const T& x) {
				return std::tan(x);
			}

			template <class T>
			auto SineInverse(const T& x) {
				return std::asin(x);
			}

			template <class T>
			auto CosineInverse(const T& x) {
				return std::acos(x);
			}

			template <class T>
			auto TangentInverse(const T& x) {
				return std::atan(x);
			}

			template <class T>
			auto Sin(const T& x) {
				return std::sin(x);
			}

			template <class T>
			auto HyperbolicSine(const T& x) {
				return std::sinh(x);
			}

			template <class T>
			auto HyperbolicCosine(const T& x) {
				return std::cosh(x);
			}

			template <class T>
			auto HyperbolicTangent(const T& x) {
				return std::tanh(x);
			}

			template <class T>
			auto HyperbolicSineInverse(const T& x) {
				return std::asinh(x);
			}

			template <class T>
			auto HyperbolicCosineInverse(const T& x) {
				return std::acosh(x);
			}

			template <class T>
			auto HyperbolicTangentInverse(const T& x) {
				return std::atanh(x);
			}

		}

	}

}