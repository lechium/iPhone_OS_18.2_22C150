//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TSBlueprintManualImpressionUpdateProvider : NSObject
{
    MISSING_TYPE *updateImpressionsBlocks;	// 8 = 0x8
    MISSING_TYPE *endImpressionsBlocks;	// 16 = 0x10
    MISSING_TYPE *visibleViewAccessor;	// 24 = 0x18
    MISSING_TYPE *visibleRectAccessor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000048346
- (id)init;	// IMP=0x0000000000048302
- (void)endImpressions;	// IMP=0x00000000000480dc
- (void)updateImpressionsForView:(id)arg1 withVisibleRect:(struct CGRect)arg2;	// IMP=0x0000000000047fd0
- (void)setVisibileViewAccessor:(CDUnknownBlockType)arg1 visibleRectAccessor:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047e0e

@end

