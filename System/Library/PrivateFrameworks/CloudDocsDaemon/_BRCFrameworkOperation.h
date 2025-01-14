//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class NSObject, NSString;
@protocol BROperationClient;

__attribute__((visibility("hidden")))
@interface _BRCFrameworkOperation : _BRCOperation
{
    _Bool _startedFinish;	// 264 = 0x108
    _Bool _ignoreMissingRemoteClientProxy;	// 265 = 0x109
    NSObject<BROperationClient> *_remoteClientProxy;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000000001c97c
@property(nonatomic) _Bool ignoreMissingRemoteClientProxy; // @synthesize ignoreMissingRemoteClientProxy=_ignoreMissingRemoteClientProxy;
@property(retain, nonatomic) NSObject<BROperationClient> *remoteClientProxy; // @synthesize remoteClientProxy=_remoteClientProxy;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000001c8fd
- (void)start;	// IMP=0x000000000001c844
- (oneway void)invalidate;	// IMP=0x000000000001c806
- (id)descriptionAdditionalStringWithContext:(id)arg1;	// IMP=0x000000000001c6e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

