//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface PBMutableData : NSMutableData
{
    char *p;	// 8 = 0x8
    char *buffer;	// 16 = 0x10
    char *end;	// 24 = 0x18
}

- (void *)mutableBytes;	// IMP=0x000000000000511a
- (const void *)bytes;	// IMP=0x0000000000005109
- (void)setLength:(unsigned long long)arg1;	// IMP=0x00000000000050b3
- (unsigned long long)length;	// IMP=0x0000000000005097
- (void)dealloc;	// IMP=0x0000000000005056
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000000500d

@end
