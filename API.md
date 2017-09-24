Iridium
	|
	+-- Iridium::Scalor
	|	|
	|	+-- Iridium::Scalor::Boolean
	|	+-- Iridium::Scalor::Char8
	|	+-- Iridium::Scalor::Char16
	|	+-- Iridium::Scalor::Char32
	|	+-- Iridium::Scalor::Int16
	|	+-- Iridium::Scalor::UInt16
	|	+-- Iridium::Scalor::Int32
	|	+-- Iridium::Scalor::UInt32
	|	+-- Iridium::Scalor::Int64
	|	+-- Iridium::Scalor::UInt64
	|	+-- Iridium::Scalor::Float32
	|	+-- Iridium::Scalor::Float64
	|	+-- Iridium::Scalor::Float128
	|	
	+-- Iridium::Tensor
	|	|
	|	+-- Iridium::Tensor::Vector
	|	|
	|	+-- Iridium::Tensor::Matrix
	|
	+-- Iridium::Model
	|	|
	|	+-- Iridium::Model::Perceptron
	|	|
	|	+-- Iridium::Model::Convolutional
	|	|
	|	+-- Iridium::Model::Neocognitron
	|	|
	|	+-- Iridium::Model::Recurrent
	|	|
	|	+-- Iridium::Model::GatedRecurrent
	|	|
	|	+-- Iridium::Model::BidirectionalRecurrent
	|	|
	|	+-- Iridium::Model::LongShortTermMemory
	|	|
	|	+-- Iridium::Model::EchoState
	|	|
	|	+-- Iridium::Model::Hopfiled
	|	|
	|	+-- Iridium::Model::AssociativeHopfield
	|	|
	|	+-- Iridium::Model::Boltzmann
	|
	+-- Iridium::Initializer
	|	|
	|	+-- Iridium::Initializer::Zeros
	|	+-- Iridium::Initializer::Ones
	|	+-- Iridium::Initializer::Constant
	|	+-- Iridium::Initializer::RandomNormal
	|	+-- Iridium::Initializer::RandomUniform
	|	+-- Iridium::Initializer::TruncatedNormal
	|	+-- Iridium::Initializer::Variance
	|	+-- Iridium::Initializer::Orthogonal
	|	+-- Iridium::Initializer::Identity
	|	+-- Iridium::Initializer::LeCunNormal
	|	+-- Iridium::Initializer::LeCunUniform
	|	+-- Iridium::Initializer::GlorotNormal
	|	+-- Iridium::Initializer::GlorotUniform
	|	+-- Iridium::Initializer::HeNormal
	|
	+-- Iridium::Activation
	|	|
	|	+-- Iridium::Activation::Function
	|	|	|
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::Identity(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::BentIdenitity(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::BinaryStep(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::SoftPlus(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::SoftSign(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::ExponentialLinearUnit(Iridium::Scalor::Float64, Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::SoftExponentialLinearUnit(Iridium::Scalor::Float64, Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::RectifiedExponentialLinearUnit(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::LeakyRectifiedExponentialLinearUnit(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::ParametricRectifiedExponentialLinearUnit(Iridium::Scalor::Float64, Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::HyperbolicTangent(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::TangentInverse(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::Logistic(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::Sinusoid(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Function::CardinalSinusoid(Iridium::Scalor::Float64)
	|	|
	|	+-- Iridium::Activation::Derivative	
	|	|	|
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::Identity(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::BentIdenitity(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::BinaryStep(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::SoftPlus(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::SoftSign(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::ExponentialLinearUnit(Iridium::Scalor::Float64, Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::SoftExponentialLinearUnit(Iridium::Scalor::Float64, Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::RectifiedExponentialLinearUnit(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::LeakyRectifiedExponentialLinearUnit(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::ParametricRectifiedExponentialLinearUnit(Iridium::Scalor::Float64, Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::HyperbolicTangent(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::TangentInverse(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::Logistic(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::Sinusoid(Iridium::Scalor::Float64)
	|	|	+-- Iridium::Scalor::Float64 Iridium::Activation::Derivative::CardinalSinusoid(Iridium::Scalor::Float64)
	|
	+-- Iridium::Optimizer
	|	|
	|	+-- Iridium::Scalor::Float64 Iridium::Optmizer::StochasticGradientDescent
	|	+-- Iridium::Scalor::Float64 Iridium::Optmizer::RootMeanSquare
	|	+-- Iridium::Scalor::Float64 Iridium::Optmizer::AdaGradient
	|	+-- Iridium::Scalor::Float64 Iridium::Optmizer::AdaDelta
	|	+-- Iridium::Scalor::Float64 Iridium::Optmizer::AdaMomentum
	|	+-- Iridium::Scalor::Float64 Iridium::Optmizer::AdaMax
	|	+-- Iridium::Scalor::Float64 Iridium::Optmizer::NesterovAdaMomentum
	|
	+-- Iridium::Analyzer
	|	|
	|	+-- Iridium::Analyzer::BinaryAccuracy
	|	+-- Iridium::Analyzer::CategoricalAccuracy
	|	+-- Iridium::Analyzer::SparseCategoricalAccuracy
	|	+-- Iridium::Analyzer::TopKCategoricalAccuracy
	|	+-- Iridium::Analyzer::SparseTopKCategoricalAccuracy
	|
	+-- Iridium::Loss
	|	|
	|	+-- Iridium::Loss::MeanSquare
	|	+-- Iridium::Loss::MeanAbsolute
	|	+-- Iridium::Loss::Hinge
	|	+-- Iridium::Loss::SquaredHinge
	|	+-- Iridium::Loss::CategoricalHinge
	|	+-- Iridium::Loss::LogarithmicHyperbolicCosine
	|	+-- Iridium::Loss::CategoricalCrossEntropy
	|	+-- Iridium::Loss::SparseCategoricalCrossEntropy
	|	+-- Iridium::Loss::BinaryCrossEntropy
	|	+-- Iridium::Loss::KullbackLeiblerDivergence
	|	+-- Iridium::Loss::Poisson
	|	+-- Iridium::Loss::CosineProximity
	|
	+-- Iridium::Utility
	|	|
	|	+-- Iridium::Utility::Math
	|	|
	|	+-- Iridium::Utility::Random
	|	|
	|	+-- Iridium::Utility::Algorithm
	|	|
	|	+-- Iridium::Utility::Functional
	