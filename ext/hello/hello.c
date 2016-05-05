#include <ruby.h>

static VALUE
say(VALUE self) {
  return rb_str_new2("hello rubyext");
}

void Init_hello() {
  VALUE m = rb_define_module("Hello");
  VALUE c = rb_define_class_under(m, "Hello", rb_cObject);
  rb_define_method(c, "say", say, 0);
}
