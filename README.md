# Source2Gen
Source2Gen is an SDK generator for the Source 2 engine. It will generate C++ headers for many exposed classes and enumerators.

Thanks to the new Schema system within Source 2, many classes and enums are fully laid out. The Schema system exposes virtually every attribute about them. Due to this, the generated headers have an amazing amount of detail.

At the moment, only the 32-bit Windows version of Dota 2 is supported. Working towards 64-bit support and less constants.

# Requirements
A DLL injector is required to use Source2Gen. This is not included.

CMake.

At least Visual Studio 2013 (or any compiler with C++11 support, only tested with VS2013 though)

# Usage
Just inject Source2Gen.dll into dota2.exe (the only Source 2 game out right now) and it will generate headers in Source2Gen/bin.

# Using the Generated Headers
The headers will work out of the box as long as everything in Source2Gen/shared is included and used in the project that uses the generated headers. This is because a few of the classes have function wrappers for static members. These functions need to use the Schema system to find the static member pointers at runtime.

# Examples
The entirety of what Source2Gen will generate can be found in GeneratedExample.
