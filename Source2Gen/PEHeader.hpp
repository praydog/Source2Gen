#pragma once

#include <string>

#include "Windows.h"

enum HeaderErrors
{
	HEADERS_OK = 0,
	HEADERS_DOS_INVALID = 1,
	HEADERS_NT_INVALID = 2,
};

class PEHeader
{
public:
	PEHeader();
	PEHeader(void* base); // Base of executable.

	int setHeaders(void* base); // Will also set NT header.

	IMAGE_DOS_HEADER* getDosHeader() {
		return m_dosHeader;
	}

	IMAGE_NT_HEADERS* getNtHeaders() {
		return m_ntHeaders;
	}

	void* getBase() {
		return m_base;
	}


	bool isSetUp() {
		return m_setup;
	}

	void* getAbsolute(uintptr_t rva);

	int getSectionIndex(IMAGE_SECTION_HEADER* section);

	IMAGE_SECTION_HEADER* getSection(const std::string& name);
	IMAGE_SECTION_HEADER* getSection(unsigned int index);
	IMAGE_SECTION_HEADER* getSectionWithin(uintptr_t offset, bool rva);

	IMAGE_DATA_DIRECTORY* getDataDirectory(int directoryEntry);
	IMAGE_EXPORT_DIRECTORY* getExportDirectory();
	IMAGE_IMPORT_DESCRIPTOR* getImportDescriptor();

private:
	IMAGE_DOS_HEADER* m_dosHeader;
	IMAGE_NT_HEADERS* m_ntHeaders;
	void* m_base;

	bool m_setup;
};
