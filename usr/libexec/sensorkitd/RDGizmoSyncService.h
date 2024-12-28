//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, MISSING_TYPE, NSHashTable, NSString, RDDefaults, RDFileURLs;

@interface RDGizmoSyncService : NSObject
{
    MISSING_TYPE *_q;	// 8 = 0x8
    long long _side;	// 16 = 0x10
    IDSService *_resourceService;	// 24 = 0x18
    IDSService *_keyService;	// 32 = 0x20
    RDDefaults *_defaults;	// 40 = 0x28
    RDFileURLs *_fileURLs;	// 48 = 0x30
    NSHashTable *_listeners;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x002000000002a450
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x002000000002ca90
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;	// IMP=0x001000000002c880
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x001000000002c540
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x001000000002c3e0
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000002bb70
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000002b740
- (void)dealloc;	// IMP=0x001000000002a600

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
