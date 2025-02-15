//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@protocol MFAtomTextViewAtomLayout;

__attribute__((visibility("hidden")))
@interface _MFAtomLayoutView : UIView
{
    UIView<MFAtomTextViewAtomLayout> *_delegateView;	// 8 = 0x8
}

+ (id)layoutViewWithDelegateView:(id)arg1;	// IMP=0x00600000000159b9
- (void).cxx_destruct;	// IMP=0x0000000000016318
@property(retain, nonatomic) UIView<MFAtomTextViewAtomLayout> *delegateView; // @synthesize delegateView=_delegateView;
- (struct CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;	// IMP=0x0000000000016150
- (struct CGRect)selectionBounds;	// IMP=0x00000000000160d9
- (void)layoutSubviews;	// IMP=0x0000000000015fcd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000015f4f
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000015f32
@property(readonly, nonatomic) struct UIEdgeInsets atomInsets;
- (void)setMaskBounds:(struct CGRect)arg1;	// IMP=0x0000000000015d08
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000015cf3
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000015c81
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000015c2c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015bbd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000015b6e
- (id)init;	// IMP=0x0000000000015b1f
- (id)initWithDelegateView:(id)arg1;	// IMP=0x0000000000015a16

@end

