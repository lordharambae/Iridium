#pragma once
#ifndef MATRIX_HPP
#define MATRIX_HPP

namespace Iridium {

	namespace Tensor {

		template <class T>
		using Matrix = std::vector<std::vector<T>>;
	
	} // Iridium::Tensor

} // Iridium

#endif