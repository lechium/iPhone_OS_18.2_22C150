//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MRUEqualizerView, MRUVisualStylingProvider, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MRURoutingSubtitleView : UIView
{
    long long _state;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
    MRUVisualStylingProvider *_stylingProvider;	// 32 = 0x20
    UILabel *_textLabel;	// 40 = 0x28
    MRUEqualizerView *_equalizerView;	// 48 = 0x30
    UIImageView *_iconImageView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000bbd5f
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MRUEqualizerView *equalizerView; // @synthesize equalizerView=_equalizerView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)updateVisibility;	// IMP=0x00000000000bbbd8
- (void)updateContentSizeCategory;	// IMP=0x00000000000bbb07
- (void)updateVisualStyling;	// IMP=0x00000000000bba93
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x00000000000bba81
- (void)prepareForReuse;	// IMP=0x00000000000bba44
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000bb7d7
- (void)layoutSubviews;	// IMP=0x00000000000bb2cd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000bb140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
