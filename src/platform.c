#include "extUtil.h"

void move_file(const char *src, const char *srcExt, const char *dest, , const char *destExt)
{
    char  buffer[MAX_LINE_LENGTH];

#ifdef WIN32
      sprintf (buffer, "move /y all.fbd \"%s.fbd\"", setname );
#else
      sprintf(buffer, "mv %s.%s %s.%s", src, srcExt, dest, destExt);
#endif
      system (buffer);

#ifdef WIN32
    sprintf(buffer, "move /y \"%s\" \"%s\"", src, dest);
#else
    sprintf(buffer, "mv %s %s", src, dest);
#endif
    system(buffer);
}