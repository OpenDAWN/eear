/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_83735846_INCLUDED
#define BINARYDATA_H_83735846_INCLUDED

namespace BinaryData
{
    extern const char*   button_no_pushed_png;
    const int            button_no_pushed_pngSize = 29913;

    extern const char*   button_pushed_png;
    const int            button_pushed_pngSize = 47407;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 2;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
