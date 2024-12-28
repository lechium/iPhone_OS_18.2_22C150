//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDeviceCapabilityCheckOptions, NSArray, NSMutableDictionary;

@interface CKDCheckSupportedDeviceCapabilitiesURLRequest : CKDURLRequest
{
    CDUnknownBlockType _supportedDeviceCapabilitiesCheckedForZoneBlock;	// 8 = 0x8
    CDUnknownBlockType _errorFromServerBlock;	// 16 = 0x10
    CDUnknownBlockType _errorFromClientValidationBlock;	// 24 = 0x18
    NSArray *_zoneIDs;	// 32 = 0x20
    NSArray *_desiredCapabilitySets;	// 40 = 0x28
    CKDeviceCapabilityCheckOptions *_options;	// 48 = 0x30
    NSMutableDictionary *_zoneIDByRequestID;	// 56 = 0x38
    NSMutableDictionary *_capabililitySetsByRequestID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000019473c
@property(retain, nonatomic) NSMutableDictionary *capabililitySetsByRequestID; // @synthesize capabililitySetsByRequestID=_capabililitySetsByRequestID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDByRequestID; // @synthesize zoneIDByRequestID=_zoneIDByRequestID;
@property(retain, nonatomic) CKDeviceCapabilityCheckOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *desiredCapabilitySets; // @synthesize desiredCapabilitySets=_desiredCapabilitySets;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType errorFromClientValidationBlock; // @synthesize errorFromClientValidationBlock=_errorFromClientValidationBlock;
@property(copy, nonatomic) CDUnknownBlockType errorFromServerBlock; // @synthesize errorFromServerBlock=_errorFromServerBlock;
@property(copy, nonatomic) CDUnknownBlockType supportedDeviceCapabilitiesCheckedForZoneBlock; // @synthesize supportedDeviceCapabilitiesCheckedForZoneBlock=_supportedDeviceCapabilitiesCheckedForZoneBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000001942fa
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001904a7
- (void)reportClientValidationError:(id)arg1 forZoneID:(id)arg2 capabilitySet:(id)arg3;	// IMP=0x00000000001903e9
- (id)generateRequestOperations;	// IMP=0x000000000018fa64
- (id)requestOperationClasses;	// IMP=0x000000000018f9f8
- (id)initWithOperation:(id)arg1 zoneIDs:(id)arg2 desiredCapabilitySets:(id)arg3 options:(id)arg4;	// IMP=0x000000000018f8da

@end
