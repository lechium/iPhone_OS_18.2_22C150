//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC27HealthMenstrualCyclesDaemon26HDMCExperienceModelManager : NSObject
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *notificationProvider;	// 16 = 0x10
    MISSING_TYPE *queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007c9b0
- (id)init;	// IMP=0x000000000007cca0
- (void)didReceiveExperienceModelUpdateNotification;	// IMP=0x000000000007cc20
- (void)dealloc;	// IMP=0x000000000007c950
- (id)initWithNotificationProvider:(id)arg1;	// IMP=0x000000000007c8d0
- (void)removeWithObserver:(id)arg1;	// IMP=0x000000000007cd80
- (void)registerWithObserver:(id)arg1;	// IMP=0x000000000007cd00

@end

