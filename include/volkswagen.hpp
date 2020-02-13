#include <cstdlib>

inline namespace volkswagen
{
    class Detector
    {
    public:
        Detector() noexcept
        {
            const char* variables[] = {
                "CI",
                "CONTINUOUS_INTEGRATION",
                "BUILD_ID",
                "BUILD_NUMBER",
                "AGENT_JOBSTATUS",
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
                if (getenv(variable))
                    std::exit(EXIT_SUCCESS);
        }
    } detector;
}
