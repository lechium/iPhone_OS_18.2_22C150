//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class TITypingSession, TITypingSessionAligned;

@protocol TITypingSessionAggregatedEventObserver <NSObject>
- (void)sessionDidEnd:(TITypingSession *)arg1 aligned:(TITypingSessionAligned *)arg2;

@optional
- (void)tearDown;
@end

