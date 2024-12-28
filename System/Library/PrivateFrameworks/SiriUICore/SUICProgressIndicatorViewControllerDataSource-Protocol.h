//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUICore/NSProgressReporting-Protocol.h>

@class SUICProgressIndicatorViewController, SUICProgressStateMachine;

@protocol SUICProgressIndicatorViewControllerDataSource <NSProgressReporting>
- (SUICProgressStateMachine *)stateMachineForProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg1;

@optional
- (_Bool)shouldAnimateTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 forProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg3;
@end
