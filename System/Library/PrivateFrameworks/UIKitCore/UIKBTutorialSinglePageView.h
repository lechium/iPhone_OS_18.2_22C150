//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBTutorialSinglePageView : UIView
{
    _Bool _useAlertStyle;	// 8 = 0x8
    UIView *_visualDisplayView;	// 16 = 0x10
    UILabel *_textTitle;	// 24 = 0x18
    UILabel *_textBody;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c0ddd8
@property(nonatomic) _Bool useAlertStyle; // @synthesize useAlertStyle=_useAlertStyle;
@property(retain, nonatomic) UILabel *textBody; // @synthesize textBody=_textBody;
@property(retain, nonatomic) UILabel *textTitle; // @synthesize textTitle=_textTitle;
@property(retain, nonatomic) UIView *visualDisplayView; // @synthesize visualDisplayView=_visualDisplayView;
- (void)configPageView;	// IMP=0x0000000000c0cb59
- (void)layoutSubviews;	// IMP=0x0000000000c0cb47
- (id)initWithImageView:(id)arg1;	// IMP=0x0000000000c0ca0f

@end

