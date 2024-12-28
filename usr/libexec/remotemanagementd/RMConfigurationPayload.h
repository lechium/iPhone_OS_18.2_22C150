//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSSet, NSString, RMConfigurationPayloadState, RMConfigurationPayloadUI, RMManagementSource;

@interface RMConfigurationPayload
{
}

+ (_Bool)isSignificantChange:(id)arg1;	// IMP=0x0040000000025d3b
- (id)reportDetails;	// IMP=0x0020000000025db8
- (void)failedLoadingWithError:(id)arg1;	// IMP=0x0010000000026934
- (_Bool)_updatePropertiesForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000265eb
- (_Bool)_loadAnyDeclaration:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002644d
- (_Bool)reloadReturningError:(id *)arg1;	// IMP=0x001000000002627d
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000025f8f

// Remaining properties
@property(retain, nonatomic) NSSet *assetReferences; // @dynamic assetReferences;
@property(retain, nonatomic) NSSet *configurationReferences; // @dynamic configurationReferences;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier;
@property(nonatomic) short loadState;
@property(retain, nonatomic) RMManagementSource *managementSource;
@property(readonly, copy, nonatomic) NSData *payload;
@property(retain, nonatomic) RMConfigurationPayloadState *state; // @dynamic state;
@property(readonly) Class superclass;
@property(retain, nonatomic) RMConfigurationPayloadUI *ui; // @dynamic ui;

@end
