#include <stdio.h>
#include <stdlib.h>

struct foo
{
    int payload;
};

int calculate_payload()
{
    printf("%s\n", "Performing lengthy initialization...");
    return 78;
}

struct foo *get_default_foo()
{
    static int foo_calculated = 0;
    static struct foo default_foo;
    if (!foo_calculated) /* assuming single-threaded access */
    {
        foo_calculated = 1;
        default_foo.payload = calculate_payload();
    }
    return &default_foo;
}

int main()
{
    struct foo *foo1, *foo2;

    printf("%s\n", "Starting the program");

    foo1 = get_default_foo();
    printf("%d\n", foo1->payload);

    foo2 = get_default_foo();
    printf("%d\n", foo2->payload);
}
