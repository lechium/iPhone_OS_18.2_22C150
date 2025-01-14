//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIMirrorNinePatchView : UIView
{
    UIImage *_originalImage;	// 8 = 0x8
    struct UIEdgeInsets _insets;	// 16 = 0x10
    UIImageView *_imageViews[4];	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001a7e949
- (void)_updateResizableImageAndViews;	// IMP=0x0000000001a7e824
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000001a7e812
- (void)layoutSubviews;	// IMP=0x0000000001a7e60a
- (void)setImage:(id)arg1 withResizableCornerSize:(struct CGSize)arg2;	// IMP=0x0000000001a7e566
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001a7e3f6

@end

