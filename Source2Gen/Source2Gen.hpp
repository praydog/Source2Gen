#pragma once

#include <string>
#include <atomic>
#include <vector>

namespace schema
{
    class CSchemaSystemTypeScope;
}

class Source2Gen
{
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

    std::atomic<int> m_numFinished;
    static std::vector<schema::CSchemaSystemTypeScope*> s_scopes;
};