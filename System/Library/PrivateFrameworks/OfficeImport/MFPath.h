//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFPath : NSObject
{
}

- (int)fill:(id)arg1;	// IMP=0x0000000000362e86
- (int)stroke:(id)arg1;	// IMP=0x0000000000362e7b
- (int)widen:(id)arg1;	// IMP=0x0000000000362e70
- (int)flatten;	// IMP=0x0000000000362e65
- (int)closeFigure;	// IMP=0x0000000000362e5a
- (struct CGPoint)currentPoint;	// IMP=0x0000000000362e4e
- (int)abort;	// IMP=0x0000000000362e43
- (int)end;	// IMP=0x0000000000362e38
- (int)begin;	// IMP=0x0000000000362e2d
- (_Bool)isOpen;	// IMP=0x0000000000362e25
- (int)state;	// IMP=0x0000000000362e1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000362e15

@end
