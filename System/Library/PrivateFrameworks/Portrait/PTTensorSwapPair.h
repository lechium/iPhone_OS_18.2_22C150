//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PTTensorSwapPair : NSObject
{
    NSString *_names[2];	// 8 = 0x8
    struct __CVBuffer *_tensorPair[2];	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004959e
- (id)tensorNameWithIndex:(int)arg1;	// IMP=0x0000000000049580
- (struct __CVBuffer *)tensorWithIndex:(int)arg1;	// IMP=0x0000000000049566
- (void)dealloc;	// IMP=0x000000000004950c
- (id)initWithIOSurfaces:(struct __IOSurface **)arg1 names:(id)arg2;	// IMP=0x00000000000493aa

@end
