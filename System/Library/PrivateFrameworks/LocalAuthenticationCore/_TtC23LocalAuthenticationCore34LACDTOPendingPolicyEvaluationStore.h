//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC23LocalAuthenticationCore34LACDTOPendingPolicyEvaluationStore : NSObject
{
    MISSING_TYPE *store;	// 8 = 0x8
    MISSING_TYPE *workQueue;	// 16 = 0x10
    MISSING_TYPE *taskGroup;	// 24 = 0x18
    MISSING_TYPE *pendingEvaluationsDict;	// 32 = 0x20
}

+ (id)storeKey;	// IMP=0x001000000007c1b0
- (void).cxx_destruct;	// IMP=0x000000000007db30
- (id)init;	// IMP=0x000000000007dad0
- (void)removePendingEvaluationWith:(id)arg1;	// IMP=0x000000000007d9f0
- (id)pendingEvaluationWithIdentifier:(id)arg1;	// IMP=0x000000000007d930
- (void)addPendingEvaluation:(id)arg1;	// IMP=0x000000000007d860
- (void)persistEvaluations;	// IMP=0x000000000007d6f0
- (void)loadWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;	// IMP=0x000000000007d3e0
- (void)loadPersistedEvaluationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007cd60
- (id)initWithPersistentStore:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000007c500
@property(nonatomic, readonly) NSArray *pendingEvaluations;

@end

