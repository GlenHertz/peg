/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -mno-ms-bitfields  -IC:\Users\hertz\Documents\Glen\nim-0.17.2\lib -o C:\Users\hertz\Documents\Glen\peg\nimcache\peg.o C:\Users\hertz\Documents\Glen\peg\nimcache\peg.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg;
typedef struct tyObject_Node_0qztr5Keivtxacz23lA4IA tyObject_Node_0qztr5Keivtxacz23lA4IA;
typedef struct tyObject_NonTerminalObj_VMn2tGRm8B9a9cqMEec3KPEA tyObject_NonTerminalObj_VMn2tGRm8B9a9cqMEec3KPEA;
typedef struct tySequence_Wjn0aMA9aB3dP6CVOwwvGJg tySequence_Wjn0aMA9aB3dP6CVOwwvGJg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg {
NI a;
NI b;
};
typedef NU8 tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q;
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_Node_0qztr5Keivtxacz23lA4IA {
tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q kind;
union{
NimStringDesc* term;
NIM_CHAR ch;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw* charChoice;
tyObject_NonTerminalObj_VMn2tGRm8B9a9cqMEec3KPEA* nt;
NI index;
tySequence_Wjn0aMA9aB3dP6CVOwwvGJg* sons;
} kindU;
};
typedef NimStringDesc* tyArray_Qdg3zgcNlmwGTTeVxyC9bbw[20];
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef NU8 tySet_tyEnum_NonTerminalFlag_raeF9a9anryo8cnwfITE0Glw;
struct tyObject_NonTerminalObj_VMn2tGRm8B9a9cqMEec3KPEA {
NimStringDesc* name;
NI line;
NI col;
tySet_tyEnum_NonTerminalFlag_raeF9a9anryo8cnwfITE0Glw flags;
tyObject_Node_0qztr5Keivtxacz23lA4IA rule;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_Wjn0aMA9aB3dP6CVOwwvGJg {
  TGenericSeq Sup;
  tyObject_Node_0qztr5Keivtxacz23lA4IA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, commandLineParams_WoBZMy8AVRATRE9bQuYWzCQ)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size);
