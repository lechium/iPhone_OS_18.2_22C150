//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSURL;

@interface APPCVideoRepresentation
{
    MISSING_TYPE *fileSize;	// 1818784869 = 0x6c687465
    MISSING_TYPE *skipThreshold;	// 0 = 0x0
    MISSING_TYPE *skipEnabled;	// 2147484680 = 0x80000408
    MISSING_TYPE *unbranded;	// 6 = 0x6
    MISSING_TYPE *bitrate;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *signalStrength;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *connectionType;	// 0 = 0x0
    MISSING_TYPE *videoSize;	// 723064 = 0xb0878
    MISSING_TYPE *$__lazy_storage_$_videoURL;	// 0 = 0x0
    MISSING_TYPE *duration;	// 6956 = 0x1b2c
    MISSING_TYPE *originalVideoURL;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000002ad80
- (id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 videoURL:(id)arg4 duration:(double)arg5 fileSize:(long long)arg6 skipThreshold:(double)arg7 skipEnabled:(_Bool)arg8 unbranded:(_Bool)arg9 bitrate:(double)arg10 connectionType:(long long)arg11 signalStrength:(unsigned long long)arg12 videoSize:(CDStruct_c3b9c2ee)arg13 tapAction:(id)arg14 adPolicyData:(id)arg15;	// IMP=0x0000000000029fd0
@property(nonatomic, copy) NSURL *videoURL;
@property(nonatomic, readonly) CDStruct_c3b9c2ee videoSize; // @synthesize videoSize;
@property(nonatomic, readonly) long long connectionType; // @synthesize connectionType;
@property(nonatomic, readonly) unsigned long long signalStrength; // @synthesize signalStrength;
@property(nonatomic, readonly) double bitrate; // @synthesize bitrate;
@property(nonatomic, readonly) _Bool unbranded; // @synthesize unbranded;
@property(nonatomic, readonly) _Bool skipEnabled; // @synthesize skipEnabled;
@property(nonatomic, readonly) double skipThreshold; // @synthesize skipThreshold;
@property(nonatomic, readonly) long long fileSize; // @synthesize fileSize;

@end
