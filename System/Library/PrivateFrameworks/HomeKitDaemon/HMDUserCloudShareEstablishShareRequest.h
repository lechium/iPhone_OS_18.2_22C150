//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUser, NSData;

__attribute__((visibility("hidden")))
@interface HMDUserCloudShareEstablishShareRequest
{
    HMDUser *_fromUser;	// 40 = 0x28
    HMDUser *_toUser;	// 48 = 0x30
    NSData *_encodedShareURL;	// 56 = 0x38
    NSData *_shareToken;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000008c3080
@property(readonly, copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) NSData *shareToken; // @synthesize shareToken=_shareToken;
@property(readonly) NSData *encodedShareURL; // @synthesize encodedShareURL=_encodedShareURL;
@property(readonly) __weak HMDUser *toUser; // @synthesize toUser=_toUser;
@property(readonly) __weak HMDUser *fromUser; // @synthesize fromUser=_fromUser;
- (id)description;	// IMP=0x00000000008c2f4f
- (id)initWithHome:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 encodedShareURL:(id)arg4 shareToken:(id)arg5 containerID:(id)arg6 currentDate:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000008c2e1c

@end
