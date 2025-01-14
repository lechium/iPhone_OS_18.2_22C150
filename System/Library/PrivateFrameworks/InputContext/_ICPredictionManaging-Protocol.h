//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InputContext/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol _ICPredictionManaging <NSObject>
- (void)propogateMetrics:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)providePredictionFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)hibernate;
- (void)warmUp;
- (NSArray *)searchForMeCardEmailAddresses;
- (NSArray *)searchForMeCardRegions;
- (void)reset;
- (void)predictedItemSelected:(NSString *)arg1;
- (NSArray *)lastCachedResultWithInitialCharacters:(NSString *)arg1;
- (NSArray *)searchWithTriggers:(NSArray *)arg1 application:(NSString *)arg2 recipient:(NSString *)arg3 localeIdentifier:(NSString *)arg4 isResponseDenyListed:(_Bool)arg5 shouldDisableAutoCaps:(_Bool)arg6 timeoutInMilliseconds:(int)arg7 resultLimit:(int)arg8 error:(id *)arg9;
- (NSArray *)searchWithTriggers:(NSArray *)arg1 application:(NSString *)arg2 recipient:(NSString *)arg3 localeIdentifier:(NSString *)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;
@end

