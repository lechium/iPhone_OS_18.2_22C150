//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PUAdjustmentCustomBehavior;

__attribute__((visibility("hidden")))
@interface PUAdjustmentInfo : NSObject
{
    _Bool _iconIsColor;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    NSString *_localizedName;	// 16 = 0x10
    NSString *_localizedActionName;	// 24 = 0x18
    NSString *_localizedSectionName;	// 32 = 0x20
    NSString *_iconName;	// 40 = 0x28
    NSString *_altIconName;	// 48 = 0x30
    CDUnknownBlockType _altImageTransformBlock;	// 56 = 0x38
    double _defaultLevel;	// 64 = 0x40
    double _identityLevel;	// 72 = 0x48
    double _minimumLevel;	// 80 = 0x50
    double _maximumLevel;	// 88 = 0x58
    double _baseLevel;	// 96 = 0x60
    double _currentLevel;	// 104 = 0x68
    double _lastAdjustedLevel;	// 112 = 0x70
    NSString *_identifier;	// 120 = 0x78
    NSString *_adjustmentKey;	// 128 = 0x80
    NSString *_settingKey;	// 136 = 0x88
    id <PUAdjustmentCustomBehavior> _customSettingDelegate;	// 144 = 0x90
    NSString *_attributeKey;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000001bf108
@property(retain, nonatomic) NSString *attributeKey; // @synthesize attributeKey=_attributeKey;
@property(retain, nonatomic) id <PUAdjustmentCustomBehavior> customSettingDelegate; // @synthesize customSettingDelegate=_customSettingDelegate;
@property(retain, nonatomic) NSString *settingKey; // @synthesize settingKey=_settingKey;
@property(retain, nonatomic) NSString *adjustmentKey; // @synthesize adjustmentKey=_adjustmentKey;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double lastAdjustedLevel; // @synthesize lastAdjustedLevel=_lastAdjustedLevel;
@property(nonatomic) double currentLevel; // @synthesize currentLevel=_currentLevel;
@property(nonatomic) double baseLevel; // @synthesize baseLevel=_baseLevel;
@property(nonatomic) double maximumLevel; // @synthesize maximumLevel=_maximumLevel;
@property(nonatomic) double minimumLevel; // @synthesize minimumLevel=_minimumLevel;
@property(nonatomic) double identityLevel; // @synthesize identityLevel=_identityLevel;
@property(nonatomic) double defaultLevel; // @synthesize defaultLevel=_defaultLevel;
@property(nonatomic) _Bool iconIsColor; // @synthesize iconIsColor=_iconIsColor;
@property(copy, nonatomic) CDUnknownBlockType altImageTransformBlock; // @synthesize altImageTransformBlock=_altImageTransformBlock;
@property(retain, nonatomic) NSString *altIconName; // @synthesize altIconName=_altIconName;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *localizedSectionName; // @synthesize localizedSectionName=_localizedSectionName;
@property(retain, nonatomic) NSString *localizedActionName; // @synthesize localizedActionName=_localizedActionName;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (id)description;	// IMP=0x00000000001bed56
@property(readonly, nonatomic) double normalizedDefaultLevel;
@property(readonly, nonatomic) double normalizedCurrentLevel;
- (id)copy;	// IMP=0x00000000001beaf7

@end
