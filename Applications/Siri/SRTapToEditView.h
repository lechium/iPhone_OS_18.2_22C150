//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class SiriUIContentButton, UILabel;

@interface SRTapToEditView : UIView
{
    UILabel *_tapToEditLabel;	// 8 = 0x8
    SiriUIContentButton *_circleButton;	// 16 = 0x10
    SiriUIContentButton *_chevronButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000044d67
- (double)_circleToLabelHeightDifference;	// IMP=0x0010000000044cba
- (void)_setHighlighted:(_Bool)arg1;	// IMP=0x0010000000044c13
- (double)baselineOffsetFromBottom;	// IMP=0x0010000000044b6e
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0010000000044ad3
- (void)layoutSubviews;	// IMP=0x0010000000044844
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000447c9
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000447b5
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000447a1
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000004478a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000044314

@end

