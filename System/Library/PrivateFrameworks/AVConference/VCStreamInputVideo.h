//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCVideoCapture;

__attribute__((visibility("hidden")))
@interface VCStreamInputVideo
{
    VCVideoCapture *_videoCapture;	// 104 = 0x68
}

- (unsigned int)removeSink:(id)arg1;	// IMP=0x00000000001a668b
- (unsigned int)addSink:(id)arg1;	// IMP=0x00000000001a6589
- (void)invalidate;	// IMP=0x00000000001a6537
- (void)dealloc;	// IMP=0x00000000001a64d2
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;	// IMP=0x00000000001a6217

@end

