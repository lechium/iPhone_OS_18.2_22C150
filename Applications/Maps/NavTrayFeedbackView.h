//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UILabel;
@protocol NavTrayFeedbackViewDelegate;

@interface NavTrayFeedbackView : UIView
{
    id <NavTrayFeedbackViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIButton *_thumbsUpButton;	// 24 = 0x18
    UIButton *_thumbsDownButton;	// 32 = 0x20
    CDUnknownBlockType _minimizedValueFontProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000828ef6
- (void)_thumbsDownPressed:(id)arg1;	// IMP=0x0010000000828e5d
- (void)_thumbsUpPressed:(id)arg1;	// IMP=0x0010000000828dc4
- (void)_applyBackgroundColor;	// IMP=0x0010000000828cea
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000828b95
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000828af1
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000827caa

@end

