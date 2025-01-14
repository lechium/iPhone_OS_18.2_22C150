//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUPhotosGridCell.h"

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface PUCurationTripKeyAssetBrowserDebugPhotosGridCell : PUPhotosGridCell
{
    UILabel *_curationScoreLabel;	// 8 = 0x8
    UILabel *_iconicSceneScoreLabel;	// 16 = 0x10
    UILabel *_aestheticScoreLabel;	// 24 = 0x18
    UILabel *_promotionScoreLabel;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_subtitleLabel;	// 48 = 0x30
    double _curationScore;	// 56 = 0x38
    double _iconicSceneScore;	// 64 = 0x40
    double _aestheticScore;	// 72 = 0x48
    double _promotionScore;	// 80 = 0x50
    UIColor *_color;	// 88 = 0x58
    NSString *_title;	// 96 = 0x60
    NSString *_subtitle;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000039e9b6
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double promotionScore; // @synthesize promotionScore=_promotionScore;
@property(nonatomic) double aestheticScore; // @synthesize aestheticScore=_aestheticScore;
@property(nonatomic) double iconicSceneScore; // @synthesize iconicSceneScore=_iconicSceneScore;
@property(nonatomic) double curationScore; // @synthesize curationScore=_curationScore;
- (void)layoutSubviews;	// IMP=0x000000000039e0f0

@end

