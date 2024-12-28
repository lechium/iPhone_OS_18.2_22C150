//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SEMSQLiteDatabase : NSObject
{
    struct sqlite3 *_handle;	// 8 = 0x8
    NSMutableDictionary *_cachedSQLiteStatements;	// 16 = 0x10
    int _dataProtectionClass;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    long long _accessPermission;	// 40 = 0x28
    long long _threadingMode;	// 48 = 0x30
    long long _databaseOptions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005df3b
@property(readonly, nonatomic) long long databaseOptions; // @synthesize databaseOptions=_databaseOptions;
@property(readonly, nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, nonatomic) long long threadingMode; // @synthesize threadingMode=_threadingMode;
@property(readonly, nonatomic) long long accessPermission; // @synthesize accessPermission=_accessPermission;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)rollbackTransactionWithError:(id *)arg1;	// IMP=0x000000000005deee
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x000000000005ded2
- (_Bool)beginTransactionWithError:(id *)arg1;	// IMP=0x000000000005deb6
- (int)rowsModified:(id *)arg1;	// IMP=0x000000000005dda5
- (_Bool)cleanup:(id *)arg1;	// IMP=0x000000000005dd89
- (_Bool)executeCommandString:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005dd04
- (_Bool)executeCommand:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005dc8c
- (id)executeCommand:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000005c808
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000005c64f
- (_Bool)openWithError:(id *)arg1;	// IMP=0x000000000005baa1
- (id)init;	// IMP=0x000000000005ba59
- (id)initWithPath:(id)arg1 accessPermission:(long long)arg2 threadingMode:(long long)arg3 dataProtectionClass:(int)arg4 databaseOptions:(long long)arg5;	// IMP=0x000000000005b8c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
