//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAffineTransform.h>

@interface NSAffineTransform (CARenderValue)
- (unsigned long long)CA_copyNumericValue:(double *)arg1;	// IMP=0x006000000005a448
- (unsigned long long)CA_numericValueCount;	// IMP=0x006000000005a43d
- (struct Object *)CA_copyRenderValue;	// IMP=0x006000000005a3c0
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x006000000024791a
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;	// IMP=0x00600000002476f7
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x00600000002ac48a
- (id)CAMLType;	// IMP=0x00600000002ac47d
- (struct CGAffineTransform)CA_CGAffineTransformValue;	// IMP=0x00600000002add3e
@end
