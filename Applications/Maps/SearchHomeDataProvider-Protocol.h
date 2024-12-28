//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SearchHomeDataProvider <NSObject>
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSArray *objects;
- (NSString *)headerAccessibilityIdentifier;
- (id)initWithObjects:(NSArray *)arg1 type:(long long)arg2 identifier:(NSString *)arg3 title:(NSString *)arg4;

@optional
@property(nonatomic) _Bool wantsOneColumnLayout;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, nonatomic) NSArray *viewModels;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) NSString *actionTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

- (NSArray *)objectsForAnalytics;
@end
