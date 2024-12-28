//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSDate, NSSet, NSString, SFClearHistoryViewController;

@protocol SFClearHistoryViewControllerDelegate <NSObject>
- (unsigned long long)clearHistoryViewController:(SFClearHistoryViewController *)arg1 numberOfTabsToBeClosedForProfilesWithIdentifiers:(NSSet *)arg2;
- (void)clearHistoryViewController:(SFClearHistoryViewController *)arg1 clearHistoryVisitsAddedAfterDate:(NSDate *)arg2 beforeDate:(NSDate *)arg3 profileIdentifier:(NSString *)arg4 clearAllProfiles:(_Bool)arg5 closeAllTabs:(_Bool)arg6;
@end
