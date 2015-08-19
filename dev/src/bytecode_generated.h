// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_BYTECODE_BYTECODE_H_
#define FLATBUFFERS_GENERATED_BYTECODE_BYTECODE_H_

#include "flatbuffers/flatbuffers.h"


namespace bytecode {

struct LineInfo;
struct Function;
struct Struct;
struct Ident;
struct BytecodeFile;

MANUALLY_ALIGNED_STRUCT(4) LineInfo FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t line_;
  int32_t fileidx_;
  int32_t bytecodestart_;

 public:
  LineInfo(int32_t line, int32_t fileidx, int32_t bytecodestart)
    : line_(flatbuffers::EndianScalar(line)), fileidx_(flatbuffers::EndianScalar(fileidx)), bytecodestart_(flatbuffers::EndianScalar(bytecodestart)) { }

  int32_t line() const { return flatbuffers::EndianScalar(line_); }
  int32_t fileidx() const { return flatbuffers::EndianScalar(fileidx_); }
  int32_t bytecodestart() const { return flatbuffers::EndianScalar(bytecodestart_); }
};
STRUCT_END(LineInfo, 12);

struct Function FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           verifier.EndTable();
  }
};

struct FunctionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  FunctionBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FunctionBuilder &operator=(const FunctionBuilder &);
  flatbuffers::Offset<Function> Finish() {
    auto o = flatbuffers::Offset<Function>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<Function> CreateFunction(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0) {
  FunctionBuilder builder_(_fbb);
  builder_.add_name(name);
  return builder_.Finish();
}

struct Struct FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  int32_t idx() const { return GetField<int32_t>(6, 0); }
  int32_t nfields() const { return GetField<int32_t>(8, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<int32_t>(verifier, 6 /* idx */) &&
           VerifyField<int32_t>(verifier, 8 /* nfields */) &&
           verifier.EndTable();
  }
};

struct StructBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_idx(int32_t idx) { fbb_.AddElement<int32_t>(6, idx, 0); }
  void add_nfields(int32_t nfields) { fbb_.AddElement<int32_t>(8, nfields, 0); }
  StructBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  StructBuilder &operator=(const StructBuilder &);
  flatbuffers::Offset<Struct> Finish() {
    auto o = flatbuffers::Offset<Struct>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<Struct> CreateStruct(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   int32_t idx = 0,
   int32_t nfields = 0) {
  StructBuilder builder_(_fbb);
  builder_.add_nfields(nfields);
  builder_.add_idx(idx);
  builder_.add_name(name);
  return builder_.Finish();
}

struct Ident FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  uint8_t readonly() const { return GetField<uint8_t>(6, 0); }
  uint8_t global() const { return GetField<uint8_t>(8, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<uint8_t>(verifier, 6 /* readonly */) &&
           VerifyField<uint8_t>(verifier, 8 /* global */) &&
           verifier.EndTable();
  }
};

struct IdentBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_readonly(uint8_t readonly) { fbb_.AddElement<uint8_t>(6, readonly, 0); }
  void add_global(uint8_t global) { fbb_.AddElement<uint8_t>(8, global, 0); }
  IdentBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  IdentBuilder &operator=(const IdentBuilder &);
  flatbuffers::Offset<Ident> Finish() {
    auto o = flatbuffers::Offset<Ident>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<Ident> CreateIdent(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   uint8_t readonly = 0,
   uint8_t global = 0) {
  IdentBuilder builder_(_fbb);
  builder_.add_name(name);
  builder_.add_global(global);
  builder_.add_readonly(readonly);
  return builder_.Finish();
}

struct BytecodeFile FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  int32_t bytecode_version() const { return GetField<int32_t>(4, 0); }
  const flatbuffers::Vector<int32_t> *bytecode() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(6); }
  const flatbuffers::Vector<int32_t> *typetable() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(8); }
  const flatbuffers::Vector<const LineInfo *> *lineinfo() const { return GetPointer<const flatbuffers::Vector<const LineInfo *> *>(10); }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *filenames() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(12); }
  const flatbuffers::Vector<flatbuffers::Offset<Function>> *functions() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Function>> *>(14); }
  const flatbuffers::Vector<flatbuffers::Offset<Struct>> *structs() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Struct>> *>(16); }
  const flatbuffers::Vector<flatbuffers::Offset<Ident>> *idents() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Ident>> *>(18); }
  const flatbuffers::Vector<int32_t> *default_int_vector_types() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(20); }
  const flatbuffers::Vector<int32_t> *default_float_vector_types() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(22); }
  uint8_t uses_frame_state() const { return GetField<uint8_t>(24, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, 4 /* bytecode_version */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* bytecode */) &&
           verifier.Verify(bytecode()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* typetable */) &&
           verifier.Verify(typetable()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* lineinfo */) &&
           verifier.Verify(lineinfo()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* filenames */) &&
           verifier.Verify(filenames()) &&
           verifier.VerifyVectorOfStrings(filenames()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* functions */) &&
           verifier.Verify(functions()) &&
           verifier.VerifyVectorOfTables(functions()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 16 /* structs */) &&
           verifier.Verify(structs()) &&
           verifier.VerifyVectorOfTables(structs()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 18 /* idents */) &&
           verifier.Verify(idents()) &&
           verifier.VerifyVectorOfTables(idents()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 20 /* default_int_vector_types */) &&
           verifier.Verify(default_int_vector_types()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 22 /* default_float_vector_types */) &&
           verifier.Verify(default_float_vector_types()) &&
           VerifyField<uint8_t>(verifier, 24 /* uses_frame_state */) &&
           verifier.EndTable();
  }
};

