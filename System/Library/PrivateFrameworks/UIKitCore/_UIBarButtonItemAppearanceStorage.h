//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSValue, UIColor, _UIBarBackButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage
{
    NSMutableDictionary *backgroundImages;	// 16 = 0x10
    NSMutableDictionary *miniBackgroundImages;	// 24 = 0x18
    UIColor *tintColor;	// 32 = 0x20
    NSValue *titlePositionOffset;	// 40 = 0x28
    NSValue *miniTitlePositionOffset;	// 48 = 0x30
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;	// 56 = 0x38
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000411205
@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;
- (id)anyBackButtonBackgroundImage;	// IMP=0x0000000000411053
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;	// IMP=0x0000000000411036
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;	// IMP=0x0000000000410fab
- (double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000410f8e
- (void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000410f2c
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000410e24
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000410d62
- (id)anyBackgroundImage;	// IMP=0x0000000000410ade
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(_Bool)arg3;	// IMP=0x000000000041091a
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(_Bool)arg4;	// IMP=0x00000000004106b0

@end

