//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol SKAStatusReceivingManaging <NSObject>
- (void)handleIncomingStatusData:(NSData *)arg1 onChannelIdentifier:(NSString *)arg2 dateReceived:(NSDate *)arg3 dateExpired:(NSDate *)arg4 serverTime:(NSDate *)arg5;
@end
