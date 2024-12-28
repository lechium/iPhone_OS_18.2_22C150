//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCAssetDetail
{
}

+ (id)propertyIDKey;	// IMP=0x002000000003f761
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic) _Bool isAudiobook;
- (id)zoneName;	// IMP=0x001000000003f76e
- (id)identifier;	// IMP=0x001000000003f74f
- (id)recordType;	// IMP=0x001000000003f742
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x001000000003dded
- (_Bool)isEqualExceptForDate:(id)arg1 ignoringEmptySalt:(_Bool)arg2;	// IMP=0x001000000003d3c5
- (_Bool)setDifferentBookmarkTime:(double)arg1;	// IMP=0x001000000003d362
- (void)_configureFromAssetDetail:(id)arg1 withMergers:(id)arg2;	// IMP=0x001000000003c883
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x001000000003c7de
- (id)mutableCopy;	// IMP=0x001000000003c7b0

// Remaining properties
@property(copy, nonatomic) NSString *assetID; // @dynamic assetID;
@property(nonatomic) double bookmarkTime; // @dynamic bookmarkTime;
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(copy, nonatomic) NSDate *dateFinished; // @dynamic dateFinished;
@property(copy, nonatomic) NSDate *datePlaybackTimeUpdated; // @dynamic datePlaybackTimeUpdated;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly, nonatomic) short finishedDateKind; // @dynamic finishedDateKind;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinished; // @dynamic isFinished;
@property(copy, nonatomic) NSDate *lastOpenDate; // @dynamic lastOpenDate;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) _Bool notFinished; // @dynamic notFinished;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(nonatomic) int readingPositionAbsolutePhysicalLocation; // @dynamic readingPositionAbsolutePhysicalLocation;
@property(copy, nonatomic) NSString *readingPositionAnnotationVersion; // @dynamic readingPositionAnnotationVersion;
@property(copy, nonatomic) NSString *readingPositionAssetVersion; // @dynamic readingPositionAssetVersion;
@property(copy, nonatomic) NSString *readingPositionCFIString; // @dynamic readingPositionCFIString;
@property(nonatomic) int readingPositionLocationRangeEnd; // @dynamic readingPositionLocationRangeEnd;
@property(nonatomic) int readingPositionLocationRangeStart; // @dynamic readingPositionLocationRangeStart;
@property(copy, nonatomic) NSDate *readingPositionLocationUpdateDate; // @dynamic readingPositionLocationUpdateDate;
@property(copy, nonatomic) NSString *readingPositionStorageUUID; // @dynamic readingPositionStorageUUID;
@property(copy, nonatomic) NSData *readingPositionUserData; // @dynamic readingPositionUserData;
@property(nonatomic) float readingProgress; // @dynamic readingProgress;
@property(nonatomic) float readingProgressHighWaterMark; // @dynamic readingProgressHighWaterMark;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;
@property(nonatomic) short taste; // @dynamic taste;
@property(nonatomic) short tasteSyncedToStore; // @dynamic tasteSyncedToStore;

@end
