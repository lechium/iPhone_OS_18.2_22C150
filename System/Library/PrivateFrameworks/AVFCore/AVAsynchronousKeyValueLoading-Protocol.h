//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol AVAsynchronousKeyValueLoading
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg1 completionHandler:(void (^)(void))arg2;
- (long long)statusOfValueForKey:(NSString *)arg1 error:(id *)arg2;
@end
