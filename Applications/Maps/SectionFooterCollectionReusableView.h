//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class MapsThemeButton, NSString;

@interface SectionFooterCollectionReusableView : UICollectionReusableView
{
    MapsThemeButton *_actionButton;	// 8 = 0x8
    NSString *_actionTitle;	// 16 = 0x10
    CDUnknownBlockType _actionHandler;	// 24 = 0x18
}

+ (double)heightForFooterViewWithTraitCollection:(id)arg1;	// IMP=0x00400000003103d0
+ (id)_maximumContentSizeCategory;	// IMP=0x0010000000310251
+ (id)_fontWithTraitCollection:(id)arg1;	// IMP=0x0010000000310238
+ (id)_effectiveTraitCollectionWithTraitCollection:(id)arg1;	// IMP=0x00100000003101bc
+ (id)reuseIdentifier;	// IMP=0x001000000030ffda
- (void).cxx_destruct;	// IMP=0x00200000003104ea
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) MapsThemeButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)setActionTitle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000310333
- (void)setAccessibilityIdentifiersWithBaseString:(id)arg1;	// IMP=0x0010000000310265
- (void)_updateFonts;	// IMP=0x00100000003100d0
- (void)_didTapActionButton;	// IMP=0x001000000031005f
- (void)prepareForReuse;	// IMP=0x001000000030ffec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000030fcaa

@end

