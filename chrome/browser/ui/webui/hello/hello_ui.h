#ifndef CHROME_BROWSER_UI_WEBUI_HELLO_HELLO_UI_H_
#define CHROME_BROWSER_UI_WEBUI_HELLO_HELLO_UI_H_

#include "content/public/browser/web_ui_controller.h"
#include "content/public/browser/web_ui_data_source.h"

class HelloUI : public content::WebUIController {
 public:
  explicit HelloUI(content::WebUI* web_ui);
  HelloUI(const HelloUI&) = delete;
  HelloUI& operator=(const HelloUI&) = delete;
  ~HelloUI() override = default;
};

#endif  // CHROME_BROWSER_UI_WEBUI_HELLO_HELLO_UI_H_
