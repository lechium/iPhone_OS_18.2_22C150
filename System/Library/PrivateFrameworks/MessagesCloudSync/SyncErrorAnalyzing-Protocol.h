//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError;

@protocol SyncErrorAnalyzing
- (NSArray *)errorsFromPartialFailure:(NSError *)arg1;
- (_Bool)isCKErrorPartialFailure:(NSError *)arg1;
- (_Bool)wasRecordSizeFailure:(NSError *)arg1;
- (_Bool)wasBatchSizeFailure:(NSError *)arg1;
- (_Bool)wasUnknownItem:(NSError *)arg1;
- (_Bool)wasAssetNotAvailable:(NSError *)arg1;
- (_Bool)wasRecordAlreadyChanged:(NSError *)arg1;
- (_Bool)wasDuplicateRecordFound:(NSError *)arg1;
- (_Bool)wasRecordArchived:(NSError *)arg1;
- (_Bool)wasBatchFailure:(NSError *)arg1;
- (_Bool)wasMissingKeys:(NSError *)arg1;
- (_Bool)wasTokenExpired:(NSError *)arg1;
- (long long)responseForError:(NSError *)arg1 attempt:(long long)arg2 retryInterval:(id *)arg3;
- (_Bool)wasQuotaExceededInError:(NSError *)arg1;
- (_Bool)wasOutOfSyncConditionsInError:(NSError *)arg1;
- (_Bool)wasZoneNotFound:(NSError *)arg1;
- (_Bool)wasZoneDeletedByUserInError:(NSError *)arg1;
- (_Bool)wasZoneNotCreated:(NSError *)arg1;
@end
