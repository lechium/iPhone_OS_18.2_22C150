//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI34MiniMastheadBarCompressionAnimator : NSObject
{
    MISSING_TYPE *topOffset;	// 8 = 0x8
    MISSING_TYPE *navigationBar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000271e38
- (id)init;	// IMP=0x0000000000271e02
- (void)reloadWithTraitCollection:(id)arg1;	// IMP=0x0000000000271dbe
- (double)minimumBarHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000271daf
- (double)maximumBarHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000271d4e
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;	// IMP=0x0000000000271c9d
- (void)scrollViewIsAtTop:(_Bool)arg1 offset:(double)arg2;	// IMP=0x0000000000271c28
- (void)updateWithPercentage:(double)arg1;	// IMP=0x0000000000271bf3
- (void)prepareForUpdates;	// IMP=0x0000000000271620
- (void)detached;	// IMP=0x00000000002715f5
@property(nonatomic, readonly) _Bool shouldCloseGapOnScroll;
@property(nonatomic, readonly) _Bool shouldCompressAtTop;
@property(nonatomic) double topOffset; // @synthesize topOffset;

@end
