//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBNestingViewController;
@protocol SBViewControllerTransitionCoordinator;

@protocol SBNestingViewControllerTransitionObserver <NSObject>

@optional
- (void)nestingViewController:(SBNestingViewController *)arg1 willPerformOperation:(long long)arg2 onViewController:(SBNestingViewController *)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
@end
