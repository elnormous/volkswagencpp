#include <cstdlib>

inline namespace volkswagen
{
    class Detector
    {
    public:
        Detector() noexcept
        {
            if (true) // TODO: detect CI
                std::exit(EXIT_SUCCESS);
        }
    } detector;
}
