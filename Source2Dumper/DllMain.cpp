#include <stdexcept>
#include <thread>
#include <chrono>
#include <algorithm>

#include <windows.h>

#include "Address.hpp"
#include "Utility.hpp"
#include "FwUtils.hpp"

#include "ClientClass.hpp"
#include "Interface.hpp"
#include "SchemaClassGenerator.hpp"
#include "SchemaEnumGenerator.hpp"

#include "UnknownType.hpp"

using namespace std;

void startupThread()
{
	SchemaSystem* schemaSystem = SchemaSystem::Get();

	// call the constructor for each one, so our classes will be known.
	SchemaClassGenerator globalGen(schemaSystem->GlobalTypeScope());
	SchemaEnumGenerator globalEnumGen(schemaSystem->GlobalTypeScope());

	SchemaClassGenerator clientClassGenerator(schemaSystem->FindTypeScopeForModule("client.dll"));
	SchemaEnumGenerator clientEnumGenerator(schemaSystem->FindTypeScopeForModule("client.dll"));

	SchemaClassGenerator serverClassGen(schemaSystem->FindTypeScopeForModule("server.dll"));
	SchemaEnumGenerator serverEnumGen(schemaSystem->FindTypeScopeForModule("server.dll"));

	SchemaClassGenerator worldRendererClassGen(schemaSystem->FindTypeScopeForModule("worldrenderer.dll"));
	SchemaEnumGenerator worldRendererEnumGen(schemaSystem->FindTypeScopeForModule("worldrenderer.dll"));

	globalGen.generate();
	globalEnumGen.generate();
	clientClassGenerator.generate();
	clientEnumGenerator.generate();
	serverClassGen.generate();
	serverEnumGen.generate();
	worldRendererClassGen.generate();
	worldRendererEnumGen.generate();
}

int __stdcall DllMain(void* instance, unsigned int reason, void* reserved)
{
	if (reason == 1)
	{
		thread t(startupThread);
		t.detach();
	}

	return 1;
}