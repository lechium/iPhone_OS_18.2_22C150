//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TSDClockSyncPTPSyncClient
- (void)updateWithSyncInfoValid:(_Bool)arg1 syncFlags:(unsigned char)arg2 timeSyncTime:(unsigned long long)arg3 domainTimeHi:(unsigned long long)arg4 domainTimeLo:(unsigned long long)arg5 cumulativeScaledRate:(unsigned long long)arg6 inverseCumulativeScaledRate:(unsigned long long)arg7 grandmasterID:(unsigned long long)arg8 localPortNumber:(unsigned short)arg9;
@end

