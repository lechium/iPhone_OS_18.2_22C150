//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface VSSpinnerTitleView : UIView
{
    UILabel *_titleView;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ae80
- (void)didMoveToWindow;	// IMP=0x000000000000ae1c
- (void)layoutSubviews;	// IMP=0x000000000000ac12
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000aa72
- (void)dealloc;	// IMP=0x000000000000aa29
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000000a8ac

@end

