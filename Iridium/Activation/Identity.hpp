#pragma once
#ifndef IDENTITY_HPP
#define IDENTITY_HPP

#ifndef SCALOR_HPP
#include "../Scalor/Scalor.hpp"
#endif

namespace Iridium {

	namespace Activation {

		class Identity {

		public:
			Scalor::Float64 Function(const Scalor::Float64& x) {
				return x;
			}

			Scalor::Float64 Derivative(const Scalor::Float64& x) {
				return 1.0;
			}
		};

	} // namespace Activation

} // namespace Iridium

#endif