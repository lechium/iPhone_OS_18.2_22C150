//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SASTimeIntervalTransport;

@protocol SASSignalServerInterface
- (oneway void)buttonLongPressWithButtonIdentifier:(NSNumber *)arg1 forListenerIdentifier:(NSString *)arg2 atTimestamp:(SASTimeIntervalTransport *)arg3;
- (oneway void)buttonUpWithButtonIdentifier:(NSNumber *)arg1 forListenerIdentifier:(NSString *)arg2 atTimestamp:(SASTimeIntervalTransport *)arg3;
- (oneway void)buttonDownWithButtonIdentifier:(NSNumber *)arg1 forListenerIdentifier:(NSString *)arg2 atTimestamp:(SASTimeIntervalTransport *)arg3;
- (oneway void)canActivateChangedTo:(NSNumber *)arg1;
- (oneway void)activeChangedTo:(NSNumber *)arg1;
@end
