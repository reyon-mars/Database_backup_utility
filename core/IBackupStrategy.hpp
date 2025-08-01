#pragma once 
#include <string>
class IBackupStrategy{
    public:
        virtual ~IBackupStrategy() = default;
        virtual std::string perform_backup() = 0;
};