N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, X5BX5D__CV9a2fojnWgtmE9c1IX0QsKQ)(tySequence_sM4lkSb7zS6F7OVMvW9cffQ* s, tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg x);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_5)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_6)(void);
N_NIMCALL(void, peg_pbf62PsYTV9cEJDSNbpjoMg)(NimStringDesc* pattern, tyObject_Node_0qztr5Keivtxacz23lA4IA* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_7)(void);
static N_INLINE(tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg, dotdot__18yoMoUbfoITYgEZSwZDYAtimes)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_9)(void);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_10)(void);
N_NIMCALL(void, fill_s300MTYZA2MWoedGdoyKmw)(NimStringDesc** arr, NimStringDesc* val);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, grep_ZoR8KNsbCB9adAkfzbmqSVg)(FILE* fh, tyObject_Node_0qztr5Keivtxacz23lA4IA p);
N_NIMCALL(NIM_BOOL, readLine_sO1bQXVRA6RP9cdYJXNKeSw)(FILE* f, NimStringDesc** line);
N_NIMCALL(NIM_BOOL, npegscontainsCapture)(NimStringDesc* s, tyObject_Node_0qztr5Keivtxacz23lA4IA pattern, NimStringDesc** matches, NI matchesLen_0, NI start);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f, NimStringDesc* s);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_15)(void);
static N_INLINE(NIM_BOOL, fileExists_yTPrfdEKg9cKCeSFUA6popQpeg)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(FILE*, open_hqzpWQbdA2B8l9a6wwNoP4g)(NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f);
N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_pegsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_pegsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, pegDatInit000)(void);
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* args_Z49cI5Vuq3FexY1kK3HGC5w;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NimStringDesc* pattern_cKJ6aGIZvECUVCOkiiJVgQ;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
tyObject_Node_0qztr5Keivtxacz23lA4IA p_bmkkw6yBPlqblkc5mNLsiw;
extern TNimType NTI_0qztr5Keivtxacz23lA4IA_;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* filenames_verJ78q9aAPgNLs8xNqk9bnQ;
tyArray_Qdg3zgcNlmwGTTeVxyC9bbw matches_F1YQwxbeVqg7USm77t9ckfA;
TNimType NTI_Qdg3zgcNlmwGTTeVxyC9bbw_;
NimStringDesc* line_NVvgoErt9akDjVCk80VL87A;
NimStringDesc* file_vRMNVQrOvJN4gg0PUMBN3g;
FILE* fh_w7BNgWgo39bNqEU0mBrZp6Q;
STRING_LITERAL(TM_XOB9aO4SXU9bXsgm48aWI46A_3, "Usage: peg <pattern> [<filename> <filename2> ...]]\015\012If a filena"
"me is not provided then it will read input from stdin", 116);
STRING_LITERAL(TM_XOB9aO4SXU9bXsgm48aWI46A_4, "-h", 2);
STRING_LITERAL(TM_XOB9aO4SXU9bXsgm48aWI46A_12, " ", 1);
STRING_LITERAL(TM_XOB9aO4SXU9bXsgm48aWI46A_13, "\015\012", 2);
STRING_LITERAL(TM_XOB9aO4SXU9bXsgm48aWI46A_16, "Error: cannot read file: ", 25);
STRING_LITERAL(TM_XOB9aO4SXU9bXsgm48aWI46A_18, "len(a) == L seq modified while iterating over it", 48);
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_2)(void) {
	nimGCvisit((void*)args_Z49cI5Vuq3FexY1kK3HGC5w, 0);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(276, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(378, "system.nim");
		nimln_(276, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(277, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(278, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(279, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(378, "system.nim");
		nimln_(279, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(280, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(281, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(282, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(283, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_5)(void) {
	nimGCvisit((void*)pattern_cKJ6aGIZvECUVCOkiiJVgQ, 0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(255, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(257, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(258, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_6)(void) {
	switch (p_bmkkw6yBPlqblkc5mNLsiw.kind) {
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 0) ... ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 8):
	break;
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 9):
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 10):
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 11):
	nimGCvisit((void*)p_bmkkw6yBPlqblkc5mNLsiw.kindU.term, 0);
	break;
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 12):
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 18):
	break;
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 13):
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 19):
	nimGCvisit((void*)p_bmkkw6yBPlqblkc5mNLsiw.kindU.charChoice, 0);
	break;
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 14):
	nimGCvisit((void*)p_bmkkw6yBPlqblkc5mNLsiw.kindU.nt, 0);
	break;
	case ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 25) ... ((tyEnum_PegKind_r9a6rAhGclsLWkBysfmtr6Q) 27):
	break;
	default:
	nimGCvisit((void*)p_bmkkw6yBPlqblkc5mNLsiw.kindU.sons, 0);
	break;
	} 
}
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_7)(void) {
	nimGCvisit((void*)filenames_verJ78q9aAPgNLs8xNqk9bnQ, 0);
}

static N_INLINE(tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg, dotdot__18yoMoUbfoITYgEZSwZDYAtimes)(NI a, NI b) {
	tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg result;
	nimfr_("..", "system.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(305, "system.nim");
	result.a = a;
	nimln_(306, "system.nim");
	result.b = b;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_9)(void) {
	NI T1_;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 20; T1_++) {
	nimGCvisit((void*)matches_F1YQwxbeVqg7USm77t9ckfA[T1_], 0);
	}
}
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_10)(void) {
	nimGCvisit((void*)line_NVvgoErt9akDjVCk80VL87A, 0);
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, fill_s300MTYZA2MWoedGdoyKmw)(NimStringDesc** arr, NimStringDesc* val) {
	nimfr_("fill", "peg.nim");
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(1986, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1987, "system.nim");
			while (1) {
				NI TM_XOB9aO4SXU9bXsgm48aWI46A_11;
				if (!(res <= ((NI) 19))) goto LA3;
				nimln_(1988, "system.nim");
				i = res;
				if ((NU)(i) > (NU)(19)) raiseIndexError();
				nimln_(25, "peg.nim");
				unsureAsgnRef((void**) (&arr[(i)- 0]), copyString(val));
				nimln_(1989, "system.nim");
				TM_XOB9aO4SXU9bXsgm48aWI46A_11 = addInt(res, ((NI) 1));
				res = (NI)(TM_XOB9aO4SXU9bXsgm48aWI46A_11);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, grep_ZoR8KNsbCB9adAkfzbmqSVg)(FILE* fh, tyObject_Node_0qztr5Keivtxacz23lA4IA p) {
	nimfr_("grep", "peg.nim");
	{
		nimln_(28, "peg.nim");
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = readLine_sO1bQXVRA6RP9cdYJXNKeSw(fh, (&line_NVvgoErt9akDjVCk80VL87A));
			if (!T3_) goto LA2;
			nimln_(29, "peg.nim");
			fill_s300MTYZA2MWoedGdoyKmw(matches_F1YQwxbeVqg7USm77t9ckfA, NIM_NIL);
			nimln_(30, "peg.nim");
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = npegscontainsCapture(line_NVvgoErt9akDjVCk80VL87A, p, matches_F1YQwxbeVqg7USm77t9ckfA, 20, ((NI) 0));
				if (!T6_) goto LA7_;
				{
					NI i;
					NimStringDesc* m;
					NI i_2;
					i = (NI)0;
					m = (NimStringDesc*)0;
					nimln_(2159, "system.nim");
					i_2 = ((NI) 0);
					nimln_(2160, "system.nim");
					{
						if (!(((NI) (i_2)) <= ((NI) 19))) goto LA12_;
						{
							nimln_(2161, "system.nim");
							while (1) {
								NI TM_XOB9aO4SXU9bXsgm48aWI46A_14;
								nimln_(2162, "system.nim");
								i = i_2;
								m = matches_F1YQwxbeVqg7USm77t9ckfA[(i_2)- 0];
								nimln_(32, "peg.nim");
								{
									nimln_(378, "system.nim");
									nimln_(32, "peg.nim");
									if (!!((m == NIM_NIL))) goto LA18_;
									nimln_(33, "peg.nim");
									{
										if (!(((NI) 0) < ((NI) (i)))) goto LA22_;
										nimln_(34, "peg.nim");
										write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_12));
									}
									LA22_: ;
									nimln_(35, "peg.nim");
									write_c4mGyJBvK73pdM22jiweKQ(stdout, m);
								}
								goto LA16_;
								LA18_: ;
								{
									nimln_(36, "peg.nim");
									if (!(((NI) (i)) == ((NI) 0))) goto LA25_;
									nimln_(37, "peg.nim");
									printf("%s\015\012", line_NVvgoErt9akDjVCk80VL87A? (line_NVvgoErt9akDjVCk80VL87A)->data:"nil");
									fflush(stdout);
									nimln_(38, "peg.nim");
									goto LA9;
								}
								goto LA16_;
								LA25_: ;
								{
									nimln_(40, "peg.nim");
									write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_13));
									nimln_(41, "peg.nim");
									goto LA9;
								}
								LA16_: ;
								nimln_(2163, "system.nim");
								{
									if (!(((NI) 19) <= ((NI) (i_2)))) goto LA30_;
									goto LA14;
								}
								LA30_: ;
								nimln_(2164, "system.nim");
								TM_XOB9aO4SXU9bXsgm48aWI46A_14 = addInt(i_2, ((NI) 1));
								if (TM_XOB9aO4SXU9bXsgm48aWI46A_14 < 0 || TM_XOB9aO4SXU9bXsgm48aWI46A_14 > 19) raiseOverflow();
								i_2 = (NI)(TM_XOB9aO4SXU9bXsgm48aWI46A_14);
							}
						} LA14: ;
					}
					LA12_: ;
				} LA9: ;
			}
			LA7_: ;
		} LA2: ;
	}
	popFrame();
}
static N_NIMCALL(void, TM_XOB9aO4SXU9bXsgm48aWI46A_15)(void) {
	nimGCvisit((void*)file_vRMNVQrOvJN4gg0PUMBN3g, 0);
}

