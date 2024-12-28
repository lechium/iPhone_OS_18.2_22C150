//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICCloudItemIDList, NSDictionary, NSString;

@interface SagaSDKUpdatePlaylistOperation
{
    NSString *_requestingBundleID;	// 40 = 0x28
    long long _playlistPersistentID;	// 48 = 0x30
    NSDictionary *_properties;	// 56 = 0x38
    ICCloudItemIDList *_trackList;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000c281f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000c27a2
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000c2707
- (void)main;	// IMP=0x00100000000c1c06
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistPersistentID:(long long)arg3 properties:(id)arg4 trackList:(id)arg5 requestingBundleID:(id)arg6;	// IMP=0x00100000000c1af2

@end
