//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHAudioTap : NSObject
{
    _Bool _canEnableSpectralOutput;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    long long _recordingSource;	// 24 = 0x18
    long long _client;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001480d
@property(readonly, nonatomic) _Bool canEnableSpectralOutput; // @synthesize canEnableSpectralOutput=_canEnableSpectralOutput;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) long long client; // @synthesize client=_client;
@property(readonly, nonatomic) long long recordingSource; // @synthesize recordingSource=_recordingSource;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)initWithRecordingSource:(long long)arg1 client:(long long)arg2 bundleIdentifier:(id)arg3 canEnableSpectralOutput:(_Bool)arg4;	// IMP=0x0010000000014742
- (id)initWithRecordingSource:(long long)arg1 client:(long long)arg2 bundleIdentifier:(id)arg3;	// IMP=0x001000000001472d

@end

