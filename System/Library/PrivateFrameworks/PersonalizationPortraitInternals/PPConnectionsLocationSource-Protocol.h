//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortraitInternals/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, PPConnectionsCriteria, PPQuickTypeExplanationSet;

@protocol PPConnectionsLocationSource <NSObject>
- (NSString *)identifier;
- (NSArray *)locationItemsWithCriteria:(PPConnectionsCriteria *)arg1 earliest:(NSDate *)arg2 latest:(NSDate *)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(PPQuickTypeExplanationSet *)arg6;
@end
