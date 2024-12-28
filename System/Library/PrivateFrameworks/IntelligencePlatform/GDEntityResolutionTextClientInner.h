//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDEntityResolutionRequest, MISSING_TYPE, NSArray;

@interface GDEntityResolutionTextClientInner : NSObject
{
    MISSING_TYPE *service;	// 8 = 0x8
    MISSING_TYPE *feedbackService;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000129dcc
- (id)init;	// IMP=0x0000000000129d99
- (_Bool)recordDirectFeedbackWithEngagedIds:(id)arg1 rejectedIds:(id)arg2 ignoredIds:(id)arg3 neverPresentedIds:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000129790
- (id)resolveAddressToContactForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000128edd
- (id)generateMentionsForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001274ce
- (id)resolveEntitiesSyncForBatchRequests:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000127096
- (void)resolveEntitiesForBatchRequests:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x0000000000126b3f
- (id)resolveEntitiesSyncForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000126690
- (void)resolveEntitiesForRequest:(GDEntityResolutionRequest *)arg1 completionHandler:(void (^)(GDEntityResolutionResult *, NSError *))arg2;	// IMP=0x00000000001261d1
- (_Bool)cooldownSyncAndReturnError:(id *)arg1;	// IMP=0x0000000000125d53
- (void)cooldownWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x0000000000125971
- (_Bool)warmupSyncFor:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000001254fe
- (void)warmupFor:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000012501f
- (id)initFor:(long long)arg1 warmup:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000124b90

@end
