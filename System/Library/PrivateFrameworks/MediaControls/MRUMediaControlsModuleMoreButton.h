//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MRUMediaControlsModuleBadge, MRUVisualStylingProvider, NSString, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MRUMediaControlsModuleMoreButton : UIControl
{
    NSString *_title;	// 8 = 0x8
    MRUVisualStylingProvider *_stylingProvider;	// 16 = 0x10
    long long _layout;	// 24 = 0x18
    double _contentScale;	// 32 = 0x20
    UIView *_backgroundView;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    MRUMediaControlsModuleBadge *_badge;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000603dc
@property(retain, nonatomic) MRUMediaControlsModuleBadge *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateContentSizeCategory;	// IMP=0x0000000000060254
- (void)updateVisualStyling;	// IMP=0x00000000000601f9
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000000600c6
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000060062
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x0000000000060034
@property(nonatomic) unsigned long long count;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005fd65
- (void)layoutSubviews;	// IMP=0x000000000005f871
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005f5e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

