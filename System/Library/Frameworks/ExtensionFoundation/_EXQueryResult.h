//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, _EXExtensionAvailablility;

__attribute__((visibility("hidden")))
@interface _EXQueryResult : NSObject
{
    MISSING_TYPE *identities;	// 8 = 0x8
    MISSING_TYPE *availablility;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006dc30
- (void).cxx_destruct;	// IMP=0x000000000006e000
@property(nonatomic, readonly) _EXExtensionAvailablility *availablility; // @synthesize availablility;
@property(nonatomic, readonly) NSSet *identities;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006def0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006dd80
- (id)initWithAvailablility:(id)arg1;	// IMP=0x000000000006dd20
- (id)initWithIdentities:(id)arg1;	// IMP=0x000000000006dca0
- (id)init;	// IMP=0x000000000006dc40

@end
