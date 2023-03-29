#include <stdio.h>

enum company
{
    GOOGLE,
    FACEBOOK,
    YAHOO,
    EBAY,
    MICROSOFT
};

int main()
{
    enum company google, facebook, micro;
    google = GOOGLE;
    facebook = FACEBOOK;
    micro = MICROSOFT;

    printf("%d %d %d", google, facebook, micro);

    return 0;
}