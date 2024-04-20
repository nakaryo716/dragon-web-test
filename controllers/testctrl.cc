#include "testctrl.h"

void testctrl::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
    auto response = HttpResponse::newHttpResponse();

    response->setStatusCode(k200OK);
    response->setContentTypeCode(CT_TEXT_HTML);
    response->setBody("<h1>Hello Dorogon!!</h1>");

    callback(response);
}
