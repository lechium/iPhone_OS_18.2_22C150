//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _FEWeakHelper : NSObject
{
    CDUnknownBlockType _deallocationBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c2d2
@property(copy, nonatomic) CDUnknownBlockType deallocationBlock; // @synthesize deallocationBlock=_deallocationBlock;
- (void)dealloc;	// IMP=0x000000000000c25e
- (void)invalidate;	// IMP=0x000000000000c244
- (id)initWithDeallocationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c1dc

@end
