//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, _bmFMDatabase, _bmFMStatement;

@interface _bmFMResultSet : NSObject
{
    NSMutableDictionary *_columnNameToIndexMap;	// 8 = 0x8
    _Bool _shouldAutoClose;	// 16 = 0x10
    _bmFMDatabase *_parentDB;	// 24 = 0x18
    NSString *_query;	// 32 = 0x20
    _bmFMStatement *_statement;	// 40 = 0x28
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2 shouldAutoClose:(_Bool)arg3;	// IMP=0x004000000004e2c2
- (void).cxx_destruct;	// IMP=0x001000000004f9b6
@property(nonatomic) _Bool shouldAutoClose; // @synthesize shouldAutoClose=_shouldAutoClose;
@property(retain) _bmFMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) _bmFMDatabase *parentDB; // @synthesize parentDB=_parentDB;
- (void)_tryLogSqliteColumnError:(int)arg1;	// IMP=0x001000000004f7fa
- (_Bool)bindWithDictionary:(id)arg1;	// IMP=0x001000000004f7e0
- (_Bool)bindWithArray:(id)arg1;	// IMP=0x001000000004f7c9
- (_Bool)bindWithArray:(id)arg1 orDictionary:(id)arg2 orVAList:(struct __va_list_tag [1])arg3;	// IMP=0x001000000004f731
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000004f71f
- (id)objectAtIndexedSubscript:(int)arg1;	// IMP=0x001000000004f70d
- (id)columnNameForIndex:(int)arg1;	// IMP=0x001000000004f6bf
- (id)objectForColumn:(id)arg1;	// IMP=0x001000000004f68f
- (id)objectForColumnName:(id)arg1;	// IMP=0x001000000004f67d
- (id)objectForColumnIndex:(int)arg1;	// IMP=0x001000000004f552
- (const char *)UTF8StringForColumnName:(id)arg1;	// IMP=0x001000000004f540
- (const char *)UTF8StringForColumn:(id)arg1;	// IMP=0x001000000004f510
- (const char *)UTF8StringForColumnIndex:(int)arg1;	// IMP=0x001000000004f482
- (_Bool)columnIsNull:(id)arg1;	// IMP=0x001000000004f452
- (_Bool)columnIndexIsNull:(int)arg1;	// IMP=0x001000000004f422
- (id)dataNoCopyForColumnIndex:(int)arg1;	// IMP=0x001000000004f33d
- (id)dataNoCopyForColumn:(id)arg1;	// IMP=0x001000000004f30d
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x001000000004f22b
- (id)dataForColumn:(id)arg1;	// IMP=0x001000000004f1fb
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x001000000004f0f6
- (id)dateForColumn:(id)arg1;	// IMP=0x001000000004f0c6
- (id)stringForColumn:(id)arg1;	// IMP=0x001000000004f096
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x001000000004efe2
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x001000000004efb9
- (double)doubleForColumn:(id)arg1;	// IMP=0x001000000004ef89
- (_Bool)boolForColumnIndex:(int)arg1;	// IMP=0x001000000004ef71
- (_Bool)boolForColumn:(id)arg1;	// IMP=0x001000000004ef41
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;	// IMP=0x001000000004ef2f
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;	// IMP=0x001000000004eeff
- (long long)longLongIntForColumnIndex:(int)arg1;	// IMP=0x001000000004eed6
- (long long)longLongIntForColumn:(id)arg1;	// IMP=0x001000000004eea6
- (long long)longForColumnIndex:(int)arg1;	// IMP=0x001000000004ee7d
- (long long)longForColumn:(id)arg1;	// IMP=0x001000000004ee4d
- (int)intForColumnIndex:(int)arg1;	// IMP=0x001000000004ee24
- (int)intForColumn:(id)arg1;	// IMP=0x001000000004edf4
- (int)columnIndexForName:(id)arg1;	// IMP=0x001000000004ed3b
- (_Bool)hasAnotherRow;	// IMP=0x001000000004ed16
- (int)internalStepWithError:(id *)arg1;	// IMP=0x001000000004eacc
- (_Bool)stepWithError:(id *)arg1;	// IMP=0x001000000004eab3
- (_Bool)step;	// IMP=0x001000000004ea9f
- (_Bool)nextWithError:(id *)arg1;	// IMP=0x001000000004ea86
- (_Bool)next;	// IMP=0x001000000004ea72
@property(readonly, nonatomic) NSDictionary *resultDictionary;
- (id)resultDict;	// IMP=0x001000000004e793
- (void)kvcMagic:(id)arg1;	// IMP=0x001000000004e641
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
@property(readonly, nonatomic) int columnCount;
- (void)close;	// IMP=0x001000000004e45b
- (void)dealloc;	// IMP=0x001000000004e3f5
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021118

@end
