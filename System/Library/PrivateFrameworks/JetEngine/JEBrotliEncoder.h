//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface JEBrotliEncoder : NSObject
{
    unsigned int _quality;	// 8 = 0x8
    unsigned int _sizeHint;	// 12 = 0xc
    struct BrotliEncoderStateStruct *_encoder;	// 16 = 0x10
}

@property(readonly, nonatomic) struct BrotliEncoderStateStruct *encoder; // @synthesize encoder=_encoder;
@property(nonatomic) unsigned int sizeHint; // @synthesize sizeHint=_sizeHint;
@property(nonatomic) unsigned int quality; // @synthesize quality=_quality;
- (_Bool)compressStreamWithOperation:(long long)arg1 availableIn:(unsigned long long *)arg2 nextIn:(const char **)arg3 availableOut:(unsigned long long *)arg4 nextOut:(char **)arg5;	// IMP=0x0000000000040c9e
@property(readonly, nonatomic) _Bool isFinished;
- (void)dealloc;	// IMP=0x0000000000040bb6
- (id)init;	// IMP=0x0000000000040b4a

@end

