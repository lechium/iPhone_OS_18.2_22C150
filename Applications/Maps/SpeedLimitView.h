//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface SpeedLimitView : UIView
{
    UIImage *_speedLimitImage;	// 8 = 0x8
    UIImage *_dimmedSpeedLimitImage;	// 16 = 0x10
    _Bool _useNightMode;	// 24 = 0x18
    UIImageView *_speedLimitImageView;	// 32 = 0x20
    unsigned long long _speedLimit;	// 40 = 0x28
    long long _shieldType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000085b14c
@property(nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(nonatomic) unsigned long long speedLimit; // @synthesize speedLimit=_speedLimit;
@property(nonatomic) _Bool useNightMode; // @synthesize useNightMode=_useNightMode;
- (id)_stringWithSpeedLimit:(unsigned long long)arg1;	// IMP=0x001000000085afd8
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000085af58
@property(readonly, nonatomic) double dynamicScale;
- (void)_updateShield;	// IMP=0x001000000085a8ca
@property(readonly, nonatomic) _Bool hasContent;
- (void)setSpeedLimit:(unsigned long long)arg1 shieldType:(long long)arg2;	// IMP=0x001000000085a767
@property(readonly, nonatomic) UIImageView *speedLimitImageView; // @synthesize speedLimitImageView=_speedLimitImageView;
- (void)didMoveToWindow;	// IMP=0x001000000085a681
@property(readonly, nonatomic) long long shieldSize;
- (void)_maps_commonInit;	// IMP=0x001000000085a368
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000085a30b
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000085a2bf

@end

