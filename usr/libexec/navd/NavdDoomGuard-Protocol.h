//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MapsSuggestionsCondition-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSError;

@protocol NavdDoomGuard <NSObject, MapsSuggestionsCondition>
- (_Bool)evaluateError:(NSError *)arg1;
- (void)didRequestRoute;
- (_Bool)canRequestRoute;
- (NSDate *)nextAllowedRequestTime;
@end
