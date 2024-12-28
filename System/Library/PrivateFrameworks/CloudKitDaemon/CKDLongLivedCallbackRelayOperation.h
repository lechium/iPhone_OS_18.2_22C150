//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation
{
}

- (void)cancel;	// IMP=0x000000000037852f
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000037845e
- (void)operationWithID:(id)arg1 receivedCallback:(id)arg2;	// IMP=0x0000000000378389
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;	// IMP=0x0000000000378375
- (void)main;	// IMP=0x00000000003782dc
- (_Bool)isLongLivedCallbackRelayOperation;	// IMP=0x00000000003782d4
- (_Bool)shouldCheckAppVersion;	// IMP=0x00000000003782cc
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
