//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CARDNDStateObserver;
@protocol CARVehicleState;

@protocol CARDNDStateDelegate <NSObject>
- (void)stateMachine:(CARDNDStateObserver *)arg1 receivedFMDMode:(_Bool)arg2;
- (void)stateMachine:(CARDNDStateObserver *)arg1 receivedAirplaneMode:(_Bool)arg2;
- (void)stateMachine:(CARDNDStateObserver *)arg1 receivedVehicleState:(id <CARVehicleState>)arg2;
@end
