//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessArbiter, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessSubarbiter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSFileAccessArbiter *_realSubarbiter;	// 16 = 0x10
}

- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;	// IMP=0x0000000000904d59
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;	// IMP=0x0000000000904b18
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;	// IMP=0x0000000000904a9d
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;	// IMP=0x0000000000904a22
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;	// IMP=0x00000000009048c2
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;	// IMP=0x000000000090476a
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;	// IMP=0x0000000000904612
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;	// IMP=0x0000000000904597
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;	// IMP=0x000000000090451c
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;	// IMP=0x0000000000904360
- (oneway void)cancelAccessClaimForID:(id)arg1;	// IMP=0x0000000000904211
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;	// IMP=0x000000000090420b
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;	// IMP=0x00000000009041d7
- (oneway void)revokeAccessClaimForID:(id)arg1;	// IMP=0x0000000000904142
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(_Bool)arg2;	// IMP=0x0000000000903f8d
- (void)stopArbitrating;	// IMP=0x0000000000903f77
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000903f03
- (void)dealloc;	// IMP=0x0000000000903e97
- (id)initWithQueue:(id)arg1 listener:(id)arg2;	// IMP=0x0000000000903df3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
