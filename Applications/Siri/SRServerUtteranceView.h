//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class SiriSharedUIContentLabel, UIFont;

@interface SRServerUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SiriSharedUIContentLabel *_label;	// 40 = 0x28
    _Bool _chevronHasBeenShown;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 49 = 0x31
}

+ (double)insertionAnimatedZPosition;	// IMP=0x004000000007d3cf
- (void).cxx_destruct;	// IMP=0x002000000007d873
- (double)_scaledSiriCorrectionViewLeading;	// IMP=0x001000000007d814
- (void)layoutSubviews;	// IMP=0x001000000007d6b6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000007d65b
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(retain, nonatomic) UIFont *font;
- (void)setAttributedText:(id)arg1;	// IMP=0x001000000007d4fb
- (void)setText:(id)arg1;	// IMP=0x001000000007d498
- (double)baselineOffsetFromBottom;	// IMP=0x001000000007d438
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x001000000007d3dd
- (_Bool)chevronHasBeenShown;	// IMP=0x001000000007d3bf
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x001000000007d39e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000007d21f

@end

