//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@class LACDTOLocationMonitor, LACDTOLocationState;

@protocol LACDTOLocationMonitorDelegate <NSObject>
- (void)locationMonitor:(LACDTOLocationMonitor *)arg1 didReceiveLocationState:(LACDTOLocationState *)arg2;
@end
