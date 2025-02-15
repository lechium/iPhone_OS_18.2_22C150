//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class DBAppHistory, NSString;

@protocol DBAppHistoryObserving <NSObject>

@optional
- (void)appHistory:(DBAppHistory *)arg1 mostRecentHomeScreenUpdatedTo:(NSString *)arg2;
- (void)appHistory:(DBAppHistory *)arg1 mostRecentOtherAppUpdatedTo:(NSString *)arg2;
- (void)appHistory:(DBAppHistory *)arg1 mostRecentAudioAppUpdatedTo:(NSString *)arg2;
- (void)appHistory:(DBAppHistory *)arg1 mostRecentNavigationAppUpdatedTo:(NSString *)arg2;
@end

