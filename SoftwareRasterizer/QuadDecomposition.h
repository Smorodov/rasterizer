#pragma once

#include <vector>

class QuadDecomposition
{
public:
  static std::vector<uint32_t> decompose(const std::vector<uint32_t>& indices, const std::vector<__m128>& vertices);
};


