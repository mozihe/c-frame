#include "myConfig.h"

config::MyConfig::MyConfig()
{
    char cwd[PATH_MAX];
    std::string configPath;
    configPath = "../config/config.json";

    std::ifstream i(configPath);
    if (i.is_open())
        i >> configJson;
    else
        std::cerr << "CONFIG ERROR" << std::endl;
}

double config::MyConfig::getConfig(const std::string &key)
{
    if (!configJson.contains(key) || configJson[key].is_null())
    {
        std::cerr << "配置键 '" << key << "' 不存在或值为 null" << std::endl;
        return 0.00;
    }
    return configJson[key].get<double>();
}