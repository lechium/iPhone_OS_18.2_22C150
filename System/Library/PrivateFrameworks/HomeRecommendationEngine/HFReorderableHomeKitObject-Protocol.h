//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeRecommendationEngine/HFHomeKitObject-Protocol.h>

@class NAFuture, NSDate, NSString;

@protocol HFReorderableHomeKitObject <HFHomeKitObject>
@property(readonly, copy, nonatomic) NSString *hf_displayName;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
- (NAFuture *)hf_updateDateAdded:(NSDate *)arg1;
@end

