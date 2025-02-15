//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BKDisplayAnnotationLocation : NSObject
{
    _Bool _inhibitRotation;	// 8 = 0x8
    _Bool _shouldAutoposition;	// 9 = 0x9
    _Bool _definedInReferenceSpace;	// 10 = 0xa
    struct CGPoint _superBias;	// 16 = 0x10
    struct CGPoint _point;	// 32 = 0x20
}

+ (id)relativeToBottomMiddleOfSuper:(struct CGPoint)arg1;	// IMP=0x00200000000a0d66
+ (id)relativeToBottomLeftOfSuper:(struct CGPoint)arg1;	// IMP=0x00100000000a0ccc
+ (id)relativeToTopLeftOfSuper:(struct CGPoint)arg1;	// IMP=0x00100000000a0c37
+ (id)centerAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000a0baf
+ (id)controlledBySupernode;	// IMP=0x00100000000a0b7f
@property(nonatomic) _Bool definedInReferenceSpace; // @synthesize definedInReferenceSpace=_definedInReferenceSpace;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) struct CGPoint superBias; // @synthesize superBias=_superBias;
@property(nonatomic) _Bool shouldAutoposition; // @synthesize shouldAutoposition=_shouldAutoposition;
@property(nonatomic) _Bool inhibitRotation; // @synthesize inhibitRotation=_inhibitRotation;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a09ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a09c1

@end

