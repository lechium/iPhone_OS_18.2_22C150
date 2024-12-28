//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CommunicationsFilterBlockListCache, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockList : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    int _retries;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableArray *_recentObjectsTested;	// 32 = 0x20
    CommunicationsFilterBlockListCache *_cache;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x006000000000120e
- (void)_disconnected;	// IMP=0x0000000000001e73
- (_Bool)_disconnect;	// IMP=0x0000000000001e6b
- (_Bool)_connect;	// IMP=0x0000000000001d15
- (void)_sendXPCRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000019c1
- (id)_sendSynchronousXPCRequest:(id)arg1;	// IMP=0x0000000000001884
- (_Bool)isItemInList:(id)arg1;	// IMP=0x00000000000016e7
- (id)copyAllItems;	// IMP=0x0000000000001488
- (void)removeItemForAllServices:(id)arg1;	// IMP=0x00000000000013c1
- (void)addItemForAllServices:(id)arg1;	// IMP=0x00000000000012fd
- (void)dealloc;	// IMP=0x00000000000012b1
- (id)init;	// IMP=0x0000000000001253

@end
