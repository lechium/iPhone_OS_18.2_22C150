//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface MURollingLabelsView : UIView
{
    MISSING_TYPE *$__lazy_storage_$_currentLabelAndConstraints;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_labelAndConstraintsAnimatingIn;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_labelForBaselineAlignment;	// 24 = 0x18
    MISSING_TYPE *transitioningContentSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000027300
@property(nonatomic, readonly) UIView *viewForLastBaselineLayout;
@property(nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026970
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000268b0

@end

