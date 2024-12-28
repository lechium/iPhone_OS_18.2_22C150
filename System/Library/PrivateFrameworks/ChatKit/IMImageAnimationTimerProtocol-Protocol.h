//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol IMAnimationTimerObserver, IMImageAnimationTimerProtocol;

@protocol IMImageAnimationTimerProtocol
+ (id <IMImageAnimationTimerProtocol>)sharedTimer;
@property(nonatomic) _Bool shouldStopWhenBackgrounded;
- (void)removeAnimationTimerObserver:(id <IMAnimationTimerObserver>)arg1;
- (void)addAnimationTimerObserver:(id <IMAnimationTimerObserver>)arg1;
@end
