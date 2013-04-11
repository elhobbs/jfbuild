// Assembly-language function wrappers for a.asm functions
// for the Build Engine
// by Jonathon Fowler (jf@jonof.id.au)


#ifndef __a_h__
#define __a_h__

#if defined(__WATCOMC__) && !defined(NOASM)

extern long mmxoverlay();
#pragma aux mmxoverlay modify [eax ebx ecx edx];
extern long sethlinesizes(long,long,long);
#pragma aux sethlinesizes parm [eax][ebx][ecx];
extern long setpalookupaddress(char *);
#pragma aux setpalookupaddress parm [eax];
extern long setuphlineasm4(long,long);
#pragma aux setuphlineasm4 parm [eax][ebx];
extern long hlineasm4(long,long,long,long,long,long);
#pragma aux hlineasm4 parm [eax][ebx][ecx][edx][esi][edi];
extern long setuprhlineasm4(long,long,long,long,long,long);
#pragma aux setuprhlineasm4 parm [eax][ebx][ecx][edx][esi][edi];
extern long rhlineasm4(long,long,long,long,long,long);
#pragma aux rhlineasm4 parm [eax][ebx][ecx][edx][esi][edi];
extern long setuprmhlineasm4(long,long,long,long,long,long);
#pragma aux setuprmhlineasm4 parm [eax][ebx][ecx][edx][esi][edi];
extern long rmhlineasm4(long,long,long,long,long,long);
#pragma aux rmhlineasm4 parm [eax][ebx][ecx][edx][esi][edi];
extern long setupqrhlineasm4(long,long,long,long,long,long);
#pragma aux setupqrhlineasm4 parm [eax][ebx][ecx][edx][esi][edi];
extern long qrhlineasm4(long,long,long,long,long,long);
#pragma aux qrhlineasm4 parm [eax][ebx][ecx][edx][esi][edi];
extern long setvlinebpl(long);
#pragma aux setvlinebpl parm [eax];
extern long fixtransluscence(long);
#pragma aux fixtransluscence parm [eax];
extern long prevlineasm1(long,long,long,long,long,long);
#pragma aux prevlineasm1 parm [eax][ebx][ecx][edx][esi][edi];
extern long vlineasm1(long,long,long,long,long,long);
#pragma aux vlineasm1 parm [eax][ebx][ecx][edx][esi][edi];
extern long setuptvlineasm(long);
#pragma aux setuptvlineasm parm [eax];
extern long tvlineasm1(long,long,long,long,long,long);
#pragma aux tvlineasm1 parm [eax][ebx][ecx][edx][esi][edi];
extern long setuptvlineasm2(long,long,long);
#pragma aux setuptvlineasm2 parm [eax][ebx][ecx];
extern long tvlineasm2(long,long,long,long,long,long);
#pragma aux tvlineasm2 parm [eax][ebx][ecx][edx][esi][edi];
extern long mvlineasm1(long,long,long,long,long,long);
#pragma aux mvlineasm1 parm [eax][ebx][ecx][edx][esi][edi];
extern long setupvlineasm(long);
#pragma aux setupvlineasm parm [eax];
extern long vlineasm4(long,long);
#pragma aux vlineasm4 parm [ecx][edi] modify [eax ebx ecx edx esi edi];
extern long setupmvlineasm(long);
#pragma aux setupmvlineasm parm [eax];
extern long mvlineasm4(long,long);
#pragma aux mvlineasm4 parm [ecx][edi] modify [eax ebx ecx edx esi edi];
extern void setupspritevline(long,long,long,long,long,long);
#pragma aux setupspritevline parm [eax][ebx][ecx][edx][esi][edi];
extern void spritevline(long,long,long,long,long,long);
#pragma aux spritevline parm [eax][ebx][ecx][edx][esi][edi];
extern void msetupspritevline(long,long,long,long,long,long);
#pragma aux msetupspritevline parm [eax][ebx][ecx][edx][esi][edi];
extern void mspritevline(long,long,long,long,long,long);
#pragma aux mspritevline parm [eax][ebx][ecx][edx][esi][edi];
extern void tsetupspritevline(long,long,long,long,long,long);
#pragma aux tsetupspritevline parm [eax][ebx][ecx][edx][esi][edi];
extern void tspritevline(long,long,long,long,long,long);
#pragma aux tspritevline parm [eax][ebx][ecx][edx][esi][edi];
extern long mhline(long,long,long,long,long,long);
#pragma aux mhline parm [eax][ebx][ecx][edx][esi][edi];
extern long mhlineskipmodify(long,long,long,long,long,long);
#pragma aux mhlineskipmodify parm [eax][ebx][ecx][edx][esi][edi];
extern long msethlineshift(long,long);
#pragma aux msethlineshift parm [eax][ebx];
extern long thline(long,long,long,long,long,long);
#pragma aux thline parm [eax][ebx][ecx][edx][esi][edi];
extern long thlineskipmodify(long,long,long,long,long,long);
#pragma aux thlineskipmodify parm [eax][ebx][ecx][edx][esi][edi];
extern long tsethlineshift(long,long);
#pragma aux tsethlineshift parm [eax][ebx];
extern long setupslopevlin(long,long,long);
#pragma aux setupslopevlin parm [eax][ebx][ecx] modify [edx];
extern long slopevlin(long,long,long,long,long,long);
#pragma aux slopevlin parm [eax][ebx][ecx][edx][esi][edi];
extern long settransnormal();
#pragma aux settransnormal parm;
extern long settransreverse();
#pragma aux settransreverse parm;
extern long setupdrawslab(long,long);
#pragma aux setupdrawslab parm [eax][ebx];
extern long drawslab(long,long,long,long,long,long);
#pragma aux drawslab parm [eax][ebx][ecx][edx][esi][edi];

