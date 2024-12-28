//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class RoutePlanningRefinementModel, UIImageView, UILabel;

@interface RoutePlanningRefinementBarButton : UIButton
{
    UILabel *_textLabel;	// 8 = 0x8
    RoutePlanningRefinementModel *_refinement;	// 16 = 0x10
    UIImageView *_iconImageView;	// 24 = 0x18
    UIImageView *_chevronImageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000008c76e3
@property(retain, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) RoutePlanningRefinementModel *refinement; // @synthesize refinement=_refinement;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)_updateFonts;	// IMP=0x00100000008c751b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000008c7441
- (void)_drawWithRefinement;	// IMP=0x00100000008c7050
- (void)_updateMenu;	// IMP=0x00100000008c6f42
- (void)redraw;	// IMP=0x00100000008c6f30
- (void)layoutSubviews;	// IMP=0x00100000008c6ddb
- (id)initWithRefinement:(id)arg1;	// IMP=0x00100000008c64c1

@end
