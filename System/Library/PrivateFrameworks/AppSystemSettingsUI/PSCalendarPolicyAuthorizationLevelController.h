//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSCalendarPolicyAuthorizationLevelController : PSListItemsController
{
    NSString *_clientIdentifier;	// 208 = 0xd0
    NSString *_serviceKey;	// 216 = 0xd8
    NSString *_displayName;	// 224 = 0xe0
}

+ (long long)cellStyle;	// IMP=0x006000000000e211
- (void).cxx_destruct;	// IMP=0x000000000000e260
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *serviceKey; // @synthesize serviceKey=_serviceKey;
- (id)footerStringForSpecifiers:(id)arg1;	// IMP=0x000000000000deb9
- (id)specifiers;	// IMP=0x000000000000dd76
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000000dcb8
- (void)_handleUpgradePromptNotification:(id)arg1;	// IMP=0x000000000000dbc2
- (void)viewDidLoad;	// IMP=0x000000000000db3c

@end

