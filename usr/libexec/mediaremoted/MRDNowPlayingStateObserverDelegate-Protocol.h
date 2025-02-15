//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRDNowPlayingObserverState, MRDNowPlayingStateObserver, MRPlayerPath;

@protocol MRDNowPlayingStateObserverDelegate <NSObject>

@optional
- (void)stateObserver:(MRDNowPlayingStateObserver *)arg1 didReceiveCoalescedNowPlayingStateChange:(MRDNowPlayingObserverState *)arg2 playerPath:(MRPlayerPath *)arg3;
- (void)stateObserver:(MRDNowPlayingStateObserver *)arg1 didReceiveVolumeControlCapabilitiesChange:(unsigned int)arg2 playerPath:(MRPlayerPath *)arg3;
- (void)stateObserver:(MRDNowPlayingStateObserver *)arg1 didReceiveNowPlayingPlayerChange:(MRPlayerPath *)arg2;
- (void)stateObserver:(MRDNowPlayingStateObserver *)arg1 didReceiveNowPlayingClientChange:(MRPlayerPath *)arg2;
- (void)stateObserver:(MRDNowPlayingStateObserver *)arg1 didReceivePlayerDidUnregister:(MRPlayerPath *)arg2;
- (void)stateObserver:(MRDNowPlayingStateObserver *)arg1 didReceiveClientDidUnregister:(MRPlayerPath *)arg2;
@end

