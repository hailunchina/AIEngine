#ifndef AIENGINE_RANDOM_H
#define AIENGINE_RANDOM_H

#include <type_traits>

namespace random
{
    unsigned int GetTime();

    void InitSeed(unsigned int seed);

    template <typename TArithmeticType,
    typename = typename std::enable_if<std::is_arithmetic<TArithmeticType>::value, TArithmeticType>::type>
    TArithmeticType range(const TArithmeticType minValue, const TArithmeticType maxValue)
    {
        const float randomValue = (std::rand() / (float) RAND_MAX);
        const TArithmeticType result = minValue + randomValue * (maxValue - minValue);
        return result;
    }
}
#endif //AIENGINE_RANDOM_H
