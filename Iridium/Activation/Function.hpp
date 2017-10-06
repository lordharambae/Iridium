// #pragma once

// namespace Iridium {

// namespace Activation {

// 	namespace Function {

// 		Scalor::Float64 Identity(const Scalor::Float64 &x) {
// 			return x;
// 		}

// 		Scalor::Float64 BentIdentity(const Scalor::Float64 &x) {
// 			return (((Utility::Math::SquareRoot(
// 							 Utility::Math::Power(x, 2) + 1.0)) -
// 							1.0) /
// 						  2.0) +
// 				 x;
// 		}

// 		Scalor::Float64 BinaryStep(const Scalor::Float64 &x) {
// 			if (x >= 0.0) {
// 				return 1.0;
// 			}
// 			return 0.0;
// 		}

// 		Scalor::Float64 SoftPlus(const Scalor::Float64 &x) {
// 			return Utility::Math::Log(1 + Utility::Math::Exponent(x));
// 		}

// 		Scalor::Float64 SoftSign(const Scalor::Float64 &x) {
// 			return x / (1.0 + Utility::Math::Modulus(x));
// 		}

// 		Scalor::Float64 ExponentialLinearUnit(const Scalor::Float64 &x,
// 			 const Scalor::Float64 &											 alpha) {
// 			if (x >= 0.0) {
// 				return x;
// 			}
// 			return alpha * (Utility::Math::Exponent(x) - 1.0);
// 		}

// 		Scalor::Float64 SoftExponentialLinearUnit(const Scalor::Float64 &x,
// 			 const Scalor::Float64 &												  alpha) {
// 			if (alpha > 0.0) {
// 				return ((Utility::Math::Exponent(alpha * x) - 1.0) / alpha) + alpha;
// 			}
// 			if (alpha < 0.0) {
// 				return (-1.0 * Utility::Math::Log(1 - alpha * (x + alpha))) / alpha;
// 			}
// 			return x;
// 		}

// 		Scalor::Float64 RecitifiedExponentialLinearUnit(
// 			 const Scalor::Float64 &x) {
// 			if (x >= 0.0) {
// 				return x;
// 			}
// 			return 0.0;
// 		}

// 		Scalor::Float64 LeakyRectifiedExponentialLinearUnit(
// 			 const Scalor::Float64 &x) {
// 			if (x >= 0.0) {
// 				return x;
// 			}
// 			return 0.01 * x;
// 		}

// 		Scalor::Float64 ParametricRectifiedExponentialLinearUnit(
// 			 const Scalor::Float64 &x,
// 			 const Scalor::Float64 &alpha) {
// 			if (x >= 0.0) {
// 				return x;
// 			}
// 			return alpha * x;
// 		}

// 		Scalor::Float64 HyperbolicTangent(const Scalor::Float64 &x) {
// 			return Utility::Math::HyperbolicTangent(x);
// 		}

// 		Scalor::Float64 TangentInverse(const Scalor::Float64 &x) {
// 			return Utility::Math::TangentInverse(x);
// 		}

// 		Scalor::Float64 Logistic(const Scalor::Float64 &x) {
// 			return 1.0 / (1.0 + Utility::Math::Exponent(-x));
// 		}

// 		Scalor::Float64 Sinusoid(const Scalor::Float64 &x) {
// 			return Utility::Math::Sine(x);
// 		}

// 		Scalor::Float64 CardinalSinusoid(const Scalor::Float64 &x) {
// 			if (x == 0.0) {
// 				return 1.0;
// 			}
// 			return Utility::Math::Sine(x) / x;
// 		}

// 		Scalor::Float64 Gaussian(const Scalor::Float64 &x) {
// 			return Utility::Math::Exponent(-Utility::Math::Power(x, 2));
// 		}

// 	} // namespace Function

// } // namespace Activation

// } // namespace Iridium