//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UIFloatingTabBarSelectionContainerView : UIView
{
    UIView *_selectionView;	// 160 = 0xa0
    struct CGRect _selectionViewFrame;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000013f9a62
@property(readonly, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) struct CGRect selectionViewFrame; // @synthesize selectionViewFrame=_selectionViewFrame;
- (void)layoutSubviews;	// IMP=0x00000000013f99b5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000013f9380

@end
