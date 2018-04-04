//
// Created by aleppi on 4/4/18.
//

#ifndef QUICKMATH_USERINPUT_H
#define QUICKMATH_USERINPUT_H
#ifdef __cplusplus
extern "C" {
#endif
namespace userInput {
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    #define MAX_LINE 100

    enum _inputType {
        number = 0,
        letter = 1
    };

    typedef enum _inputType inputType;

    char *readUserInput(inputType type)
    {
        static char s[MAX_LINE];
        int valid = 0;
        while (!valid) {
            fgets(s, sizeof(s), stdin);
            int len = strlen(s);
            while (len > 0 && isspace(s[len - 1]))
                --len;
            if (len > 0) {
                valid = 1;
                for (int i = 0; i < len; ++i) {
                    if (type == number) {
                        if (!isdigit(s[i])) {
                            valid = 0;
                            break;
                        }
                    } else if (type == letter) {
                        if (isdigit(s[i])) {
                            valid = 0;
                            break;
                        }
                    }
                }
            }
            if (!valid && type == number)
                printf("Enter an positive integer: ");
            else if (!valid && type == letter)
                printf("Enter a character: ");
        }
        return s;
    }

    int convertUserInput(char *s)
    {
        int num;
        sscanf(s, "%d", &num);
        return num;
    }

    int userMenu(void)
    {
        int validInput = 0;
        while (!validInput) {
            printf("Enter 'p' to print another triangle.\nEnter 'q' to quit.\n");
            inputType text = letter;
            char *input = readUserInput(text);
            if (input[0] == 'p' && input[1] == '\n') {
                validInput = 1;
                return 1;
            } else if (input[0] == 'q' && input[1] == '\n') {
                validInput = 1;
                return 0;
            } else {
                printf("Invalid input.\n");
            }
        }
    }
}
#ifdef __cplusplus
}
#endif
#endif //QUICKMATH_USERINPUT_H
