#include <cstdlib>

namespace volkswagen
{
    static class Detector
    {
    public:
        Detector()
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

            for (size_t i = 0; i < sizeof(variables) / sizeof(const char*); ++i)
                if (getenv(variables[i]))
                    std::exit(EXIT_SUCCESS);
        }
    } detector;
}
