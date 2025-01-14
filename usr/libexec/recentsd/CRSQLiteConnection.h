//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface CRSQLiteConnection : NSObject
{
    NSString *_path;	// 8 = 0x8
    struct sqlite3 *_db;	// 16 = 0x10
    struct __CFDictionary *_statementCache;	// 24 = 0x18
    void *_ICUSearchContext;	// 32 = 0x20
    void *_CRSearchContext;	// 40 = 0x28
    void *_CRPhoneSearchContext;	// 48 = 0x30
    int _transactionType;	// 56 = 0x38
    unsigned long long _transactionCount;	// 64 = 0x40
    NSObject<OS_os_log> *_log;	// 72 = 0x48
}

+ (id)connectionToNewInMemoryStore;	// IMP=0x0040000000012522
@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (int)rollbackTransaction;	// IMP=0x001000000001302a
- (int)commitTransaction;	// IMP=0x0010000000012fe6
- (int)beginTransactionWithType:(int)arg1;	// IMP=0x0010000000012f6b
- (int)beginTransaction;	// IMP=0x0010000000012f57
- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1;	// IMP=0x0010000000012cb3
- (void)flush;	// IMP=0x0010000000012c78
- (_Bool)isOpen;	// IMP=0x0010000000012c6a
- (void)close;	// IMP=0x0010000000012b9a
- (int)open;	// IMP=0x0010000000012871
- (const char *)_vfsModuleName;	// IMP=0x001000000001269f
- (void)dealloc;	// IMP=0x001000000001260f
- (id)initWithPath:(id)arg1 databaseName:(id)arg2;	// IMP=0x00100000000125c7
- (id)initWithPath:(id)arg1;	// IMP=0x000000000001254b

@end

