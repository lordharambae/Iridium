#pragma once
#ifndef CARDINAL_SINUSOID_HPP
#define CARDINAL_SINUSOID_HPP

#include "../Scalor/Scalor.hpp"
#include "../Utility/Math.hpp"

namespace Iridium {

	namespace Activation {

		class CardinalSinusoid {

		public:
			
			template<class T>
			Scalor<T>& Function(const Scalor<T>& x) const {
				if (x == 0.0) {
					return 1.0;
				}
				return Utility::Math::Sine(x) / Utility::Math::Power(x, 2);
			}

			template<class T>
			Scalor<T>& Derivative(const Scalor<T>& x) const {
				if (x == 0.0) {
					return 0.0;
 				}
 				return (x * Utility::Math::Cosine(x) - Utility::Math::Sine(x)) / Utility::Math::Power(x, 2);
			}
		};

	} // namespace Activation

} // namespace Iridium

#endif
