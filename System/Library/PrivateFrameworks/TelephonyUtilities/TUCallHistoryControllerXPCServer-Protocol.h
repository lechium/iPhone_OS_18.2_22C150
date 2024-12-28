//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray;
@protocol TUCallHistoryControllerXPCClient;

@protocol TUCallHistoryControllerXPCServer <NSObject>
- (void)unregisterClient:(id <TUCallHistoryControllerXPCClient>)arg1;
- (void)registerClient:(id <TUCallHistoryControllerXPCClient>)arg1;
- (oneway void)allCallHistoryDeleted;
- (oneway void)recentCallsDeleted:(NSArray *)arg1;
@end
