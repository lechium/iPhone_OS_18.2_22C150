//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, RSFloorPlan;

@interface RSFloorPlanBoundaryRefinement : NSObject
{
    struct unique_ptr<rs_erf::EdgeRefinement, std::default_delete<rs_erf::EdgeRefinement>> _processor;	// 8 = 0x8
    _Bool _initProcessor;	// 16 = 0x10
    NSArray *_prevInputWindows;	// 24 = 0x18
    NSArray *_prevInputDoors;	// 32 = 0x20
    RSFloorPlan *_prevOutputFloorPlan;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000016be16
- (void).cxx_destruct;	// IMP=0x000000000016bdd8
- (id)init;	// IMP=0x000000000016bd38

@end

