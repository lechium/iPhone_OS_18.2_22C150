//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSPointerArray;

__attribute__((visibility("hidden")))
@interface VUIUnifiedMessagingRegistry : NSObject
{
    _Bool _newTeamsAdded;	// 8 = 0x8
    _Bool _teamsRemoved;	// 9 = 0x9
    NSNumber *_hasFavoriteTeams;	// 16 = 0x10
    NSPointerArray *_buttonViews;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x006000000014c217
- (void).cxx_destruct;	// IMP=0x000000000014c861
@property(retain, nonatomic) NSPointerArray *buttonViews; // @synthesize buttonViews=_buttonViews;
@property(readonly, nonatomic) NSNumber *hasFavoriteTeams; // @synthesize hasFavoriteTeams=_hasFavoriteTeams;
- (void)postNotificationFavoriteTeamsDidChange;	// IMP=0x000000000014c6d0
- (void)register:(long long)arg1 newTeamsAdded:(_Bool)arg2 teamsRemoved:(_Bool)arg3;	// IMP=0x000000000014c640
- (void)_notifyButtonsChangedAction;	// IMP=0x000000000014c5e6
- (void)_notifyButtonsChanged;	// IMP=0x000000000014c58a
- (void)unRegisterDownloadButton:(id)arg1;	// IMP=0x000000000014c480
- (void)registerDownloadButton:(id)arg1;	// IMP=0x000000000014c3b3
- (_Bool)_hasActiveButtonsNoLock;	// IMP=0x000000000014c329
@property(readonly, nonatomic) _Bool hasActiveButtons;
- (id)init;	// IMP=0x000000000014c26c

@end

