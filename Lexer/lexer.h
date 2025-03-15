/*
#                    GROUP - 16
#2021A7PS1452P                   Aaradhya Kulshreshtha
#2021B5A70900P                   Anshul Maheshwari
#2021B5A70925P                   Dhruv Bhandari
#2021B5A71144P                   Nimish Sharma
#2021B4A70817P                   Prakhar Agarwal
#2021B4A71746P                   Sugeet Sood

*/
#ifndef LEXER_H
#define LEXER_H

#include "lexerDef.h"

extern FILE *getStream(FILE *fp);
extern tokenInfo getNextToken(twinBuffer B);
extern void remcom(char *tstfile, char *cleanFile);
extern void setupTwinBuffer();
extern void releaseTwinBuffer();
extern void setupSymbolTable();
extern void freeSymbolTable();
extern tokenInfo generateTokenInfo(Vocabulary v, char *lexeme, int lineNumber);
extern void convertEnumToString(Vocabulary v, char *dest);
extern linkedList *extractTokens(FILE *fp);
extern void freeLinkedList(linkedList *list);
extern linkedList *processLexicalTokens(FILE *fp, char *outp);

#endif