//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImageView, UILabel, UIPreviewAction;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetItemView : UIView
{
    _Bool _selected;	// 8 = 0x8
    UIPreviewAction *_action;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000122ee30
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) UIPreviewAction *action; // @synthesize action=_action;
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x000000000122ed93
- (void)_updateConstraints;	// IMP=0x000000000122e757
- (void)_updateImageFromAction;	// IMP=0x000000000122e625
- (void)_updateTitleFromAction;	// IMP=0x000000000122e4fd
- (void)_updateLabelFont;	// IMP=0x000000000122e367
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000122e1d8
- (void)dealloc;	// IMP=0x000000000122e0e1
- (id)initWithFrame:(struct CGRect)arg1 action:(id)arg2;	// IMP=0x000000000122dee2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000122deb3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000122de9f

@end

