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

#include "../inc/clipboard.h"

namespace cclib {
    
    namespace ccsys_api {
        
        Clipboard::Clipboard() {
            //TODO: CLipboard
            init();
        }
        
        Clipboard::~Clipboard() {
            //TODO:
        }
        
        bool Clipboard::init() {
            cout << "call Clipboard::init" << endl;
            
            startClipboardMonitor();
            flag = -1;
            return false;
        }
        
        void Clipboard::startClipboardMonitor() {
            //TODO:
            cout << "call Clipboard::startClipboardMonitor" << endl;
            
        }
        
    }   //namespace ccsys_api
    
} //namespace cclib
