//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol WBSFormAutoFillCorrectionsStore <NSObject>
- (void)removeAllLocalClassificationsWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)removeLocalClassificationsForDomain:(NSString *)arg1 recordedOnOrAfter:(NSDate *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)getClassificationForFieldWithFingerprint:(NSString *)arg1 onDomain:(NSString *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)setCrowdsourcedClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)setLocalClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(NSArray *)arg1 retrievalURLString:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(void (^)(NSString *))arg1;
@end

