//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    long long _discoverableTrinary;	// 8 = 0x8
}

@property(nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000003a55cf
- (id)generateRequestOperations;	// IMP=0x00000000003a5424
- (_Bool)requiresTokenRegistration;	// IMP=0x00000000003a541c
- (id)requestOperationClasses;	// IMP=0x00000000003a53b0
- (long long)databaseScope;	// IMP=0x00000000003a53a5
- (void)setDiscoverable:(_Bool)arg1;	// IMP=0x00000000003a537c
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000003a52ca
- (id)initWithOperation:(id)arg1;	// IMP=0x00000000003a5287

@end

