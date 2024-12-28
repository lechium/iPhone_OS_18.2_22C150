//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;
@protocol HMDModernTransportMessageContextFactory;

__attribute__((visibility("hidden")))
@interface HMDModernTransportMessageContextManager : HMFObject
{
    id <HMDModernTransportMessageContextFactory> _factory;	// 8 = 0x8
    NSMutableDictionary *_contexts;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000006d8f38
- (void).cxx_destruct;	// IMP=0x00000000006d8ec8
@property(readonly, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(readonly, nonatomic) __weak id <HMDModernTransportMessageContextFactory> factory; // @synthesize factory=_factory;
- (id)contextWithMessage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;	// IMP=0x00000000006d8dcb
- (void)completeContext:(id)arg1 withPayload:(id)arg2 error:(id)arg3 isFinal:(_Bool)arg4;	// IMP=0x00000000006d898e
- (id)contextForIdentifier:(id)arg1;	// IMP=0x00000000006d8914
- (id)createContextWithMessage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;	// IMP=0x00000000006d866b
- (id)initWithFactory:(id)arg1;	// IMP=0x00000000006d85e3
- (id)init;	// IMP=0x00000000006d85ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
