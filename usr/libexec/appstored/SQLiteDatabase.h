//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SQLiteConnection;
@protocol OS_dispatch_queue;

@interface SQLiteDatabase : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    NSHashTable *_migratedStores;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000dd5dc
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;	// IMP=0x00100000000dccdf
- (_Bool)connectionNeedsResetForReopen:(id)arg1;	// IMP=0x00100000000dcb9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

