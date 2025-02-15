//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID;

__attribute__((visibility("hidden")))
@interface BRCShareDeleteInfo : NSObject
{
    CKRecordID *_shareID;	// 8 = 0x8
    CKRecord *_emptyRecord;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000294eee
@property(readonly, nonatomic) CKRecord *emptyRecord; // @synthesize emptyRecord=_emptyRecord;
@property(readonly, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000294e4c
- (unsigned long long)hash;	// IMP=0x0000000000294e36
- (id)initWithShareID:(id)arg1 emptyRecord:(id)arg2;	// IMP=0x0000000000294d9d

@end

