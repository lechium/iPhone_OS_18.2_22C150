//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPNamedEntityClientProtocol <PPFeedbackAccepting>
- (void)namedEntityRecordBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
- (void)namedEntityBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
@end
