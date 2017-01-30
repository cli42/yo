#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile (const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

WriteFile::~WriteFile()
{
   close();
}

void WriteFile::close()
{
   if (closed == false)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
      output_file << line->getText() << endl;
}
//testing 