static N_INLINE(NIM_BOOL, fileExists_yTPrfdEKg9cKCeSFUA6popQpeg)(NimStringDesc* filename) {
	NIM_BOOL result;
	nimfr_("fileExists", "os.nim");
	result = (NIM_BOOL)0;
	nimln_(115, "os.nim");
	nimln_(116, "os.nim");
	result = nosexistsFile(filename);
	popFrame();
	return result;
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_unicodeDatInit000();
	stdlib_pegsDatInit000();
	stdlib_dynlibDatInit000();
	stdlib_winleanDatInit000();
	stdlib_timesDatInit000();
	stdlib_ospathsDatInit000();
	stdlib_osDatInit000();
	pegDatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_unicodeInit000();
	stdlib_pegsInit000();
	stdlib_dynlibInit000();
	stdlib_winleanInit000();
	stdlib_timesInit000();
	stdlib_ospathsInit000();
	stdlib_osInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	NimStringDesc* T13_;
	NI T14_;
	NI TM_XOB9aO4SXU9bXsgm48aWI46A_8;
	tyObject_Slice_qL3WGViqT0p5sVr4YFHsLg T15_;
	nimfr_("peg", "peg.nim");
nimRegisterGlobalMarker(TM_XOB9aO4SXU9bXsgm48aWI46A_2);
nimRegisterGlobalMarker(TM_XOB9aO4SXU9bXsgm48aWI46A_5);
nimRegisterGlobalMarker(TM_XOB9aO4SXU9bXsgm48aWI46A_6);
nimRegisterGlobalMarker(TM_XOB9aO4SXU9bXsgm48aWI46A_7);
nimRegisterGlobalMarker(TM_XOB9aO4SXU9bXsgm48aWI46A_9);
nimRegisterGlobalMarker(TM_XOB9aO4SXU9bXsgm48aWI46A_10);
nimRegisterGlobalMarker(TM_XOB9aO4SXU9bXsgm48aWI46A_15);
	nimln_(6, "peg.nim");
	asgnRefNoCycle((void**) (&args_Z49cI5Vuq3FexY1kK3HGC5w), commandLineParams_WoBZMy8AVRATRE9bQuYWzCQ());
	nimln_(7, "peg.nim");
	{
		NI T3_;
		T3_ = (args_Z49cI5Vuq3FexY1kK3HGC5w ? args_Z49cI5Vuq3FexY1kK3HGC5w->Sup.len : 0);
		if (!(T3_ < ((NI) 1))) goto LA4_;
		nimln_(8, "peg.nim");
		printf("%s\015\012", ((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_3)? (((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_3))->data:"nil");
		fflush(stdout);
		nimln_(9, "peg.nim");
		exit(((NI) 1));
	}
	LA4_: ;
	nimln_(10, "peg.nim");
	{
		NIM_BOOL T8_;
		NI T9_;
		T8_ = (NIM_BOOL)0;
		T9_ = (args_Z49cI5Vuq3FexY1kK3HGC5w ? args_Z49cI5Vuq3FexY1kK3HGC5w->Sup.len : 0);
		T8_ = (((NI) 0) < T9_);
		if (!(T8_)) goto LA10_;
		if ((NU)(((NI) 0)) >= (NU)(args_Z49cI5Vuq3FexY1kK3HGC5w->Sup.len)) raiseIndexError();
		T8_ = eqStrings(args_Z49cI5Vuq3FexY1kK3HGC5w->data[((NI) 0)], ((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_4));
		LA10_: ;
		if (!T8_) goto LA11_;
		nimln_(11, "peg.nim");
		printf("%s\015\012", ((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_3)? (((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_3))->data:"nil");
		fflush(stdout);
		nimln_(12, "peg.nim");
		exit(((NI) 0));
	}
	LA11_: ;
	nimln_(15, "peg.nim");
	if ((NU)(((NI) 0)) >= (NU)(args_Z49cI5Vuq3FexY1kK3HGC5w->Sup.len)) raiseIndexError();
	T13_ = (NimStringDesc*)0;
	T13_ = pattern_cKJ6aGIZvECUVCOkiiJVgQ; pattern_cKJ6aGIZvECUVCOkiiJVgQ = copyStringRC1(args_Z49cI5Vuq3FexY1kK3HGC5w->data[((NI) 0)]);
	if (T13_) nimGCunrefNoCycle(T13_);
	nimln_(16, "peg.nim");
	chckNil((void*)(&p_bmkkw6yBPlqblkc5mNLsiw));
	genericReset((void*)(&p_bmkkw6yBPlqblkc5mNLsiw), (&NTI_0qztr5Keivtxacz23lA4IA_));
	peg_pbf62PsYTV9cEJDSNbpjoMg(pattern_cKJ6aGIZvECUVCOkiiJVgQ, (&p_bmkkw6yBPlqblkc5mNLsiw));
	nimln_(17, "peg.nim");
	nimln_(3824, "system.nim");
	nimln_(17, "peg.nim");
	T14_ = (args_Z49cI5Vuq3FexY1kK3HGC5w ? args_Z49cI5Vuq3FexY1kK3HGC5w->Sup.len : 0);
	TM_XOB9aO4SXU9bXsgm48aWI46A_8 = subInt(T14_, ((NI) 1));
	T15_ = dotdot__18yoMoUbfoITYgEZSwZDYAtimes(((NI) 1), (NI)(TM_XOB9aO4SXU9bXsgm48aWI46A_8));
	asgnRefNoCycle((void**) (&filenames_verJ78q9aAPgNLs8xNqk9bnQ), X5BX5D__CV9a2fojnWgtmE9c1IX0QsKQ(args_Z49cI5Vuq3FexY1kK3HGC5w, T15_));
	nimln_(43, "peg.nim");
	{
		NI T18_;
		T18_ = (filenames_verJ78q9aAPgNLs8xNqk9bnQ ? filenames_verJ78q9aAPgNLs8xNqk9bnQ->Sup.len : 0);
		if (!(T18_ == ((NI) 0))) goto LA19_;
		nimln_(44, "peg.nim");
		grep_ZoR8KNsbCB9adAkfzbmqSVg(stdin, p_bmkkw6yBPlqblkc5mNLsiw);
		nimln_(45, "peg.nim");
		exit(((NI) 0));
	}
	LA19_: ;
	{
		NI i;
		NI L;
		NI T22_;
		nimln_(3639, "system.nim");
		i = ((NI) 0);
		nimln_(3640, "system.nim");
		T22_ = (filenames_verJ78q9aAPgNLs8xNqk9bnQ ? filenames_verJ78q9aAPgNLs8xNqk9bnQ->Sup.len : 0);
		L = T22_;
		{
			nimln_(3641, "system.nim");
			while (1) {
				NimStringDesc* T25_;
				NI TM_XOB9aO4SXU9bXsgm48aWI46A_17;
				if (!(i < L)) goto LA24;
				nimln_(3642, "system.nim");
				if ((NU)(i) >= (NU)(filenames_verJ78q9aAPgNLs8xNqk9bnQ->Sup.len)) raiseIndexError();
				T25_ = (NimStringDesc*)0;
				T25_ = file_vRMNVQrOvJN4gg0PUMBN3g; file_vRMNVQrOvJN4gg0PUMBN3g = copyStringRC1(filenames_verJ78q9aAPgNLs8xNqk9bnQ->data[i]);
				if (T25_) nimGCunrefNoCycle(T25_);
				nimln_(48, "peg.nim");
				{
					NIM_BOOL T28_;
					NimStringDesc* T31_;
					T28_ = (NIM_BOOL)0;
					T28_ = fileExists_yTPrfdEKg9cKCeSFUA6popQpeg(file_vRMNVQrOvJN4gg0PUMBN3g);
					if (!!(T28_)) goto LA29_;
					nimln_(49, "peg.nim");
					T31_ = (NimStringDesc*)0;
					T31_ = rawNewString(file_vRMNVQrOvJN4gg0PUMBN3g->Sup.len + 25);
appendString(T31_, ((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_16));
appendString(T31_, file_vRMNVQrOvJN4gg0PUMBN3g);
					printf("%s\015\012", T31_? (T31_)->data:"nil");
					fflush(stdout);
					nimln_(50, "peg.nim");
					exit(((NI) 1));
				}
				LA29_: ;
				fh_w7BNgWgo39bNqEU0mBrZp6Q = 0;
				nimln_(51, "peg.nim");
				fh_w7BNgWgo39bNqEU0mBrZp6Q = open_hqzpWQbdA2B8l9a6wwNoP4g(file_vRMNVQrOvJN4gg0PUMBN3g, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) -1));
				nimln_(52, "peg.nim");
				grep_ZoR8KNsbCB9adAkfzbmqSVg(fh_w7BNgWgo39bNqEU0mBrZp6Q, p_bmkkw6yBPlqblkc5mNLsiw);
				nimln_(53, "peg.nim");
				close_BWnr8V7RERYno9bIdPmw8Hw_2(fh_w7BNgWgo39bNqEU0mBrZp6Q);
				nimln_(3643, "system.nim");
				TM_XOB9aO4SXU9bXsgm48aWI46A_17 = addInt(i, ((NI) 1));
				i = (NI)(TM_XOB9aO4SXU9bXsgm48aWI46A_17);
				nimln_(3644, "system.nim");
				{
					NI T34_;
					T34_ = (filenames_verJ78q9aAPgNLs8xNqk9bnQ ? filenames_verJ78q9aAPgNLs8xNqk9bnQ->Sup.len : 0);
					if (!!((T34_ == L))) goto LA35_;
					failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_XOB9aO4SXU9bXsgm48aWI46A_18));
				}
				LA35_: ;
			} LA24: ;
		}
	}
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, pegDatInit000)(void) {
NTI_Qdg3zgcNlmwGTTeVxyC9bbw_.size = sizeof(tyArray_Qdg3zgcNlmwGTTeVxyC9bbw);
NTI_Qdg3zgcNlmwGTTeVxyC9bbw_.kind = 16;
NTI_Qdg3zgcNlmwGTTeVxyC9bbw_.base = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
NTI_Qdg3zgcNlmwGTTeVxyC9bbw_.flags = 2;
}
