//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TMLAffineTransform : NSObject
{
    struct CGAffineTransform _transform;	// 8 = 0x8
}

+ (void)initializeJSContext:(id)arg1;	// IMP=0x0010000000016ce0
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) double ty;
@property(readonly, nonatomic) double tx;
@property(readonly, nonatomic) double d;
@property(readonly, nonatomic) double c;
@property(readonly, nonatomic) double b;
@property(readonly, nonatomic) double a;
- (id)CGAffineTransformValue;	// IMP=0x0000000000016ca1
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000016c52

@end
