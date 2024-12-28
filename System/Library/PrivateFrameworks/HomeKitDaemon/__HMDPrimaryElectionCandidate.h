//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHomeKitVersion, HMDResidentDevice, HMFSoftwareVersion, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface __HMDPrimaryElectionCandidate : NSObject
{
    _Bool _enabledAsResident;	// 8 = 0x8
    _Bool _pcsEnabled;	// 9 = 0x9
    HMDResidentDevice *_residentDevice;	// 16 = 0x10
    HMDHomeKitVersion *_homeKitVersion;	// 24 = 0x18
    NSUUID *_deviceIdentifier;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSUUID *_currentPrimaryIdentifier;	// 48 = 0x30
    unsigned long long _capabilities;	// 56 = 0x38
    unsigned long long _connectionType;	// 64 = 0x40
    HMFSoftwareVersion *_swVersion;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000e974ae
+ (_Bool)supportsPingRequest:(unsigned long long)arg1;	// IMP=0x0010000000e974a3
+ (unsigned long long)setSupportsPingRequest:(_Bool)arg1 capabilities:(unsigned long long)arg2;	// IMP=0x0010000000e97498
+ (id)fromMessagePayload:(id)arg1;	// IMP=0x0010000000e971e3
- (void).cxx_destruct;	// IMP=0x0000000000e96fed
@property(readonly, copy, nonatomic) HMFSoftwareVersion *swVersion; // @synthesize swVersion=_swVersion;
@property(readonly, nonatomic) _Bool pcsEnabled; // @synthesize pcsEnabled=_pcsEnabled;
@property(readonly, nonatomic) unsigned long long connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) _Bool enabledAsResident; // @synthesize enabledAsResident=_enabledAsResident;
@property(readonly, copy, nonatomic) NSUUID *currentPrimaryIdentifier; // @synthesize currentPrimaryIdentifier=_currentPrimaryIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, copy, nonatomic) HMDHomeKitVersion *homeKitVersion; // @synthesize homeKitVersion=_homeKitVersion;
@property(retain, nonatomic) HMDResidentDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
- (long long)compare:(id)arg1 currentPrimary:(id)arg2 outCriteria:(unsigned long long *)arg3;	// IMP=0x0000000000e96b0b
- (long long)comparePreferredPrimaryStatusWith:(id)arg1;	// IMP=0x0000000000e96805
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e966fb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e964ba
- (id)redactedDescription;	// IMP=0x0000000000e964a8
- (id)description;	// IMP=0x0000000000e9630c
- (id)toMessagePayload;	// IMP=0x0000000000e96278
- (_Bool)supportsPingRequest;	// IMP=0x0000000000e96243
- (_Bool)matchesPreferredPrimaryIdentifier:(id)arg1;	// IMP=0x0000000000e96054
- (id)initWithVersion:(id)arg1 deviceIdentifier:(id)arg2 name:(id)arg3 currentPrimaryIdentifier:(id)arg4 enabledAsResident:(_Bool)arg5 supportsPingRequest:(_Bool)arg6 connectionType:(unsigned long long)arg7 pcsEnabled:(_Bool)arg8 swVersion:(id)arg9;	// IMP=0x0000000000e95f01

@end
