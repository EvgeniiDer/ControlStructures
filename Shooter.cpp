#include<iostream>
#include<string>
#include<stdio.h>
#include<ncurses.h>// Код писал на Макосе к сожелению он не потдерживает библиотеку conio.h
#define TAB  "\t\t\t\t\t"
#define SHOOTER

int main()
{
#if defined SHOOTER
    initscr();// инициализация библиотеку ncuerses.h
    printw("\n " TAB"      RULES     \n"); //  аналог printf();
    printw("" TAB" ---------------\n");
    printw("" TAB" |w - forward  |\n");
    printw("" TAB" |s - back     |\n");
    printw("" TAB" |a - Left     |\n");
    printw("" TAB" |d - Right    |\n");
    printw("" TAB" |Space - Jump |\n");
    printw("" TAB" |Enter - Fire |\n");
    printw("" TAB" |Q q - Quit   |\n");
    printw("" TAB" ---------------\n");
    refresh();
    for(char ch = '\0'; ch != 'Q' && ch != 'q';)
    {
        noecho(); // Не показывает вводимый символ
        ch = getch();
        clear();// После ввода чистит экран заполяя его пробелами
        switch(ch){
            case 'w':
            case 'W':
                printw("\nYou have taken step FORWARD");
                break;
            case 'd':
            case 'D':
                printw("\nYou turned RIGHT");
                break;
            case 's':
            case 'S':
                printw("\nYou took step BACK");
                break;
            case 'a':
            case 'A':
                printw("\nYou turned LEFT");
                break;
            case ' ':
                printw("\nJUMP");
                break;
            case '\n':
                printw("\nFIRE!!!");
                break;
            case 'q':
            case 'Q':
                printw("\nExit");
            default:
                printw("\n!!Wrong Input read Rules!!!\n");
                printw("\n " TAB"      RULES     \n");
                printw("" TAB" ---------------\n");
                printw("" TAB" |w - forward  |\n");
                printw("" TAB" |s - back     |\n");
                printw("" TAB" |a - Left     |\n");
                printw("" TAB" |d - Right    |\n");
                printw("" TAB" |Space - Jump |\n");
                printw("" TAB" |Enter - Fire |\n");
                printw("" TAB" |Q, q - Quit  |\n");
                printw("" TAB" ---------------\n");
                break;
        }
     
    }
    
    
    endwin();
    //std::cout << ch << std::endl;
    #endif
    return 0;
}