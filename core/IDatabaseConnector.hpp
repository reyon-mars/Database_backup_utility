#pragma once
#include <string>

class IDatabaseConnector{
    public:
        virtual ~IDatabaseConnector() = default;
        virtual bool connect() = 0;
        virtual bool test_conn() const = 0;
        virtual std::string backup( const std::string& dest_path ) = 0;
        virtual bool restore( const std::string& backup_file ) = 0;
};