//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI39MastheadTitleViewBarCompressionAnimator : NSObject
{
    MISSING_TYPE *topOffset;	// 8 = 0x8
    MISSING_TYPE *shouldAnimate;	// 16 = 0x10
    MISSING_TYPE *navigationBar;	// 24 = 0x18
    MISSING_TYPE *compressibleTitleView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002a59ac
- (id)init;	// IMP=0x00000000002a5976
- (void)reloadWithTraitCollection:(id)arg1;	// IMP=0x00000000002a5932
- (double)minimumBarHeightForTraitCollection:(id)arg1;	// IMP=0x00000000002a5923
- (double)maximumBarHeightForTraitCollection:(id)arg1;	// IMP=0x00000000002a58c2
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;	// IMP=0x00000000002a581e
- (void)scrollViewIsAtTop:(_Bool)arg1 offset:(double)arg2;	// IMP=0x00000000002a57a3
- (void)updateWithPercentage:(double)arg1;	// IMP=0x00000000002a55c8
- (void)prepareForUpdates;	// IMP=0x00000000002a5297
@property(nonatomic, readonly) _Bool shouldCloseGapOnScroll;
@property(nonatomic, readonly) _Bool shouldCompressAtTop;
@property(nonatomic) double topOffset; // @synthesize topOffset;

@end
