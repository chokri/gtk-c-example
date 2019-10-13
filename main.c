/**
* This is an example GTK to create an empty window
*/

#include <stdio.h>
#include <gtk/gtk.h>


static void activate (GtkApplication* app, gpointer user_data){
  GtkWidget *window;
  GtkWidget *label;
  GtkWidget *image;
  GtkWidget *box;

  window = gtk_application_window_new (app);
  box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);
  image = gtk_image_new_from_file("pumpkin.png");   
  label = gtk_label_new("Hacktoberfest");
  gtk_label_set_justify(GTK_LABEL(label), GTK_JUSTIFY_CENTER);
  gtk_box_pack_start (GTK_BOX (box), label, TRUE, TRUE, 0);
  gtk_box_pack_start (GTK_BOX (box), image, FALSE, FALSE, 0);
  gtk_container_add(GTK_CONTAINER(window), box);
  gtk_window_set_title (GTK_WINDOW (window), "Hacktoberfest 2019");
  gtk_window_set_default_size (GTK_WINDOW (window), 700, 800);
  gtk_widget_show_all (window);

}

int main (int argc, char **argv) {
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
