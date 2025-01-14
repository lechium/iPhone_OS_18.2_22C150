//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBViewControllerAnimatedTransitioning-Protocol.h>
#import <SpringBoardHome/SBViewControllerRestartableTransitioning-Protocol.h>

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerReversibleAnimatedTransitioning <SBViewControllerAnimatedTransitioning, SBViewControllerRestartableTransitioning>
- (void)cancelTransition:(id <SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
@end

