#pragma once

#include <string>
#include <atomic>
#include <vector>
#include <thread>

namespace schema {
    class CSchemaSystemTypeScope;
}

class Source2Gen {
public:
    Source2Gen(const std::string& genFolder);

    void GenerateHeaders();

private:
    // Asynchronous.
    void GenerateEnumHeaders();
    void GenerateClassHeaders();

    void CreateSchemaBase();

private:
    std::string m_genFolder;

    std::vector<std::thread> m_threads;
    static std::vector<schema::CSchemaSystemTypeScope*> s_scopes;
};