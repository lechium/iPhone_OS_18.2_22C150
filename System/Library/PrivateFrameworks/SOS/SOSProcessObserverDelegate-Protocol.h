//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SOS/NSObject-Protocol.h>

@class NSString, SOSProcessObserver;

@protocol SOSProcessObserverDelegate <NSObject>
- (void)processObserver:(SOSProcessObserver *)arg1 bundleIdentifier:(NSString *)arg2 didUpdateApplicationRunning:(_Bool)arg3;
@end
