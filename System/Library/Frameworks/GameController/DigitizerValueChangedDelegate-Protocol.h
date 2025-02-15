//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class GCControllerDirectionPad;

@protocol DigitizerValueChangedDelegate <NSObject>
@property(readonly) GCControllerDirectionPad *dpad;
- (void)digitizerTouchUp:(GCControllerDirectionPad *)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(_Bool)arg3;
- (void)digitizerTouchEvent:(GCControllerDirectionPad *)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;
@end

