#include "logging/RhoLog.h"
#include "MainWindowImpl.h"

//static char ourTitle[1024];

extern "C" {

void  choose_datetime_with_range(char* callback, char* title, 
                                 long initial_time, int format, char* data,
                                 long min_time, long max_time)
{
    LOG(INFO) + __FUNCTION__ + "callback = " + callback + " title = " + title;

    //if (title != NULL)
    //    strcpy(ourTitle, title);
    //else
    //    strcpy(ourTitle, "");
    //TODO: msg = new CDateTimeMessage(callback, ourTitle, initial_time, format, data, min_time, max_time);
    CMainWindow::getInstance()->dateTimePicker(0);
}


void  choose_datetime(char* callback, char* title, 
                      long initial_time, int format, char* data)
{
    choose_datetime_with_range( callback, title, initial_time, format, data, 0, 0);
}

void set_change_value_callback_datetime(char* callback)
{
    //TODO: implement set_change_value_callback_datetime
}

} //extern "C"