#elif defined(__GNUC__) && defined(__i386__) && !defined(NOASM)	// __WATCOMC__

#if defined(__linux) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
#define __cdecl
#endif

extern long __cdecl mmxoverlay();
extern long __cdecl sethlinesizes(long,long,long);
extern long __cdecl setpalookupaddress(char *);
extern long __cdecl setuphlineasm4(long,long);
extern long __cdecl hlineasm4(long,long,long,long,long,long);
extern long __cdecl setuprhlineasm4(long,long,long,long,long,long);
extern long __cdecl rhlineasm4(long,long,long,long,long,long);
extern long __cdecl setuprmhlineasm4(long,long,long,long,long,long);
extern long __cdecl rmhlineasm4(long,long,long,long,long,long);
extern long __cdecl setupqrhlineasm4(long,long,long,long,long,long);
extern long __cdecl qrhlineasm4(long,long,long,long,long,long);
extern long __cdecl setvlinebpl(long);
extern long __cdecl fixtransluscence(long);
extern long __cdecl prevlineasm1(long,long,long,long,long,long);
extern long __cdecl vlineasm1(long,long,long,long,long,long);
extern long __cdecl setuptvlineasm(long);
extern long __cdecl tvlineasm1(long,long,long,long,long,long);
extern long __cdecl setuptvlineasm2(long,long,long);
extern long __cdecl tvlineasm2(long,long,long,long,long,long);
extern long __cdecl mvlineasm1(long,long,long,long,long,long);
extern long __cdecl setupvlineasm(long);
extern long __cdecl vlineasm4(long,long);
extern long __cdecl setupmvlineasm(long);
extern long __cdecl mvlineasm4(long,long);
extern long __cdecl setupspritevline(long,long,long,long,long,long);
extern long __cdecl spritevline(long,long,long,long,long,long);
extern long __cdecl msetupspritevline(long,long,long,long,long,long);
extern long __cdecl mspritevline(long,long,long,long,long,long);
extern long __cdecl tsetupspritevline(long,long,long,long,long,long);
extern long __cdecl tspritevline(long,long,long,long,long,long);
extern long __cdecl mhline(long,long,long,long,long,long);
extern long __cdecl mhlineskipmodify(long,long,long,long,long,long);
extern long __cdecl msethlineshift(long,long);
extern long __cdecl thline(long,long,long,long,long,long);
extern long __cdecl thlineskipmodify(long,long,long,long,long,long);
extern long __cdecl tsethlineshift(long,long);
extern long __cdecl setupslopevlin(long,long,long);
extern long __cdecl slopevlin(long,long,long,long,long,long);
extern long __cdecl settransnormal();
extern long __cdecl settransreverse();
extern long __cdecl setupdrawslab(long,long);
extern long __cdecl drawslab(long,long,long,long,long,long);
extern void __cdecl stretchhline(long,long,long,long,long,long);

#elif defined(_MSC_VER)	&& !defined(NOASM)	// __GNUC__ && __i386__

