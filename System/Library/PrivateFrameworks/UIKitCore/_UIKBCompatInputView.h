//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UIKBCompatInputView : UIView
{
    UIView *_touchableView;	// 8 = 0x8
    UIView *_snapshotView;	// 16 = 0x10
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0060000000e163fc
- (void).cxx_destruct;	// IMP=0x0000000000e16edd
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIView *touchableView; // @synthesize touchableView=_touchableView;
- (_Bool)_hasAutolayoutHeightConstraint;	// IMP=0x0000000000e16e28
- (void)_didChangeKeyplaneWithContext:(id)arg1;	// IMP=0x0000000000e16db7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e16d18
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000e167ca
- (struct CGRect)_compatibleBounds;	// IMP=0x0000000000e1674b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e1669b
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e165f7
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000e1655b
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000e164b1
- (void)addSubview:(id)arg1;	// IMP=0x0000000000e16404
- (void)dealloc;	// IMP=0x0000000000e16395

@end
