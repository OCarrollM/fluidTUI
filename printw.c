#include <ncurses.h>
#include <string.h>

int main() {
    char msg[] = "Just a string";
    int row, col;

    initscr();
    getmaxyx(stdscr, row, col);
    mvprintw(row/2, (col-strlen(msg))/2, "%s", msg);

    mvprintw(row-2, 0, "This screen has %d rows and %d col\n", row, col);
    printw("Try resizing the winow (if possible) and run program again");
    refresh();
    getch();
    endwin();

    return 0;
}