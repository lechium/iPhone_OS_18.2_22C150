//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol EMFAutocompleteCandidateProvider
- (_Bool)isValidToken:(NSString *)arg1;
- (NSString *)firstCandidateMatchingPrefix:(NSString *)arg1;
- (void)enumerateCandidatesMatchingPrefix:(NSString *)arg1 withEnumerationType:(long long)arg2 maxCandidates:(unsigned long long)arg3 usingBlock:(void (^)(NSString *, long long, _Bool *))arg4;
@end
