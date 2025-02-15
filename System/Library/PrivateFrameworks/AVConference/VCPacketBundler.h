//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPacketBundler : NSObject
{
    char *_buffer;	// 8 = 0x8
    unsigned int _bufferSize;	// 16 = 0x10
    unsigned int _maxPacketSize;	// 20 = 0x14
    struct _opaque_pthread_mutex_t _mutex;	// 24 = 0x18
    unsigned int _packetsPerBundle;	// 88 = 0x58
    int _payload;	// 92 = 0x5c
    unsigned int _timestamp;	// 96 = 0x60
    unsigned int _encodedBufferSize;	// 100 = 0x64
    unsigned int _accessUnitDataSectionSize;	// 104 = 0x68
    unsigned int _bundledPackets;	// 108 = 0x6c
    _Bool _currentBundleVoiceActivity;	// 112 = 0x70
    _Bool _lastBundleVoiceActivity;	// 113 = 0x71
    struct tagAccessUnitHeaderInfo _accessUnitHeaderInfo;	// 114 = 0x72
    int _bundlingScheme;	// 124 = 0x7c
    _Bool _allowLargePackets;	// 128 = 0x80
    _Bool _isFull;	// 129 = 0x81
    int _operatingMode;	// 132 = 0x84
    unsigned char _priority;	// 136 = 0x88
    struct opaqueVCPacketBundlerCdrxBundleInfo *_cdrxBundleInfoRef;	// 144 = 0x90
    _Bool _shouldSendPacket;	// 152 = 0x98
    int _numBufferedSamples;	// 156 = 0x9c
}

@property(readonly, nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(nonatomic) int bundlingScheme; // @synthesize bundlingScheme=_bundlingScheme;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) unsigned int bundledPackets; // @synthesize bundledPackets=_bundledPackets;
@property(readonly, nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) _Bool allowLargePackets; // @synthesize allowLargePackets=_allowLargePackets;
- (void)unlock;	// IMP=0x0000000000390c70
- (void)lock;	// IMP=0x0000000000390c62
- (void)initLock;	// IMP=0x0000000000390bed
- (void)resetBuffer;	// IMP=0x00000000003906ae
- (_Bool)bundleAudioLegacy:(void *)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;	// IMP=0x00000000003902fb
- (_Bool)_copyInputBytes:(void *)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;	// IMP=0x00000000003901a0
- (_Bool)bundleAudioRFC3640:(void *)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;	// IMP=0x000000000038f8b3
- (char *)accessUnitDataSectionHead;	// IMP=0x000000000038f890
- (unsigned int)accessUnitHeaderSectionSizeMaximum;	// IMP=0x000000000038f880
- (unsigned int)accessUnitHeaderSectionSize;	// IMP=0x000000000038f86d
- (unsigned int)encodedBufferSizeForRFC3640;	// IMP=0x000000000038f84d
- (char *)encodedBufferForRFC3640;	// IMP=0x000000000038f7c4
@property(readonly, nonatomic) _Bool isTalkSpurtStart;
@property(readonly, nonatomic) unsigned int encodedBufferSize;
@property(readonly, nonatomic) char *encodedBuffer;
@property(readonly, nonatomic) unsigned int packetsPerBundle;
- (_Bool)setPacketsPerBundle:(unsigned int)arg1;	// IMP=0x000000000038f749
@property(nonatomic) unsigned int maxPacketSize;
- (_Bool)reallocateBufferWithMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;	// IMP=0x000000000038f68a
- (_Bool)allocateBundleBuffer:(unsigned int)arg1;	// IMP=0x000000000038f66c
- (unsigned int)bundleBufferSizeWidthMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;	// IMP=0x000000000038f65d
- (void)dealloc;	// IMP=0x000000000038f53b
- (id)initWithOperatingMode:(int)arg1 bundlingScheme:(int)arg2;	// IMP=0x000000000038f301

@end

