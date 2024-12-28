//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCSVisualCodeDetector : NSObject
{
    _Bool _isAppC3DTracking;	// 8 = 0x8
    CDUnknownBlockType _appcodeExtractCompletionHandler;	// 16 = 0x10
    unsigned int _imageOrientation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001dac1
@property(nonatomic) unsigned int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (void)endSession;	// IMP=0x000000000001daa9
- (void)startSession;	// IMP=0x000000000001daa3
- (struct CGRect)_regionOfInterest;	// IMP=0x000000000001da85
- (id)_estimateQRCodeAvailabilityInFrame:(struct __CVBuffer *)arg1;	// IMP=0x000000000001d740
- (void)resetCache;	// IMP=0x000000000001d736
- (void)detectCodeFromBuffer:(struct opaqueCMSampleBuffer *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d52c
- (id)init;	// IMP=0x000000000001d4ca

@end
