//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BKSHIDEventDeferringEnvironment, UIWindow;
@protocol _UIEventDeferringBehavior, _UIEventDeferringRuleOwning;

@protocol _UIEventDeferringSystemShellBehaviorDelegate <NSObject>

@optional
- (long long)eventDeferringManagerSystemShellBehavior:(id <_UIEventDeferringBehavior>)arg1 isRemoteRuleOwningElement:(id <_UIEventDeferringRuleOwning>)arg2 andContainingWindow:(UIWindow *)arg3 visibleComparedToLocalTargetWindow:(UIWindow *)arg4;
- (long long)eventDeferringManagerSystemShellBehavior:(id <_UIEventDeferringBehavior>)arg1 compareRemoteRuleOwningElement:(id <_UIEventDeferringRuleOwning>)arg2 toElement:(id <_UIEventDeferringRuleOwning>)arg3 inEnvironment:(BKSHIDEventDeferringEnvironment *)arg4;
- (_Bool)eventDeferringManagerSystemShellBehavior:(id <_UIEventDeferringBehavior>)arg1 shouldSuppressRemoteRuleForOwningElement:(id <_UIEventDeferringRuleOwning>)arg2 inEnvironment:(BKSHIDEventDeferringEnvironment *)arg3;
- (_Bool)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;
@end

