//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

@interface _TtC13FitnessCoreUI27PlatterlessNonScalingButton : UIControl
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *floatingContentView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003b5c0
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b370
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b360
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003b350
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000003b270
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)layoutSubviews;	// IMP=0x000000000003ae40
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003ab80
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a920
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003a840

@end

