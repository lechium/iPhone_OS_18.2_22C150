//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMSyncErrorAnalyzer.h>

@interface IMSyncErrorAnalyzer (SyncErrorAnalyzing)
- (id)errorsFromPartialFailure:(id)arg1;	// IMP=0x00200000000fa7e8
- (_Bool)isCKErrorPartialFailure:(id)arg1;	// IMP=0x00200000000fa7d6
- (_Bool)wasRecordSizeFailure:(id)arg1;	// IMP=0x00200000000fa7c4
- (_Bool)wasBatchSizeFailure:(id)arg1;	// IMP=0x00200000000fa7b2
- (_Bool)wasUnknownItem:(id)arg1;	// IMP=0x00200000000fa7a0
- (_Bool)wasAssetNotAvailable:(id)arg1;	// IMP=0x00200000000fa78e
- (_Bool)wasRecordAlreadyChanged:(id)arg1;	// IMP=0x00200000000fa77c
- (_Bool)wasDuplicateRecordFound:(id)arg1;	// IMP=0x00200000000fa76a
- (_Bool)wasRecordArchived:(id)arg1;	// IMP=0x00200000000fa758
- (_Bool)wasBatchFailure:(id)arg1;	// IMP=0x00200000000fa746
- (_Bool)wasMissingKeys:(id)arg1;	// IMP=0x00200000000fa734
- (_Bool)wasTokenExpired:(id)arg1;	// IMP=0x00200000000fa722
- (_Bool)wasZoneNotFound:(id)arg1;	// IMP=0x00200000000fa710
- (_Bool)wasZoneNotCreated:(id)arg1;	// IMP=0x00200000000fa6fe
- (_Bool)wasZoneDeletedByUserInError:(id)arg1;	// IMP=0x00200000000fa6ec
- (_Bool)wasQuotaExceededInError:(id)arg1;	// IMP=0x00200000000fa6da
- (_Bool)wasOutOfSyncConditionsInError:(id)arg1;	// IMP=0x00200000000fa6c8
@end

