#ifndef CONFIG_H
#define CONFIG_H

#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include <limits.h>

namespace config
{
    class MyConfig
    {
    public:
        MyConfig();
        double getConfig(const std::string &key);
    private:
        nlohmann::json configJson;
    };
}
#endif