extern long _cdecl mmxoverlay();
extern long _cdecl sethlinesizes(long,long,long);
extern long _cdecl setpalookupaddress(char *);
extern long _cdecl setuphlineasm4(long,long);
extern long _cdecl hlineasm4(long,long,long,long,long,long);
extern long _cdecl setuprhlineasm4(long,long,long,long,long,long);
extern long _cdecl rhlineasm4(long,long,long,long,long,long);
extern long _cdecl setuprmhlineasm4(long,long,long,long,long,long);
extern long _cdecl rmhlineasm4(long,long,long,long,long,long);
extern long _cdecl setupqrhlineasm4(long,long,long,long,long,long);
extern long _cdecl qrhlineasm4(long,long,long,long,long,long);
extern long _cdecl setvlinebpl(long);
extern long _cdecl fixtransluscence(long);
extern long _cdecl prevlineasm1(long,long,long,long,long,long);
extern long _cdecl vlineasm1(long,long,long,long,long,long);
extern long _cdecl setuptvlineasm(long);
extern long _cdecl tvlineasm1(long,long,long,long,long,long);
extern long _cdecl setuptvlineasm2(long,long,long);
extern long _cdecl tvlineasm2(long,long,long,long,long,long);
extern long _cdecl mvlineasm1(long,long,long,long,long,long);
extern long _cdecl setupvlineasm(long);
extern long _cdecl vlineasm4(long,long);
extern long _cdecl setupmvlineasm(long);
extern long _cdecl mvlineasm4(long,long);
extern long _cdecl setupspritevline(long,long,long,long,long,long);
extern long _cdecl spritevline(long,long,long,long,long,long);
extern long _cdecl msetupspritevline(long,long,long,long,long,long);
extern long _cdecl mspritevline(long,long,long,long,long,long);
extern long _cdecl tsetupspritevline(long,long,long,long,long,long);
extern long _cdecl tspritevline(long,long,long,long,long,long);
extern long _cdecl mhline(long,long,long,long,long,long);
extern long _cdecl mhlineskipmodify(long,long,long,long,long,long);
extern long _cdecl msethlineshift(long,long);
extern long _cdecl thline(long,long,long,long,long,long);
extern long _cdecl thlineskipmodify(long,long,long,long,long,long);
extern long _cdecl tsethlineshift(long,long);
extern long _cdecl setupslopevlin(long,long,long);
extern long _cdecl slopevlin(long,long,long,long,long,long);
extern long _cdecl settransnormal();
extern long _cdecl settransreverse();
extern long _cdecl setupdrawslab(long,long);
extern long _cdecl drawslab(long,long,long,long,long,long);
extern void _cdecl stretchhline(long,long,long,long,long,long);

#else				// _MSC_VER

#define ENGINE_USING_A_C

void setvlinebpl(int dabpl);
void fixtransluscence(void *datransoff);
void settransnormal(void);
void settransreverse(void);

void sethlinesizes(int logx, int logy, void *bufplc);
void setpalookupaddress(void *paladdr);
void setuphlineasm4(int bxinc, int byinc);
void hlineasm4(int cnt, int skiploadincs, int paloffs, unsigned int by, unsigned int bx, void *p);

void setupslopevlin(int logylogx, void *bufplc, int pinc);
void slopevlin(void *p, int i, void *slopaloffs, int cnt, int bx, int by);

void setupvlineasm(int neglogy);
void vlineasm1(int vinc, void *paloffs, int cnt, unsigned int vplc, void *bufplc, void *p);

void setupmvlineasm(int neglogy);
void mvlineasm1(int vinc, void *paloffs, int cnt, unsigned int vplc, void *bufplc, void *p);

void setuptvlineasm(int neglogy);
void tvlineasm1(int vinc, void *paloffs, int cnt, unsigned int vplc, void *bufplc, void *p);

void msethlineshift(int logx, int logy);
void mhline(void *bufplc, unsigned int bx, int cntup16, int junk, unsigned int by, void *p);

void tsethlineshift(int logx, int logy);
void thline(void *bufplc, unsigned int bx, int cntup16, int junk, unsigned int by, void *p);

void setupspritevline(void *paloffs, int bxinc, int byinc, int ysiz);
void spritevline(int bx, int by, int cnt, void *bufplc, void *p);

void msetupspritevline(void *paloffs, int bxinc, int byinc, int ysiz);
void mspritevline(int bx, int by, int cnt, void *bufplc, void *p);

void tsetupspritevline(void *paloffs, int bxinc, int byinc, int ysiz);
void tspritevline(int bx, int by, int cnt, void *bufplc, void *p);

void setupdrawslab (int dabpl, void *pal);
void drawslab (int dx, int v, int dy, int vi, void *vptr, void *p);
void stretchhline (void *p0, int u, int cnt, int uinc, void *rptr, void *p);

void mmxoverlay();

#endif	// else

#endif // __a_h__
