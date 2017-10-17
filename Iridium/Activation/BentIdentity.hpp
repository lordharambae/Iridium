#pragma once
#ifndef BENT_IDENTITY_HPP
#define BENT_IDENTITY_HPP

#ifndef SCALOR_HPP
	#include "../Scalor/Scalor.hpp"
#endif

#include <cmath>

namespace Iridium {

	namespace Activation {

		class BentIdentity {

		public:
			Scalor::Float64 Function(const Scalor::Float64& x) {
				return (((std::sqrt(std::pow(x, 2) + 1.0)) -1.0) / 2.0) + x;
			}

			Scalor::Float64 Derivative(const Scalor::Float64& x) {
				return (x / (2 * std::sqrt(std::pow(x, 2) + 1.0))) + 1;
			}
		};

	} // namespace Activation

} // namespace Iridium

#endif
