//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMDHH2AutoMigrationEligibilityResult : HMFObject
{
    _Bool _eligible;	// 8 = 0x8
    _Bool _hasOnlyEmptyHomes;	// 9 = 0x9
    unsigned long long _status;	// 16 = 0x10
    unsigned long long _iCloudAccountStatus;	// 24 = 0x18
    unsigned long long _unsupportedDevices;	// 32 = 0x20
    unsigned long long _numberOwnedNonEmptyHomes;	// 40 = 0x28
    unsigned long long _numberUnownedSharedHomes;	// 48 = 0x30
    unsigned long long _numberOwnedSharedHomes;	// 56 = 0x38
}

@property(readonly) unsigned long long numberOwnedSharedHomes; // @synthesize numberOwnedSharedHomes=_numberOwnedSharedHomes;
@property(readonly) unsigned long long numberUnownedSharedHomes; // @synthesize numberUnownedSharedHomes=_numberUnownedSharedHomes;
@property(readonly) unsigned long long numberOwnedNonEmptyHomes; // @synthesize numberOwnedNonEmptyHomes=_numberOwnedNonEmptyHomes;
@property(readonly) _Bool hasOnlyEmptyHomes; // @synthesize hasOnlyEmptyHomes=_hasOnlyEmptyHomes;
@property(readonly) unsigned long long unsupportedDevices; // @synthesize unsupportedDevices=_unsupportedDevices;
@property(readonly) unsigned long long iCloudAccountStatus; // @synthesize iCloudAccountStatus=_iCloudAccountStatus;
@property(readonly) unsigned long long status; // @synthesize status=_status;
@property(readonly, getter=isEligible) _Bool eligible; // @synthesize eligible=_eligible;
- (id)attributeDescriptions;	// IMP=0x000000000054a9fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000054a9f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054a810
- (id)initWithStatus:(unsigned long long)arg1 iCloudAccountStatus:(unsigned long long)arg2 unsupportedDevices:(unsigned long long)arg3 hasOnlyEmptyHomes:(_Bool)arg4 numberOwnedNonEmptyHomes:(unsigned long long)arg5 numberUnownedSharedHomes:(unsigned long long)arg6 numberOwnedSharedHomes:(unsigned long long)arg7;	// IMP=0x000000000054a75b

@end
