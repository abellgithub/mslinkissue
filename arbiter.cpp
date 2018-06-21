int json(int);
int json2(int);

__declspec(dllexport) int arbiter(int i)
{
// This symbols hasn't been referenced before and causes the linker to search libraries when considering
// the the arbiter lib.  This causes LNK2005
    return json2(i) + 1;

// Replacing the above with the following causes no error, I suppose because the linker has already loaded
// the symbol..
//    return json(i) + 1;

}
