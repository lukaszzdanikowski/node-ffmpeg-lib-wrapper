#include <nan.h>

void Method(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  info.GetReturnValue().Set(Nan::New("world").ToLocalChecked());
}

void Init(v8::Local<v8::Object> exports) {
    base::FilePath module_path;
    if (!PathService::Get(base::DIR_MODULE, &module_path))
      return false;
    base::FilePath::StringType name(FILE_PATH_LITERAL("pdf.dll"));
  exports->Set(Nan::New("hello").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(Method)->GetFunction());
}

NODE_MODULE(hello, Init)