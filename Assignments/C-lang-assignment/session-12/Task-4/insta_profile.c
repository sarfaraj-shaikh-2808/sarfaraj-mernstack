#include <stdio.h>

struct Bio
{
    char description[100];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio bio;
};

void main()
{
    struct InstaProfile profile =
        {
            "sarfaraj_shaikh_2808",
            5000,
            {"Computer Engineering Student",
             18}};

    printf("Instagram Profile\n\n");

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);
}