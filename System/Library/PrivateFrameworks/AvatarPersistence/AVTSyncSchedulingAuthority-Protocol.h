//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVTSyncSchedulingAuthority
- (void)madeLocalChanges;
- (void)didResetSync;
- (void)didReceivePushNotification;
- (void)exportDidCompleteSuccessfully;
- (void)importDidCompleteSuccessfully;
- (_Bool)exportRequired;
- (_Bool)importRequired;
@end
