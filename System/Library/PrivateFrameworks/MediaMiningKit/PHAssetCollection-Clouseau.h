//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetCollection.h>

@class NSDate, NSDateComponents;

@interface PHAssetCollection (Clouseau)
- (id)_fetchFirstAssetSortedByCreationDateAscending:(_Bool)arg1;	// IMP=0x003000000007b446
- (id)_legacyLocalEndDate;	// IMP=0x003000000007b3d5
- (id)_legacyLocalStartDate;	// IMP=0x003000000007b361
- (id)_legacyUniversalEndDate;	// IMP=0x003000000007b299
- (id)_legacyUniversalStartDate;	// IMP=0x003000000007b1ce
- (id)_legacyLocalEndDateComponents;	// IMP=0x003000000007b15d
- (id)_legacyLocalStartDateComponents;	// IMP=0x003000000007b0e9
@property(readonly, nonatomic) NSDate *cls_localEndDate;
@property(readonly, nonatomic) NSDate *cls_localStartDate;
@property(readonly, nonatomic) NSDate *cls_universalEndDate;
@property(readonly, nonatomic) NSDate *cls_universalStartDate;
@property(readonly, nonatomic) NSDateComponents *cls_localEndDateComponents;
@property(readonly, nonatomic) NSDateComponents *cls_localStartDateComponents;
@end

