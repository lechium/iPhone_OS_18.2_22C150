//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CardShadowSettings, UIImageView;

@interface CardShadowView : UIView
{
    UIImageView *_shadowImageView;	// 8 = 0x8
    _Bool _invalidatedShadow;	// 16 = 0x10
    CardShadowSettings *_settings;	// 24 = 0x18
    _Bool _buttonCard;	// 32 = 0x20
    _Bool _shouldCropBottomEdge;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0020000000600d5d
@property(nonatomic) _Bool shouldCropBottomEdge; // @synthesize shouldCropBottomEdge=_shouldCropBottomEdge;
@property(nonatomic) _Bool buttonCard; // @synthesize buttonCard=_buttonCard;
- (void)invalidateCachedShadow;	// IMP=0x0010000000600ce1
- (void)layoutSubviews;	// IMP=0x0010000000600308
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000006002c7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000060025d

@end
