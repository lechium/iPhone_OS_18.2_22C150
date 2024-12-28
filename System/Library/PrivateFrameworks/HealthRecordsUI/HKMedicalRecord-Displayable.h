//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKMedicalRecord.h>

@class NSArray, NSDate, NSString;

@interface HKMedicalRecord (Displayable)
- (id)meaningfulDateDisplayStringWithPreferredForm:(long long)arg1 showTime:(_Bool)arg2;	// IMP=0x0020000000016696
- (id)sortDateTitle;	// IMP=0x00200000000165fd
@property(readonly, nonatomic) NSString *titleDisplayStringForDetailViewController;
@property(readonly, nonatomic) _Bool canDefineConceptRoom;
@property(readonly, nonatomic) _Bool isDateLess;
@property(readonly, nonatomic) _Bool isDisplayable;
@property(readonly, nonatomic) NSString *meaningfulDateString;
@property(readonly, nonatomic) NSDate *meaningfulDate;
@property(readonly, nonatomic) NSString *meaningfulDateTitle;
- (id)codings;	// IMP=0x0020000000016387
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(id)arg1 style:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000016377
- (void)fetchChartValueWithRangeWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000016367
@property(readonly, nonatomic) NSArray *conceptNameItems;
- (void)fetchAttachmentItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000015f6f
- (void)fetchCorrespondingSignedClinicalDataRecordWithHealthRecordsStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000015e8c
- (void)fetchDisplayNameItemWithHealthRecordsStore:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000015b5b
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000015aab
- (void)fetchStructuredFieldItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00200000000159e8
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x002000000001593b
@property(readonly, nonatomic) _Bool isRemovedFromRemote;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(nonatomic, readonly) NSString *displayNameForGroupByConcept;
@property(nonatomic, readonly) NSString *preferredDisplayName;
- (id)chartableCodedQuantitySet;	// IMP=0x0020000000314850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
