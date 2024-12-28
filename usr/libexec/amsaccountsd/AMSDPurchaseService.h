//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDPurchaseService : NSObject
{
}

+ (id)_odiSessionCacheAccessQueue;	// IMP=0x002000000003e797
+ (id)_odiSessionCache;	// IMP=0x001000000003e72d
+ (id)_fdsResultCacheAccessQueue;	// IMP=0x000000000003e6ac
+ (id)_fdsResultCache;	// IMP=0x001000000003e657
+ (id)_fdsEvaluatorCacheAccessQueue;	// IMP=0x001000000003e5d6
+ (id)_fdsEvaluatorCache;	// IMP=0x001000000003e56c
+ (id)_fdsConsumedCacheAccessQueue;	// IMP=0x001000000003e4eb
+ (id)_fdsConsumedCache;	// IMP=0x001000000003e481
+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x001000000003d2fd
- (id)_serverEndpointIdentifierForFDSAction:(unsigned long long)arg1;	// IMP=0x002000000003e467
- (void)_generateLegacyFDSWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003e461
- (void)_generateODIFDSWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003e3f7
- (void)_createODISessionWithSessionIdentifier:(id)arg1 cacheIdentifier:(id)arg2 accountType:(unsigned long long)arg3 bundleIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003e26d
- (void)updateODIWithAttributes:(id)arg1 forSessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e0fc
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)arg1 sessionIdentifier:(id)arg2 clearCache:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003df8b
- (void)getODIAssessmentForSessionIdentifier:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003de18
- (void)createODISessionWithSessionIdentifier:(id)arg1 accountType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003ddee
- (void)partialFDSAssessmentForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003dd60
- (void)generateFDSWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003dcd2
- (void)didConsumeFDSForPurchaseIdentifier:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003da70
- (void)cacheFDS:(id)arg1 forPurchaseIdentifier:(id)arg2 logKey:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003d781
- (void)cachedFDSForPurchaseIdentifier:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d387

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
