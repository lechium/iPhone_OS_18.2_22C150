//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class NSArray;

@interface NSUserDefaults (BrowsingAssistantExtras)
- (void)browsingAssistant_setMenuActionFavorited:(id)arg1 favorited:(_Bool)arg2;	// IMP=0x0030000000075034
- (_Bool)browsingAssistant_isMenuActionFavorited:(id)arg1;	// IMP=0x0030000000074fb9
@property(copy, nonatomic, setter=browsingAssistant_setFavoritedMenuActions:) NSArray *browsingAssistant_favoritedMenuActions;
@end

