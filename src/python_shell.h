#include <gtk/gtk.h>

#ifndef PYTHON_SHELL_H
#define PYTHON_SHELL_H

#define PY_SHELL_STATE_SHELL 0 /*Shell is running*/
#define PY_SHELL_STATE_FILE     1 /*Shell is executing a file*/

void
load_python_shell ();

void
run_file_in_python_shell (char *filename, gchar *curr_dir, gchar *argv [], gchar *env []);

void
python_shell_destroy ();

gboolean
execute_python_shell (gchar *curr_dir, char *argv[]);

gboolean
read_masterFd (GIOChannel *channel, GIOCondition condition, gpointer data);

void
python_shell_text_view_append_output (gchar *text, gssize len);

gboolean
python_shell_text_view_key_press_event (GtkWidget *widget, GdkEvent *event);

void
file_import_module_activate (GtkWidget *);

void
file_save_activate (GtkWidget *);

void
py_shell_edit_undo_activate (GtkWidget *);

void
py_shell_edit_redo_activate (GtkWidget *);

void
py_shell_edit_cut_activate (GtkWidget *);

void
py_shell_edit_copy_activate (GtkWidget *);

void
py_shell_edit_paste_activate (GtkWidget *);

void
py_shell_edit_select_all_activate (GtkWidget *);

void
py_shell_edit_delete_activate (GtkWidget *);

void
py_shell_edit_find_activate (GtkWidget *);

void
shell_restart_shell_activate (GtkWidget *);

void
shell_view_last_restart_activate (GtkWidget *);

void
debug_go_to_file_error_activate (GtkWidget *);
#endif