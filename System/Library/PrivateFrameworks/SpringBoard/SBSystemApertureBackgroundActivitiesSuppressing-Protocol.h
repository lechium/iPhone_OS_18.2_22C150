//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, NSString, SBApplication;
@protocol BSInvalidatable;

@protocol SBSystemApertureBackgroundActivitiesSuppressing <NSObject>
- (id <BSInvalidatable>)acquireSuppressionAssertionForBackgroundActivities:(NSSet *)arg1 reason:(NSString *)arg2;
- (id <BSInvalidatable>)acquireActiveElementAssertionForApplication:(SBApplication *)arg1 reason:(NSString *)arg2;
@end

