//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKUISettingsGroupDescription;
@protocol SKUISettingsGroupControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupController : NSObject
{
    id <SKUISettingsGroupControllerDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_settingDescriptions;	// 16 = 0x10
    SKUISettingsGroupDescription *_settingsGroupDescription;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000127220
@property(retain, nonatomic) SKUISettingsGroupDescription *settingsGroupDescription; // @synthesize settingsGroupDescription=_settingsGroupDescription;
@property(retain, nonatomic) NSMutableArray *settingDescriptions; // @synthesize settingDescriptions=_settingDescriptions;
@property(nonatomic) __weak id <SKUISettingsGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewForSettingDescription:(id)arg1;	// IMP=0x000000000012711d
- (void)_reloadSettingDescription:(id)arg1;	// IMP=0x000000000012708f
- (void)attachSettingDescription:(id)arg1;	// IMP=0x0000000000126fb6

@end
