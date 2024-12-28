//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol MRRouteRecommenderDelegate, MRRouteRepresentable;

@protocol MRRouteRecommender <NSObject>
@property(nonatomic) long long mode;
@property(nonatomic) __weak id <MRRouteRecommenderDelegate> delegate;
- (void)addEvent:(id)arg1 forRouteCandidate:(id <MRRouteRepresentable>)arg2;
- (void)updateRouteCandidates:(NSArray *)arg1;
- (void)updateRouteCandidate:(id <MRRouteRepresentable>)arg1;
- (void)requestCurrentContextWithBundleID:(NSString *)arg1;
- (void)requestCurrentContext;
@end
