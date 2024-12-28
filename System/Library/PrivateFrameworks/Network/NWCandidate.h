//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NWConcrete_nw_candidate_manager;
@protocol OS_nw_interface_option_details, OS_nw_path, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWCandidate : NSObject
{
    NWConcrete_nw_candidate_manager *manager;	// 8 = 0x8
    NSObject<OS_nw_interface_option_details> *details;	// 16 = 0x10
    NSObject<OS_nw_path_evaluator> *evaluator;	// 24 = 0x18
    NSObject<OS_nw_path> *current_path;	// 32 = 0x20
    unsigned int original:1;	// 40 = 0x28
    unsigned int ids:1;	// 40 = 0x28
    unsigned int evaluating:1;	// 40 = 0x28
    unsigned int submitted:1;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000175770
- (void)dealloc;	// IMP=0x00000000001756f0
- (id)redactedDescription;	// IMP=0x00000000001755e0
- (id)description;	// IMP=0x00000000001755a0
- (void)startEvaluator;	// IMP=0x00000000001754e0
- (void)handleNewPath:(id)arg1;	// IMP=0x0000000000175430
- (_Bool)isEligible;	// IMP=0x00000000001753c0
- (id)initCandidate:(id)arg1 forManager:(id)arg2 evaluator:(id)arg3;	// IMP=0x0000000000175000

@end
