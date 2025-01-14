//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaCloudAddItemToPlaylistOperation
{
    long long _playlistPersistentID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000113371
- (void)logCloudAddRequestDescription;	// IMP=0x00200000001132bc
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x0010000000112edd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000112e60
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000112de6
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 referralPlaylistGlobalID:(id)arg4 clientIdentity:(id)arg5;	// IMP=0x0010000000112d69
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 referralAlbumAdamID:(long long)arg4 clientIdentity:(id)arg5;	// IMP=0x0010000000112d38
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 clientIdentity:(id)arg4;	// IMP=0x0010000000112cf1
- (id)initWithAdamID:(long long)arg1 playlistPersistentID:(long long)arg2 clientIdentity:(id)arg3;	// IMP=0x0010000000112c78

@end

