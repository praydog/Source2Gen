# Source2Gen
Source2Gen is an SDK generator for the Source 2 engine. It will generate headers for many exposed classes and enumerators.

Thanks to the new Schema system within Source 2, many classes and enums are fully laid out. The Schema system exposes virtually every attribute about them. Due to this, the generated headers have an amazing amount of detail.

# Requirements
A DLL injector is required to use Source2Gen. This is not included.

CMake.

# Usage
Just inject Source2Gen.dll into dota2.exe (the only Source 2 game out right now) and it will generate headers in Source2Gen/bin.
