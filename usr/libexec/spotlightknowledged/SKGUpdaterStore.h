//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface SKGUpdaterStore : NSObject
{
    NSLock *systemOidLock;	// 8 = 0x8
    struct atomic_flag purgeInProgress;	// 16 = 0x10
    int _parentFd;	// 20 = 0x14
    int _indexType;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    struct datastore_info *_dsi;	// 40 = 0x28
}

+ (void)flushAndCommitAll;	// IMP=0x0040000000072373
+ (void)purgeAllWithUUID:(id)arg1 listenerType:(int)arg2 indexType:(int)arg3;	// IMP=0x001000000007217f
+ (id)instanceForIndexType:(int)arg1;	// IMP=0x0010000000071328
+ (id)lock;	// IMP=0x00100000000712d3
+ (id)stores;	// IMP=0x001000000007127e
- (void).cxx_destruct;	// IMP=0x00200000000753ad
- (void)closeAndDeleteStore;	// IMP=0x0010000000075381
- (_Bool)enumerateItems:(CDUnknownBlockType)arg1;	// IMP=0x0010000000075181
- (void)setProtectionClassForFolder:(int)arg1 protectionClass:(int)arg2;	// IMP=0x0010000000074ed4
- (_Bool)markForDeleteDBO:(struct db_obj *)arg1 purgeContext:(CDStruct_8f782ae9)arg2;	// IMP=0x0010000000074b85
- (struct db_obj *)getDBOWithOID:(long long)arg1;	// IMP=0x0010000000074967
- (_Bool)flushAndCommit;	// IMP=0x00100000000747c2
- (unsigned long long)readUpdaterStatus:(int)arg1 UUID:(const char *)arg2;	// IMP=0x001000000007466f
- (_Bool)writeUpdaterStatus:(int)arg1 UUID:(const char *)arg2 serialNumber:(unsigned long long)arg3;	// IMP=0x00100000000742c0
- (id)readLanguageFromBundleID:(const char *)arg1 identifier:(const char *)arg2 UUID:(const char *)arg3 serialNumber:(unsigned long long)arg4;	// IMP=0x0010000000073efc
- (_Bool)writeLanguageForBundleID:(const char *)arg1 identifier:(const char *)arg2 UUID:(const char *)arg3 serialNumber:(unsigned long long)arg4 language:(const char *)arg5;	// IMP=0x0010000000073afb
- (_Bool)removePriorityForBundleID:(const char *)arg1 identifier:(const char *)arg2 UUID:(const char *)arg3 serialNumber:(unsigned long long)arg4;	// IMP=0x0010000000073812
- (_Bool)checkPriorityForBundleID:(const char *)arg1 identifier:(const char *)arg2 UUID:(const char *)arg3 serialNumber:(unsigned long long)arg4 defaultIfNotExists:(_Bool)arg5;	// IMP=0x0010000000073681
- (_Bool)markPriorityForBundleID:(const char *)arg1 identifier:(const char *)arg2 UUID:(const char *)arg3 serialNumber:(unsigned long long)arg4 flag:(_Bool)arg5;	// IMP=0x00100000000730fe
- (unsigned long long)readSerialNumberFromBundleID:(const char *)arg1 identifier:(const char *)arg2 UUID:(const char *)arg3 listenerType:(int)arg4;	// IMP=0x0010000000072e20
- (_Bool)writeSerialNumberToBundleID:(const char *)arg1 identifier:(const char *)arg2 UUID:(const char *)arg3 serialNumber:(unsigned long long)arg4 listenerType:(int)arg5;	// IMP=0x0010000000072ac5
- (void)dealloc;	// IMP=0x0010000000072a68
- (id)initWithParentFd:(int)arg1 indexType:(int)arg2;	// IMP=0x0010000000072526
- (void)purgeAllWithUUIDImpl:(id)arg1 listenerType:(int)arg2;	// IMP=0x001000000007170f
- (void)purgeAllWithUUID:(id)arg1 listenerType:(int)arg2;	// IMP=0x00100000000716e4

@end

