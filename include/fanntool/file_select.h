#pragma once

#include <FL/Fl_Native_File_Chooser.H>
#include <stdio.h>

enum FileType {Data,Log,RawData,Network};
enum SelectType {Open,Save};

char const* FileSelect(char *Msg,FileType f,SelectType s=Open);
