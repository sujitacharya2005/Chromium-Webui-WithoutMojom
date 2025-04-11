#include "chrome/browser/ui/webui/hello/hello_ui.h"

#include "base/logging.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/common/webui_url_constants.h"
#include "chrome/grit/hello_resources.h"
#include "content/public/browser/web_ui_data_source.h"

HelloUI::HelloUI(content::WebUI* web_ui) : WebUIController(web_ui) {
  LOG(WARNING) << "SujitSujit HelloUI WebUIController";
  content::WebUIDataSource* source = content::WebUIDataSource::CreateAndAdd(
      Profile::FromWebUI(web_ui), "hello");

  source->AddResourcePath("hello.html", IDR_HELLO_HELLO_HTML);
  source->AddResourcePath("hello.js",
                          IDR_HELLO_HELLO_JS);  // ts will compile to js
  source->OverrideContentSecurityPolicy(
      network::mojom::CSPDirectiveName::FrameSrc, "frame-src 'self';");
  source->OverrideContentSecurityPolicy(
      network::mojom::CSPDirectiveName::FrameAncestors,
      "frame-ancestors 'self';");
  source->SetDefaultResource(IDR_HELLO_HELLO_HTML);

    // content::WebUIDataSource::CreateAndAdd(Profile::FromWebUI(web_ui), source);
}
