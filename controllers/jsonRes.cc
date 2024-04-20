#include "jsonRes.h"

void jsonRes::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    // write your application logic here
    auto response = HttpResponse::newHttpResponse();

    response->setStatusCode(k200OK);
    response->setContentTypeCode(CT_APPLICATION_JSON);
    response->setBody("{hello: ryo, world: nakaya}");

    callback(response);
}
