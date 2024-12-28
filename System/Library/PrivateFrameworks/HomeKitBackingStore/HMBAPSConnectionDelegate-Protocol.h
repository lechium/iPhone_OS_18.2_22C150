//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/NSObject-Protocol.h>

@class APSIncomingMessage, NSData, NSString;
@protocol HMBAPSConnection;

@protocol HMBAPSConnectionDelegate <NSObject>
- (void)connection:(id <HMBAPSConnection>)arg1 didReceiveIncomingMessage:(APSIncomingMessage *)arg2;
- (void)connection:(id <HMBAPSConnection>)arg1 didReceivePublicToken:(NSData *)arg2;
- (void)connection:(id <HMBAPSConnection>)arg1 didReceiveToken:(NSData *)arg2 forTopic:(NSString *)arg3 identifier:(NSString *)arg4;
@end
