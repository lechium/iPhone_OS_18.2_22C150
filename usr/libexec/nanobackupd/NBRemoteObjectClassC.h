//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NBRemoteObjectClassC
{
}

- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0040000000012763
- (void)sendDeleteBackupResponse:(id)arg1 withRequestIdentifier:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012569
- (void)sendDeleteBackupRequest:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000121b6
- (void)sendCreateBackupResponse:(id)arg1 withRequestIdentifier:(id)arg2 error:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011f67
- (void)sendCreateBackupRequestWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011bf5
- (void)sendRestoreResponse:(id)arg1 withRequestIdentifier:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000119fb
- (void)sendBackupPayload:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001148c
- (id)activelyPairingDevice;	// IMP=0x0010000000011349
- (void)sendRestoreRequest:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001100e
- (void)sendBackupListResponse:(id)arg1 error:(id)arg2 withRequestIdentifier:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010cd9
- (void)sendBackupListRequestWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001079d
- (id)protobufFromBackup:(id)arg1;	// IMP=0x001000000001022a
- (id)backupFromProtobuf:(id)arg1;	// IMP=0x001000000000fc59
- (id)class:(Class)arg1 fromBytes:(id)arg2;	// IMP=0x001000000000f9c3
- (id)bytesFromClass:(id)arg1;	// IMP=0x001000000000f79c
- (id)readWatchFaceFromFile:(id)arg1;	// IMP=0x001000000000f783
- (id)writeWatchFaceToFile:(id)arg1;	// IMP=0x001000000000f4ec
- (id)sha256FromData:(id)arg1;	// IMP=0x001000000000f42c
- (id)dataFromUUID:(id)arg1;	// IMP=0x001000000000f3ac
- (id)uuidFromData:(id)arg1;	// IMP=0x001000000000f32c
- (void)idsHandleDeleteBackupRequest:(id)arg1;	// IMP=0x001000000000f101
- (void)idsHandlePayloadRestoreRequest:(id)arg1 context:(id)arg2;	// IMP=0x001000000000ef9a
- (void)idsHandleRestoreRequest:(id)arg1;	// IMP=0x001000000000ed33
- (void)idsHandleBackupListRequest:(id)arg1;	// IMP=0x001000000000ebe0
- (void)registerProtobufHandlers;	// IMP=0x001000000000eb34
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;	// IMP=0x001000000000eaf8

@end
