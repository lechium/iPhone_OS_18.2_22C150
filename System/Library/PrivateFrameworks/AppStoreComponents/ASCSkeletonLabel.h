//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILabel.h>

@class ASCContentSkeleton, UIColor;

__attribute__((visibility("hidden")))
@interface ASCSkeletonLabel : UILabel
{
    _Bool _wantsAncestorFocusMarqueeAfterClearingSkeleton;	// 8 = 0x8
    UIColor *_skeletonColor;	// 16 = 0x10
    long long _skeletonNumberOfLines;	// 24 = 0x18
    ASCContentSkeleton *_skeleton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006801f
@property(nonatomic) _Bool wantsAncestorFocusMarqueeAfterClearingSkeleton; // @synthesize wantsAncestorFocusMarqueeAfterClearingSkeleton=_wantsAncestorFocusMarqueeAfterClearingSkeleton;
@property(copy, nonatomic) ASCContentSkeleton *skeleton; // @synthesize skeleton=_skeleton;
@property(nonatomic) long long skeletonNumberOfLines; // @synthesize skeletonNumberOfLines=_skeletonNumberOfLines;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000067f0b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000067e50
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000067d99
@property(copy, nonatomic) UIColor *skeletonColor; // @synthesize skeletonColor=_skeletonColor;
- (double)_baselineOffsetFromBottom;	// IMP=0x0000000000067b11
- (double)_firstBaselineOffsetFromTop;	// IMP=0x0000000000067a69
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000067a54
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000067a29
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000679d5

@end

