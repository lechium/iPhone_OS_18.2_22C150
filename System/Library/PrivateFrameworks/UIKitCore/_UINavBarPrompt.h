//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UILabel, UINavigationBar;

__attribute__((visibility("hidden")))
@interface _UINavBarPrompt : UIView
{
    UILabel *_label;	// 8 = 0x8
    UINavigationBar *_navBar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000044525a
- (void)layoutSubviews;	// IMP=0x00000000004450ea
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;	// IMP=0x0000000000444de4
- (struct CGRect)promptBounds;	// IMP=0x0000000000444da6
- (struct CGRect)_labelFrame;	// IMP=0x0000000000444c83
@property(copy, nonatomic) NSString *prompt;
- (id)initWithNavBar:(id)arg1;	// IMP=0x0000000000444a6b

@end
