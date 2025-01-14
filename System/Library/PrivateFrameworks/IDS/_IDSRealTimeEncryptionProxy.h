//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSString;
@protocol OS_dispatch_queue;

@interface _IDSRealTimeEncryptionProxy : NSObject
{
    NSString *_uniqueID;	// 8 = 0x8
    NSString *_accountID;	// 16 = 0x10
    CUTWeakReference *_delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000033202
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x0000000000032f4a
- (void)resetKeysForGroup:(id)arg1;	// IMP=0x0000000000032e50
- (void)sendMKMRecoveryRequestToGroup:(id)arg1;	// IMP=0x0000000000032d56
- (void)requestMasterKeyMaterialForGroup:(id)arg1;	// IMP=0x0000000000032c5c
- (void)sendMasterKeyMaterialToGroup:(id)arg1;	// IMP=0x0000000000032b62
- (void)requestPublicKeys;	// IMP=0x0000000000032a85
- (void)sendPrekeyToGroup:(id)arg1;	// IMP=0x0000000000032901
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000032768
- (void)dealloc;	// IMP=0x00000000000326cd
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000032474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

