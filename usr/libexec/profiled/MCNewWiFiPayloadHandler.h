//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewWiFiPayloadHandler
{
}

+ (id)managedWiFiNetworkNames;	// IMP=0x00400000000658c5
+ (id)_originatorNameFromInstallationOptions:(id)arg1;	// IMP=0x0010000000065858
+ (id)_originatorIdentifierFromInstallationOptions:(id)arg1;	// IMP=0x00100000000657eb
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0040000000065774
- (id)profileMetadata;	// IMP=0x00100000000656e6
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000065415
- (id)userInputFields;	// IMP=0x00100000000653c5

@end

