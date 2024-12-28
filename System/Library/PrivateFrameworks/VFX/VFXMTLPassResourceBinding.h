//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VFXMTLPassResourceBinding
{
    struct {
        struct __CFXFXPassInput *_field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_inputs;	// 48 = 0x30
    struct __CFXFXPassInput *_samplerInput;	// 56 = 0x38
    long long inputsCount;	// 64 = 0x40
    long long bufferSize;	// 72 = 0x48
}

@property(nonatomic) long long bufferSize; // @synthesize bufferSize;
@property(nonatomic) long long inputsCount; // @synthesize inputsCount;
- (void)dealloc;	// IMP=0x000000000021b396
- (id)init;	// IMP=0x000000000021b367

@end
