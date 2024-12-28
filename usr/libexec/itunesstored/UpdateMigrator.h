//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISLoadURLBagOperation, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UpdateMigrator : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned long long _updateType;	// 16 = 0x10
    ISLoadURLBagOperation *_loadURLBagOperation;	// 24 = 0x18
    NSMutableArray *_migrations;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000000c09d2
- (void).cxx_destruct;	// IMP=0x00200000000c241c
- (void)_queueMigration:(id)arg1;	// IMP=0x00100000000c1de4
- (void)_performMigration;	// IMP=0x00100000000c1c38
- (void)_loadBagAndPerformMigration;	// IMP=0x00100000000c16f3
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x00100000000c1488
- (void)restoreDemotedBundleIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x00100000000c1221
- (_Bool)performMigration:(unsigned long long)arg1;	// IMP=0x00100000000c0b9a
- (void)destroyInstance;	// IMP=0x00100000000c0b62
- (void)dealloc;	// IMP=0x00100000000c0aaf
- (id)init;	// IMP=0x00100000000c0a57

@end
