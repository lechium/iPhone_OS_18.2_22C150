//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKNSPredicateRule.h"

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _GKNSPredicateRule : GKNSPredicateRule
{
    id <NSObject> _fact;	// 16 = 0x10
    float _grade;	// 24 = 0x18
    _Bool _asserting;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000421d0
- (void)performActionWithSystem:(id)arg1;	// IMP=0x0000000000042180
- (id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(float)arg3 asserting:(_Bool)arg4;	// IMP=0x00000000000420d0

@end
