//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNNavigationStateManager;

@protocol MNNavigationStateObserver <NSObject>

@optional
- (void)stateManager:(MNNavigationStateManager *)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManager:(MNNavigationStateManager *)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

