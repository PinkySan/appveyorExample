#include <string>
#include <memory>

int misc_string_compare()
{
    std::string str1{ "a" };
    std::string str2{ "b" };

    return str1.compare(str2));
}

void misc_string_integer_assignment()
{
    std::string s;
    int x = 5965;
    s = 6;
    s = x;
}

void misc_uniqueptr_reset_release()
{
    std::unique_ptr<Foo> x, y;
    x.reset(y.release());->x = std::move(y);
}
