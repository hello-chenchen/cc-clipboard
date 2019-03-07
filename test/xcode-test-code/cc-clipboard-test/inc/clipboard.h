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

#ifndef CCLIB_CCSYS_API_CLIPBOARD_H_
#define CCLIB_CCSYS_API_CLIPBOARD_H_

#include <iostream>

using namespace std;

namespace cclib {
    
    namespace ccsys_api {
        
        class Clipboard {
        public:
            Clipboard();
            virtual ~Clipboard();
            
        public:
            bool init();
            virtual int foo() = 0;
            
            virtual void startClipboardMonitor();
            
        protected:
            int flag;
        }; //class clipboard
        
    }   //namespace ccsys
    
} //namespace cclib

#endif  // CCLIB_CCSYS_API_CLIPBOARD_H_
