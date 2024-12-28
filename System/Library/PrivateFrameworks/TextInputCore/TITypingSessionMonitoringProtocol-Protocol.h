//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardInteractionProtocol-Protocol.h>

@class NSArray, NSDate, TITypingSession, TITypingSessionParams;

@protocol TITypingSessionMonitoringProtocol <TIKeyboardInteractionProtocol>
@property(readonly, nonatomic) TITypingSession *currentTypingSession;
- (void)tearDown;
- (void)endSessionWithInteractionObservers:(NSArray *)arg1 sessionParams:(TITypingSessionParams *)arg2 timestamp:(NSDate *)arg3;
- (NSArray *)resetInteractionObserversForNextSession;
@end
