//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC7remindd18RDClientConnection : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *clientIdentity;	// 24 = 0x18
    MISSING_TYPE *xpcDaemon;	// 72 = 0x48
    MISSING_TYPE *isUserInteractive;	// 88 = 0x58
    MISSING_TYPE *xpcConnection;	// 96 = 0x60
    MISSING_TYPE *notificationSubscriptionQueue;	// 104 = 0x68
    MISSING_TYPE *keepAliveTransaction;	// 112 = 0x70
    MISSING_TYPE *cancellables;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000047a770
- (id)init;	// IMP=0x001000000047b8a0
@property(nonatomic, readonly) NSString *description;
- (void)dealloc;	// IMP=0x001000000047a730
- (void)indexingPerformerWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000047c9c0
- (void)syncInterfacePerformerWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000047c770
- (void)storePerformerWithProcessName:(id)arg1 storeContainerToken:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000047c380
- (void)debugPerformerWithStoreContainerToken:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000047bcf0
- (void)changeTrackingPerformerWithStoreContainerToken:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000047bb30
- (void)cloudKitNetworkActivityDidUpdate:(id)arg1;	// IMP=0x001000000047cd00

@end
