//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SecuritydXPCServer : NSObject
{
    struct SecurityClient _client;	// 8 = 0x8
    NSXPCConnection *_connection;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000cdc6
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x001000000000cd16
- (_Bool)clientHasBooleanEntitlement:(id)arg1;	// IMP=0x001000000000cd05
- (id)initWithSecurityClient:(struct SecurityClient *)arg1;	// IMP=0x001000000000cc0d
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000cb2a
- (void)secKeychainForceUpgradeIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bbdf
- (void)secItemPromoteItemsForAppClip:(id)arg1 toParentApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b850
- (void)secItemPersistKeychainWritesAtHighPerformanceCost:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b5a9
- (void)secItemDeleteForAppClipApplicationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b531
- (void)secKeychainDeleteMultiuser:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b30e
- (void)secItemDigest:(id)arg1 accessGroup:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000000acff
- (void)findItemPersistentRefByUUID:(id)arg1 extraLoggingString:(id)arg2 client:(struct SecurityClient *)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x001000000000a8e0
- (void)secItemFetchPCSIdentityByKeyOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a48d
- (void)secItemFetchCurrentItemOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a01b
- (void)secItemFetchCurrentItemAcrossAllDevices:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009c00
- (void)secItemUnsetCurrentItemsAcrossAllDevices:(id)arg1 identifiers:(id)arg2 viewHint:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009877
- (void)secItemSetCurrentItemAcrossAllDevices:(id)arg1 newCurrentItemHash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 oldCurrentItemReference:(id)arg6 oldCurrentItemHash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x0010000000009475
- (void)SecItemAddAndNotifyOnSync:(id)arg1 syncCallback:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008dd1

@end
