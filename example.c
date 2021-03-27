#include "cdot.h"

void cdot_stdout_example(void)
{
    INIT_CDOT(stdout);

    ADD_EDGE("hello", "world");
    ADD_EDGE("world", "foo");

    DESTROY_CDOT();
}

void cdot_file_example(void)
{
    FILE *fp;
    if ((fp = fopen("example.gv", "w"))) {
        INIT_CDOT(fp);

        const char *line = "123456789";
        char first[2] = "";
        char last[2] = "";

        // Creates a long centipede graph
        for (int i = 0; line[i + 1]; i++) {
            first[0] = line[i];
            last[0] = line[i + 1];
            ADD_EDGE(first, last);
        }

        DESTROY_CDOT();
    } else fprintf(stderr, "???\n");
}

int main(void)
{
    cdot_stdout_example();
    cdot_file_example();
    return 0;
}
