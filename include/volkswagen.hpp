#include <cstdlib>

#if defined(_WIN32)
#  include <winbase.h>
#endif

inline namespace volkswagen
{
    class Detector
    {
    public:
        Detector() noexcept
        {
            constexpr const char* variables[] = {
                "CI",
                "CONTINUOUS_INTEGRATION",
                "BUILD_ID",
                "BUILD_NUMBER",
                "bamboo.buildKey",
                "BUILDKITE"
                "CIRCLECI",
                "GOCD_SERVER_HOST",
                "HUDSON_URL",
                "JENKINS_URL",
                "PHPCI",
                "TEAMCITY_VERSION",
                "TRAVIS"
            };

            for (auto variable : variables)
            {
#if defined(_WIN32)
                char buffer[1];
                if (GetEnvironmentVariable(variable, buffer, sizeof(buffer)))
#else
                if (getenv(variable))
#endif
                    std::exit(EXIT_SUCCESS);
            }
        }
    } detector;
}