struct BytecodeFileBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_bytecode_version(int32_t bytecode_version) { fbb_.AddElement<int32_t>(4, bytecode_version, 0); }
  void add_bytecode(flatbuffers::Offset<flatbuffers::Vector<int32_t>> bytecode) { fbb_.AddOffset(6, bytecode); }
  void add_typetable(flatbuffers::Offset<flatbuffers::Vector<int32_t>> typetable) { fbb_.AddOffset(8, typetable); }
  void add_lineinfo(flatbuffers::Offset<flatbuffers::Vector<const LineInfo *>> lineinfo) { fbb_.AddOffset(10, lineinfo); }
  void add_filenames(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> filenames) { fbb_.AddOffset(12, filenames); }
  void add_functions(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Function>>> functions) { fbb_.AddOffset(14, functions); }
  void add_structs(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Struct>>> structs) { fbb_.AddOffset(16, structs); }
  void add_idents(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Ident>>> idents) { fbb_.AddOffset(18, idents); }
  void add_default_int_vector_types(flatbuffers::Offset<flatbuffers::Vector<int32_t>> default_int_vector_types) { fbb_.AddOffset(20, default_int_vector_types); }
  void add_default_float_vector_types(flatbuffers::Offset<flatbuffers::Vector<int32_t>> default_float_vector_types) { fbb_.AddOffset(22, default_float_vector_types); }
  void add_uses_frame_state(uint8_t uses_frame_state) { fbb_.AddElement<uint8_t>(24, uses_frame_state, 0); }
  BytecodeFileBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  BytecodeFileBuilder &operator=(const BytecodeFileBuilder &);
  flatbuffers::Offset<BytecodeFile> Finish() {
    auto o = flatbuffers::Offset<BytecodeFile>(fbb_.EndTable(start_, 11));
    return o;
  }
};

inline flatbuffers::Offset<BytecodeFile> CreateBytecodeFile(flatbuffers::FlatBufferBuilder &_fbb,
   int32_t bytecode_version = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> bytecode = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> typetable = 0,
   flatbuffers::Offset<flatbuffers::Vector<const LineInfo *>> lineinfo = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> filenames = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Function>>> functions = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Struct>>> structs = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Ident>>> idents = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> default_int_vector_types = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> default_float_vector_types = 0,
   uint8_t uses_frame_state = 0) {
  BytecodeFileBuilder builder_(_fbb);
  builder_.add_default_float_vector_types(default_float_vector_types);
  builder_.add_default_int_vector_types(default_int_vector_types);
  builder_.add_idents(idents);
  builder_.add_structs(structs);
  builder_.add_functions(functions);
  builder_.add_filenames(filenames);
  builder_.add_lineinfo(lineinfo);
  builder_.add_typetable(typetable);
  builder_.add_bytecode(bytecode);
  builder_.add_bytecode_version(bytecode_version);
  builder_.add_uses_frame_state(uses_frame_state);
  return builder_.Finish();
}

inline const BytecodeFile *GetBytecodeFile(const void *buf) { return flatbuffers::GetRoot<BytecodeFile>(buf); }

inline bool VerifyBytecodeFileBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<BytecodeFile>(); }

inline const char *BytecodeFileIdentifier() { return "LBCF"; }

inline bool BytecodeFileBufferHasIdentifier(const void *buf) { return flatbuffers::BufferHasIdentifier(buf, BytecodeFileIdentifier()); }

inline void FinishBytecodeFileBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<BytecodeFile> root) { fbb.Finish(root, BytecodeFileIdentifier()); }

}  // namespace bytecode

#endif  // FLATBUFFERS_GENERATED_BYTECODE_BYTECODE_H_
