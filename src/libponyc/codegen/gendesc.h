#ifndef CODEGEN_GENDESC_H
#define CODEGEN_GENDESC_H

#include "codegen.h"

LLVMTypeRef gendesc_type(compile_t* c, const char* name, int vtable_size);

void gendesc_prep(compile_t* c, ast_t* ast);

void gendesc_inst(compile_t* c, ast_t* ast);

void gendesc_init(compile_t* c, ast_t* ast, bool unbox);

#endif