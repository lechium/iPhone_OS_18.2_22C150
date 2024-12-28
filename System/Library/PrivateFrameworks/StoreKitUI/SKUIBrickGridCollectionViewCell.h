//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, SKUIEditorialCellLayout, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell
{
    NSString *_accessibilityLabel;	// 8 = 0x8
    UIImageView *_brickImageView;	// 16 = 0x10
    struct UIEdgeInsets _contentInsets;	// 24 = 0x18
    SKUIEditorialCellLayout *_editorialCellLayout;	// 56 = 0x38
    UIView *_editorialContainerView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003577f5
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000003576e3
- (void)layoutSubviews;	// IMP=0x00000000003574b3
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x000000000035737e
@property(retain, nonatomic) UIImage *brickImage;
- (void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2;	// IMP=0x0000000000356e7e

@end
