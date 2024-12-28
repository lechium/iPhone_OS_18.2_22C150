//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SOS/SOSClientProtocol-Protocol.h>

@class SOSButtonPressState, SOSStatus;

@protocol SOSInternalClientProtocol <SOSClientProtocol>
- (void)didUpdateSOSStatus:(SOSStatus *)arg1;
- (void)didDismissClientSOSBeforeSOSCall:(long long)arg1;
- (void)dismissClientSOSWithCompletion:(void (^)(_Bool))arg1;
- (void)updateClientCurrentSOSButtonPressState:(SOSButtonPressState *)arg1;
- (void)updateClientCurrentSOSInteractiveState:(long long)arg1;
- (void)updateClientCurrentSOSInitiationState:(long long)arg1;
@end
