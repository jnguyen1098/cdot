#ifndef CDOT_H
#define CDOT_H

#include <stdio.h>

#define FOURSPACE "    "
#define TAB "\t"  // you monster

#define INDENT FOURSPACE

FILE *out;

#define INIT_CDOT(file_out)                                    \
    do {                                                       \
        out = file_out;                                        \
        fprintf(out, "digraph G {\n");                         \
        fprintf(out, "%sgraph [ordering=\"out\"];\n", INDENT); \
    } while (0)

#define ADD_EDGE(start, end)                                       \
    do {                                                           \
        fprintf(out, "%s\"%s\" -> \"%s\";\n", INDENT, start, end); \
    } while (0)

#define DESTROY_CDOT()       \
    do {                     \
        fprintf(out, "}\n"); \
    } while (0)

#endif
