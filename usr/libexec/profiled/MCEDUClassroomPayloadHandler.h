//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCEDUClassroomPayloadHandler
{
}

- (void)unsetAside;	// IMP=0x0040000000022354
- (void)setAside;	// IMP=0x0010000000022342
- (_Bool)isInstalled;	// IMP=0x001000000002230d
- (void)remove;	// IMP=0x00100000000222a1
- (void)_remove;	// IMP=0x001000000002228b
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000022276
- (_Bool)_installWithError:(id *)arg1;	// IMP=0x0010000000021a24
- (id)_persistentIDForPayloadUUID:(id)arg1 requireIdentity:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000002175e
- (_Bool)setConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000021533
- (id)configurationWithError:(id *)arg1;	// IMP=0x0010000000021247

@end
