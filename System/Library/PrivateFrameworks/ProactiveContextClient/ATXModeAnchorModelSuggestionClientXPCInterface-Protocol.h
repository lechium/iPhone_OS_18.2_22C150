//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol ATXModeAnchorModelSuggestionClientXPCInterface
- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(NSString *)arg1 modeType:(int)arg2 origin:(int)arg3 originBundleId:(NSString *)arg4 originAnchorType:(NSString *)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(NSArray *)arg8 completionHandler:(void (^)(NSNumber *, _Bool, _Bool, _Bool))arg9;
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(NSString *)arg1 modeType:(int)arg2 origin:(int)arg3 originBundleId:(NSString *)arg4 originAnchorType:(NSString *)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(NSArray *)arg8 completionHandler:(void (^)(NSNumber *))arg9;
@end
