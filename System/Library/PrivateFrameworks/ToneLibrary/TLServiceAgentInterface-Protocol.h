//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ToneLibrary/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol TLServiceAgentInterface <NSObject>
- (void)removeAllUserGeneratedVibrationPatternsWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)setUserGeneratedVibrationPatterns:(NSDictionary *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)retrieveUserGeneratedVibrationPatternsWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setCurrentToneIdentifier:(NSString *)arg1 keyedByTopic:(NSString *)arg2 forPreferenceKey:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)retrieveCurrentTonePreferencesWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
@end
