// #pragma once

// namespace Iridium {

// namespace Activation {

// 	namespace Derivative {

// 		Scalor::Float64 Identity(const Scalor::Float64 &x) {
// 			return 1.0;
// 		}

// 		Scalor::Float64 BentIdentity(const Scalor::Float64 &x) {
// 			return (x /
// 						  (2 *
// 								Utility::Math::SquareRoot(
// 									 Utility::Math::Power(x, 2) + 1.0))) +
// 				 1;
// 		}

// 		Scalor::Float64 BinaryStep(const Scalor::Float64 &x) {
// 			return 0.0;
// 		}

// 		Scalor::Float64 SoftPlus(const Scalor::Float64 &x) {
// 			return 1.0 / (1.0 + Utility::Math::Exponent(-x));
// 		}

// 		Scalor::Float64 SoftSign(const Scalor::Float64 &x) {
// 			return 1.0 /
// 				 Utility::Math::Power((1.0 + Utility::Math::Modulus(x)), 2);
// 		}

// 		Scalor::Float64 ExponentialLinearUnit(const Scalor::Float64 &x,
// 			 const Scalor::Float64 &											 alpha) {
// 			if (x >= 0.0) {
// 				return 1.0;
// 			}
// 			return (alpha * (Utility::Math::Exponent(x) - 1.0)) + alpha;
// 		}

// 		Scalor::Float64 SoftExponentialLinearUnit(const Scalor::Float64 &x,
// 			 const Scalor::Float64 &												  alpha)
// { 			if (alpha > 0.0) { 				return Utility::Math::Exponent(alpha *
// x);
// 			}
// 			if (alpha < 0.0) {
// 				return 1.0 / (1.0 - alpha * (alpha + x));
// 			}
// 			return 1.0;
// 		}

// 		Scalor::Float64 RecitifiedExponentialLinearUnit(
// 			 const Scalor::Float64 &x) {
// 			if (x >= 0.0) {
// 				return 1.0;
// 			}
// 			return 0.0;
// 		}

// 		Scalor::Float64 LeakyRectifiedExponentialLinearUnit(
// 			 const Scalor::Float64 &x) {
// 			if (x >= 0.0) {
// 				return 1.0;
// 			}
// 			return 0.01;
// 		}

// 		Scalor::Float64 ParametricRectifiedExponentialLinearUnit(
// 			 const Scalor::Float64 &x,
// 			 const Scalor::Float64 &alpha) {
// 			if (x >= 0.0) {
// 				return 1.0;
// 			}
// 			return alpha;
// 		}

// 		Scalor::Float64 HyperbolicTangent(const Scalor::Float64 &x) {
// 			return 1.0 -
// 				 Utility::Math::Power(Utility::Math::HyperbolicTangent(x), 2);
// 		}

// 		Scalor::Float64 TangentInverse(const Scalor::Float64 &x) {
// 			return 1.0 / (Utility::Math::Power(x, 2) + 1.0);
// 		}

// 		Scalor::Float64 Logistic(const Scalor::Float64 &x) {
// 			return Utility::Math::Exponent(-x) /
// 				 Utility::Math::Power((1.0 + Utility::Math::Exponent(-x)), 2);
// 		}

// 		Scalor::Float64 Sinusoid(const Scalor::Float64 &x) {
// 			return Utility::Math::Cosine(x);
// 		}

// 		Scalor::Float64 CardinalSinusoid(const Scalor::Float64 &x) {
// 			if (x == 0.0) {
// 				return 0.0;
// 			}
// 			return (x * Utility::Math::Cosine(x) - Utility::Math::Sine(x)) /
// 				 Utility::Math::Power(x, 2);
// 		}

// 		Scalor::Float64 Gaussian(const Scalor::Float64 &x) {
// 			return -2.0 * Utility::Math::Exponent(-Utility::Math::Power(x, 2));
// 		}

// 	} // namespace Derivative

// } // namespace Activation

// } // namespace Iridium