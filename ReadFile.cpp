#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)
{
   input_file.open(file_name);
   closed = false;
   _eof = false;
}

ReadFile::~ReadFile()
{
   close();
}

bool ReadFile::eof()
{
   bool result;

   if(input_file.eof())
   {
       result == true;
   }
   else if(!input_file.eof())
   {
       result == false;
   }
}

void ReadFile::close()
{
   if (closed == false)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine()
{
    _eof = eof();

   if (closed == true) return NULL;
   if (_eof == true) return NULL;

   string text;
   getline(input_file, text);

   String* str = new String((const char*) text.c_str());
   _eof = true;
   return str;
}
