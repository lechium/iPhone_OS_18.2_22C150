//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawDataRendition
{
    NSData *_dataBytes;	// 216 = 0xd8
}

- (id)data;	// IMP=0x0000000000077049
- (int)pixelFormat;	// IMP=0x000000000007703e
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x0000000000076e5c
- (void)dealloc;	// IMP=0x0000000000076e16
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;	// IMP=0x0000000000076e04

@end
