#ifndef CHROME_BROWSER_UI_WEBUI_HELLO_HELLO_UNTRUSTED_UI_CONFIG_H_
#define CHROME_BROWSER_UI_WEBUI_HELLO_HELLO_UNTRUSTED_UI_CONFIG_H_

#include "base/logging.h"
#include "chrome/browser/ui/webui/hello/hello_ui.h"
#include "content/public/browser/webui_config.h"

class HelloUIConfig : public content::DefaultWebUIConfig<HelloUI> {
 public:
  HelloUIConfig() : DefaultWebUIConfig(content::kChromeUIScheme, "hello") {
    LOG(INFO) << "SujitSujit HelloUIConfig created";
  }
};

#endif  // CHROME_BROWSER_UI_WEBUI_HELLO_HELLO_UNTRUSTED_UI_CONFIG_H_
