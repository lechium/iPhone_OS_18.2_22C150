//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserAlerts/NSObject-Protocol.h>

@class NSNumber, URTAlert;

@protocol URTAlertClientToServerInterface <NSObject>
- (oneway void)dismissAlert:(URTAlert *)arg1;
- (oneway void)presentAlert:(URTAlert *)arg1 preferringPresentationStyle:(NSNumber *)arg2;
@end
