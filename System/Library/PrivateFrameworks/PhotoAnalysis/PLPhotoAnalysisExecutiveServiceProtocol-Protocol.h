//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PLPhotoAnalysisGenericServiceProtocol-Protocol.h>

@class NSString;

@protocol PLPhotoAnalysisExecutiveServiceProtocol <PLPhotoAnalysisGenericServiceProtocol>
- (void)requestActivityStatusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestAnalysisStatusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)performOnDemandTasksForScenario:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)performOnDemandTaskWithName:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

