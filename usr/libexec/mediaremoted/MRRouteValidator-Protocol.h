//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MRRouteValidator <NSObject>
- (void)bestRecommendationIn:(NSArray *)arg1 primaryBundleIdentifier:(NSString *)arg2 eligibleToShowRecommendationsOutsideApp:(_Bool)arg3 completion:(void (^)(id <MRInteractiveRouteRecommendation>, NSArray *, MRAVEndpoint *))arg4;
@end

