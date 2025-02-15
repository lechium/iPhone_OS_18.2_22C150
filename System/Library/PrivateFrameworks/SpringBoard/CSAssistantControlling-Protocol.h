//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol CSAssistantControllerObserving;

@protocol CSAssistantControlling <NSObject>
@property(readonly, nonatomic, getter=isSystemAssistantExperienceHomeAffordanceDoubleTapGestureEnabled) _Bool systemAssistantExperienceHomeAffordanceDoubleTapGestureEnabled;
@property(readonly, nonatomic, getter=isSystemAssistantExperienceEnabled) _Bool systemAssistantExperienceEnabled;
@property(readonly, nonatomic, getter=isSystemAssistantExperienceAvailable) _Bool systemAssistantExperienceAvailable;
- (void)removeAssistantControllerObserver:(id <CSAssistantControllerObserving>)arg1;
- (void)addAssistantControllerObserver:(id <CSAssistantControllerObserving>)arg1;
@end

