//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord;

__attribute__((visibility("hidden")))
@interface _WBSCKRecordSystemEncoder : NSObject
{
    CKRecord *_record;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001aa1f
- (void).cxx_destruct;	// IMP=0x000000000001aae6
@property(readonly, nonatomic) __weak CKRecord *record; // @synthesize record=_record;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001aa76
- (Class)classForCoder;	// IMP=0x000000000001aa3b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001aa27
- (id)initWithRecord:(id)arg1;	// IMP=0x000000000001a9a4

@end
