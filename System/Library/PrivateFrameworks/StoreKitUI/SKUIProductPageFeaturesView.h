//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, SKUIClientContext, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageFeaturesView : UIView
{
    UIView *_bottomBorderView;	// 8 = 0x8
    SKUIClientContext *_clientContext;	// 16 = 0x10
    SKUIColorScheme *_colorScheme;	// 24 = 0x18
    long long _features;	// 32 = 0x20
    NSMutableArray *_featureViews;	// 40 = 0x28
    unsigned long long _gameCenterFeatures;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UIView *_topBorderView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c9d54
@property(nonatomic) unsigned long long gameCenterFeatures; // @synthesize gameCenterFeatures=_gameCenterFeatures;
@property(nonatomic) long long features; // @synthesize features=_features;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (id)_gameCenterStringWithFeatures:(unsigned long long)arg1;	// IMP=0x00000000001c95d5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001c939f
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001c9201
- (void)layoutSubviews;	// IMP=0x00000000001c8d72
@property(copy, nonatomic) NSString *title;
- (void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2;	// IMP=0x00000000001c8341
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001c81ac

@end

