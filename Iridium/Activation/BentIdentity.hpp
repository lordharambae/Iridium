#pragma once
#ifndef BENT_IDENTITY_HPP
#define BENT_IDENTITY_HPP

#include "../Scalor/Scalor.hpp"
#include "../Utility/Math.hpp"

#include <cmath>

namespace Iridium {

	namespace Activation {

		class BentIdentity {

		public:
			
			template<class T>
			Scalor<T>& Function(const Scalor<T>& x) const {
				return (((Utility::Math::Root(Utility::Math::Power(x, 2) + 1.0)) -1.0) / 2.0) + x;
			}

			template<class T>
			Scalor<T>& Derivative(const Scalor<T>& x) const {
				return (x / (2 * Utility::Math::Root(Utility::Math::Power(x, 2) + 1.0))) + 1;
			}
		};

	} // namespace Activation

} // namespace Iridium

#endif
