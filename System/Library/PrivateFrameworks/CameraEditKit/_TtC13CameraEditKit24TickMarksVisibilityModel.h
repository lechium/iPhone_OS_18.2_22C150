//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13CameraEditKit24TickMarksVisibilityModel : NSObject
{
    MISSING_TYPE *model;	// 8 = 0x8
    MISSING_TYPE *overlappingSections;	// 16 = 0x10
    MISSING_TYPE *visibleSectionIndices;	// 24 = 0x18
    MISSING_TYPE *needsRebuild;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004e3c0
- (id)init;	// IMP=0x000000000004e360
- (_Bool)shouldHideTickMarkAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004e330
- (void)setNeedsRebuild;	// IMP=0x000000000004bfd0
- (id)initWithModel:(id)arg1;	// IMP=0x000000000004bf40

@end

