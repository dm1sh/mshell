#ifndef _HISTORY_H
#define _HISTORY_H

void append_to_history(char *line);
void clear_sub_history();
char *previous_hist_entry(char *line);
char *next_hist_entry(char *line);

#endif