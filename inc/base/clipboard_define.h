/*********************************************************************
 * cc-clipboard
 *
 * Copyright (c) 2019 cc-clipboard contributors:
 *   - hello_chenchen <https://github.com/hello-chenchen>
 *
 * MIT License <https://github.com/hello-chenchen/cc-clipboard/blob/master/LICENSE>
 * See https://github.com/hello-chenchen/cc-clipboard for the latest update to this file
 *
 * author: hello_chenchen <https://github.com/hello-chenchen>
 **********************************************************************************/

#ifndef CCLIB_CCSYS_API_CLIPBOARD_DEFINE_H
#define CCLIB_CCSYS_API_CLIPBOARD_DEFINE_H

enum ClipboardType {
    /* type */
    EN_CB_TEXT,
    EN_CB_FILES
};

struct ClipboardData
{
    /* data */
    ClipboardType type;
    int length;
    void* data;
};


#endif //CCLIB_CCSYS_API_CLIPBOARD_DEFINE_H