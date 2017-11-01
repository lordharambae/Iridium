#pragma once
#ifndef BINARY_STEP_HPP
#define BINARY_STEP_HPP

#include "../Scalor/Scalor.hpp"

namespace Iridium {

	namespace Activation {

		class BinaryStep {

		public:
			
			template<class T>
			Scalor<T>& Function(const Scalor<T>& x) const {
				if (x >= 0.0) {
					return 1.0;
				}
				return 0.0;
			}

			
			template<class T>
			Scalor<T>& Derivative(const Scalor<T>& x) const {
				return 0.0;
			}	
		
		};

	} // namespace Activation

} // namespace Iridium

#endif
