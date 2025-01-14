//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIColor, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface _UITabBarItemData
{
    long long _style;	// 8 = 0x8
    NSDictionary *_titleTextAttributes[5];	// 16 = 0x10
    NSDictionary *_badgeTextAttributes[5];	// 56 = 0x38
    UIColor *_iconColor[5];	// 96 = 0x60
    UIColor *_badgeBackgroundColor[5];	// 136 = 0x88
    struct UIOffset _titlePositionAdjustment[5];	// 176 = 0xb0
    struct UIOffset _badgePositionAdjustment[5];	// 256 = 0x100
    struct UIOffset _badgeTitlePositionAdjustment[5];	// 336 = 0x150
    struct {
        unsigned int hasUserTitleFont:1;
        unsigned int hasUserTitleColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserIconColor:1;
        unsigned int hasUserBadgePosition:1;
        unsigned int hasUserBadgeBackgroundColor:1;
        unsigned int hasUserBadgeTitleFont:1;
        unsigned int hasUserBadgeTitleColor:1;
        unsigned int hasUserBadgeTitlePosition:1;
    } _stateFlags[5];	// 416 = 0x1a0
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x006000000185804c
+ (id)standardItemDataForStyle:(long long)arg1;	// IMP=0x00600000018558fc
- (void).cxx_destruct;	// IMP=0x000000000185aa84
@property(readonly, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
- (void)setBadgeTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x000000000185a3a3
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;	// IMP=0x000000000185a322
- (void)setBadgeTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x000000000185a214
- (id)badgeTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000185a029
- (id)badgeTextAttributesForState:(long long)arg1;	// IMP=0x000000000185a015
- (void)setBadgeBackgroundColor:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000001859f94
- (id)badgeBackgroundColorForState:(long long)arg1;	// IMP=0x0000000001859efe
- (void)setBadgePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000001859e98
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000001859e19
- (void)setIconColor:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000001859d9b
- (id)iconColorForState:(long long)arg1;	// IMP=0x0000000001859d33
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000001859ccd
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000001859c4e
- (_Bool)titleTextAttributesSpecifyColorForState:(long long)arg1;	// IMP=0x0000000001859bf6
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000001859aef
- (id)titleTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000001859905
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x00000000018598f1
- (id)_fallbackBadgeTitleColorForState:(long long)arg1;	// IMP=0x0000000001859874
- (id)_fallbackBadgeTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000001859620
- (id)_fallbackTitleColorForState:(long long)arg1;	// IMP=0x00000000018595bc
- (id)_fallbackTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000185937d
- (id)replicate;	// IMP=0x000000000185917f
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x0000000001858d55
- (long long)hashInto:(long long)arg1;	// IMP=0x0000000001858ccc
- (void)describeInto:(id)arg1;	// IMP=0x0000000001858962
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000001858239
- (void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000001857ab8
- (void)_decodeBadgePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000185752e
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000001856fa4
- (void)_decodeBadgeBackgroundColorFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000001856b1b
- (void)_decodeIconColorFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000185669c
- (void)_decodeBadgeTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000185603f
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000001855a34

@end

